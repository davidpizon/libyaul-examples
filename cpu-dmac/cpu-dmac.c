/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <yaul.h>

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void _dmac_handler(void);
static void _frt_ovi_handler(void);

static void _hardware_init(void);

static volatile uint16_t _frt = 0;
static volatile uint32_t _ovf = 0;
static volatile bool _done = false;

int
main(void)
{
        _hardware_init();

        dbgio_dev_default_init(DBGIO_DEV_VDP2);
        dbgio_dev_set(DBGIO_DEV_VDP2);

        char *buffer;
        buffer = malloc(1024);
        assert(buffer != NULL);

        cpu_dmac_init();
        cpu_dmac_interrupt_priority_set(8);

        cpu_frt_init(FRT_CLOCK_DIV_8);
        cpu_frt_ovi_set(_frt_ovi_handler);

        uint32_t ch;
        ch = 0;

        struct dmac_ch_cfg cfg __unused = {
                .dcc_ch = ch,
                .dcc_src_mode = DMAC_SOURCE_INCREMENT,
                .dcc_dst = 0x20000000,
                .dcc_dst_mode = DMAC_DESTINATION_INCREMENT,
                .dcc_src = 0x26000000,
                .dcc_len = 0x00100000,
                .dcc_stride = DMAC_STRIDE_1_BYTE,
                .dcc_bus_mode = DMAC_BUS_MODE_BURST,
                .dcc_ihr = _dmac_handler
        };

        while (true) {
                dbgio_buffer("[H");

                uint32_t xfer;
                for (xfer = 0; xfer < 3; xfer++) {
                        cfg.dcc_stride = xfer;

                        while ((xfer > 0) && !_done);
                        _done = false;

                        cpu_dmac_channel_config_set(&cfg);

                        (void)sprintf(buffer, "\n DAR%lu:  0x%08lX\n"
                            " SAR%lu:  0x%08lX\n"
                            " TCR%lu:  0x%08lX\n"
                            " DRCR%lu: 0x%08X\n"
                            " CHCR%lu: 0x%08lX\n"
                            " DMAOR: 0x%08lX\n",
                            ch,
                            MEMORY_READ(32, CPU(DAR0 | (ch << 4))),
                            ch,
                            MEMORY_READ(32, CPU(SAR0 | (ch << 4))),
                            ch,
                            MEMORY_READ(32, CPU(TCR0 | (ch << 4))),
                            ch,
                            MEMORY_READ(8, CPU(DRCR0 | (ch << 4))),
                            ch,
                            MEMORY_READ(32, CPU(CHCR0 | (ch << 4))),
                            MEMORY_READ(32, CPU(DMAOR)));

                        dbgio_buffer(buffer);

                        cpu_dmac_channel_start(ch);
                        _frt = 0;
                        _ovf = 0;
                        cpu_frt_count_set(0);

                        dbgio_flush();
                        vdp_sync(0);

                        while (!_done);

                        uint32_t ticks;
                        ticks = (uint32_t)(_frt + ((0xFFFF + 1) * _ovf));

                        sprintf(buffer, " Completed in %lu ticks\n", ticks);
                        dbgio_buffer(buffer);

                        dbgio_flush();
                        vdp_sync(0);
                }

                /* Switch over to the next channel */
                ch ^= 1;

                cfg.dcc_ch = ch;
        }

        return 0;
}

static void
_hardware_init(void)
{
        vdp2_tvmd_display_res_set(TVMD_INTERLACE_NONE, TVMD_HORZ_NORMAL_A,
            TVMD_VERT_224);

        vdp2_scrn_back_screen_color_set(VRAM_ADDR_4MBIT(3, 0x01FFFE),
            COLOR_RGB555(0, 3, 15));

        cpu_intc_mask_set(0);

        vdp2_tvmd_display_set();
}

static void
_dmac_handler(void)
{
        _frt = cpu_frt_count_get();
        _done = true;
}

static void
_frt_ovi_handler(void)
{
        _ovf++;
}