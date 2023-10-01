#include <mic3d.h>

static const uint16_t _data[] = {
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0203, 0x0200, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0004, 0x0506, 0x0507, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0208, 0x0506, 0x0509, 0x0a01, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x020b, 0x0c05, 0x0c08, 0x0a01, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x000d, 0x080e, 0x0b0f, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x100d, 0x0d00, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x1101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0112, 0x1301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0114, 0x1301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x1214, 0x1301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x1516, 0x1301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0117, 0x1815, 0x1301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0119, 0x1815, 0x1a01, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x1b1c, 0x1515, 0x1d1b, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x011b,
        0x1e1c, 0x1616, 0x1d1c, 0x1b00, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x1b19,
        0x1d16, 0x1616, 0x161d, 0x1c1c, 0x1701, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x011e, 0x1c16,
        0x1515, 0x1515, 0x1515, 0x161c, 0x1c1f, 0x1301, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x1f1c, 0x1d15,
        0x2020, 0x1818, 0x2015, 0x161d, 0x1c21, 0x1f22, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x2324, 0x2425, 0x151d, 0x1615,
        0x1826, 0x0000, 0x2618, 0x1516, 0x1d1c, 0x1e17, 0x2701, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0028, 0x0000, 0x0000, 0x292a, 0x2018,
        0x0000, 0x0000, 0x0000, 0x1815, 0x1d1c, 0x211f, 0x2b27, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x2423, 0x2c2d, 0x2800, 0x0000, 0x2928,
        0x2e2e, 0x2f30, 0x0000, 0x0018, 0x161c, 0x1c1e, 0x1722, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x2e31, 0x0232, 0x2833, 0x0000, 0x3402,
        0x3135, 0x2836, 0x3300, 0x0033, 0x161d, 0x1c21, 0x3738, 0x2701,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x012d, 0x3131, 0x0223, 0x2339, 0x0029, 0x3a31,
        0x312c, 0x232d, 0x3900, 0x003b, 0x161d, 0x1c21, 0x1f3c, 0x2200,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0131, 0x3131, 0x313d, 0x3d2c, 0x0029, 0x2c31,
        0x3131, 0x3d3e, 0x2c00, 0x0028, 0x141d, 0x1c21, 0x1f17, 0x133f,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x013d, 0x3131, 0x3131, 0x3d2c, 0x0040, 0x2f31,
        0x3131, 0x3e3e, 0x2d00, 0x3441, 0x1d1c, 0x1c21, 0x1f17, 0x4227,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0102, 0x0231, 0x313d, 0x0236, 0x0030, 0x233e,
        0x3131, 0x022c, 0x3029, 0x243a, 0x1d1c, 0x1c21, 0x1f17, 0x4243,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x013d, 0x3902, 0x3101, 0x2f34, 0x303a, 0x442d,
        0x013d, 0x2c36, 0x4024, 0x2312, 0x1c1c, 0x1c21, 0x1f17, 0x4227,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0244, 0x2f3a, 0x2436, 0x2344, 0x2145,
        0x2323, 0x3224, 0x3244, 0x1221, 0x1c1c, 0x211e, 0x1f17, 0x4246,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x4748, 0x4849, 0x4a4b, 0x2323, 0x4412, 0x2119,
        0x444b, 0x4c4d, 0x4e4e, 0x4f50, 0x5152, 0x521e, 0x1f17, 0x4246,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0147, 0x4853, 0x5454, 0x5454, 0x5355, 0x4f56, 0x5752, 0x5859,
        0x5955, 0x5454, 0x5454, 0x5454, 0x5453, 0x5350, 0x5a5b, 0x4246,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x5c48, 0x5354, 0x5454, 0x5454, 0x5454, 0x5454, 0x5454, 0x5454,
        0x5454, 0x5d5d, 0x5e5f, 0x5f5d, 0x5454, 0x5360, 0x6162, 0x4222,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x6347, 0x6053, 0x5454, 0x5454, 0x5454, 0x5454, 0x5d5d, 0x5e5f,
        0x6465, 0x6667, 0x6765, 0x685d, 0x5360, 0x4869, 0x6a17, 0x2b22,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x6363, 0x4760, 0x5354, 0x5454, 0x5454, 0x5d5d, 0x6b5f, 0x6c6d,
        0x6666, 0x6564, 0x5f5d, 0x5348, 0x695c, 0x696e, 0x1717, 0x2b3f,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0063, 0x636f, 0x4748, 0x6053, 0x5353, 0x5454, 0x5d5d, 0x5d6b,
        0x5e5e, 0x5555, 0x7047, 0x695c, 0x6f69, 0x6e5b, 0x1f37, 0x1b3f,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x6363, 0x5c5c, 0x6f69, 0x4747, 0x4848, 0x4848, 0x7070,
        0x7171, 0x7273, 0x7373, 0x7161, 0x6974, 0x2b1f, 0x1f75, 0x1742,
        0x3f00, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0063, 0x635c, 0x6f5c, 0x5c6f, 0x5c5c, 0x7373, 0x736f,
        0x6f76, 0x7177, 0x7777, 0x715c, 0x7875, 0x1e1f, 0x1f1f, 0x373c,
        0x3f00, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x6363, 0x5c69, 0x4747, 0x6973, 0x7372, 0x4848,
        0x4870, 0x7771, 0x616e, 0x785b, 0x1e21, 0x1e1f, 0x1f1e, 0x1f37,
        0x3c3f, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x3d11, 0x797a, 0x745c, 0x5c6f, 0x6f6f, 0x6f6f,
        0x5c73, 0x6e6a, 0x7b7c, 0x1c1c, 0x2121, 0x1e1e, 0x2121, 0x1e1f,
        0x372b, 0x3f00, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x017d, 0x1f17, 0x1737, 0x177e, 0x7f80, 0x786a, 0x8182,
        0x1283, 0x8420, 0x1516, 0x1d1c, 0x1c1c, 0x1c1c, 0x1c1c, 0x211e,
        0x373c, 0x1301, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x1721, 0x2137, 0x371f, 0x1e21, 0x1c1c, 0x1d16, 0x853b,
        0x2626, 0x2626, 0x262a, 0x2a18, 0x2015, 0x1d16, 0x161d, 0x1c1e,
        0x1b1b, 0x423f, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0113, 0x1c1d, 0x1c1f, 0x1f1e, 0x1c1d, 0x1d16, 0x202a, 0x2900,
        0x0000, 0x0000, 0x0000, 0x292a, 0x181d, 0x1615, 0x161d, 0x1c1f,
        0x4242, 0x383f, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x1317, 0x1d15, 0x1621, 0x1e21, 0x1d16, 0x1515, 0x1826, 0x0000,
        0x0000, 0x0000, 0x0000, 0x293b, 0x1916, 0x2020, 0x161c, 0x2117,
        0x3f42, 0x2b3f, 0x2201, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x131e, 0x1d16, 0x161c, 0x211c, 0x1d16, 0x1615, 0x183b, 0x2900,
        0x0000, 0x0000, 0x0029, 0x2a20, 0x1920, 0x1820, 0x161c, 0x1f2b,
        0x2242, 0x2b3f, 0x4601, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x221e, 0x1c1d, 0x1d1c, 0x211c, 0x1c1d, 0x1615, 0x183b, 0x2600,
        0x0026, 0x262a, 0x2926, 0x1815, 0x1518, 0x1815, 0x1c21, 0x1742,
        0x222b, 0x4222, 0x4301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x2237, 0x211c, 0x1c1d, 0x1815, 0x211d, 0x1620, 0x182a, 0x2929,
        0x1818, 0x1815, 0x1820, 0x2018, 0x1820, 0x151d, 0x211f, 0x2b22,
        0x3f2b, 0x1322, 0x4301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x2217, 0x1e21, 0x1c19, 0x7c7c, 0x2b1d, 0x1620, 0x8526, 0x0025,
        0x3819, 0x2626, 0x2685, 0x1818, 0x2016, 0x1c1c, 0x1e17, 0x1346,
        0x4242, 0x3f46, 0x4301, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x2242, 0x171f, 0x1f3c, 0x3f13, 0x2116, 0x203b, 0x2629, 0x0026,
        0x391b, 0x7c18, 0x8518, 0x1516, 0x1d1c, 0x211f, 0x1742, 0x463f,
        0x423f, 0x2243, 0x4300, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0022, 0x1342, 0x1322, 0x221a, 0x2018, 0x8687, 0x6767, 0x0000,
        0x0034, 0x7d7d, 0x191d, 0x1921, 0x1e1f, 0x373c, 0x1346, 0x4613,
        0x3f22, 0x4643, 0x4300, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x2222, 0x4646, 0x3816, 0x8889, 0x5e5e, 0x8a8b, 0x6629,
        0x2926, 0x187c, 0x3f42, 0x2b3c, 0x3c38, 0x133f, 0x4646, 0x3f3f,
        0x2246, 0x4343, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x2746, 0x1b83, 0x595d, 0x8c8d, 0x858e, 0x2a29,
        0x2926, 0x8516, 0x1738, 0x3f3f, 0x2246, 0x4646, 0x2222, 0x2246,
        0x4343, 0x4343, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0043, 0x1357, 0x548f, 0x158f, 0x8b90, 0x916d,
        0x656d, 0x2019, 0x172b, 0x4242, 0x3f3f, 0x223f, 0x2222, 0x4643,
        0x4343, 0x4300, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0043, 0x277b, 0x6092, 0x1993, 0x8f8f, 0x8f91,
        0x5e5e, 0x941a, 0x4213, 0x1313, 0x3f3f, 0x2222, 0x4646, 0x4343,
        0x4343, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x4346, 0x9570, 0x9657, 0x5283, 0x5659,
        0x5397, 0x7e42, 0x3f3f, 0x2222, 0x2222, 0x4646, 0x4643, 0x4343,
        0x4300, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0043, 0x4680, 0x9876, 0x9999, 0x7171,
        0x9a62, 0x4222, 0x4646, 0x4646, 0x4646, 0x2743, 0x4343, 0x4343,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0043, 0x2213, 0x1342, 0x6242,
        0x423f, 0x4646, 0x4646, 0x4646, 0x2743, 0x4343, 0x4343, 0x4300,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x009b, 0x0401, 0x0146, 0x2246,
        0x4343, 0x4343, 0x4301, 0x0101, 0x0101, 0x019c, 0x2700, 0x0000,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0x0403, 0x9d09, 0x0c09, 0x0e0b, 0x9e0b, 0x9e9f, 0x070f,
        0x0101, 0xa007, 0x079d, 0x0e0e, 0x0e0e, 0x0e9e, 0x9f07, 0xa100,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x030e, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0909, 0x0e08, 0x0b9e,
        0x9d9d, 0x0e09, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0903,
        0xa101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x009e,
        0x0c0c, 0x0c0c, 0x0505, 0x050c, 0x0c0c, 0x0c05, 0x0c0c, 0x0e0b,
        0x0b09, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c0c, 0x0c08,
        0xa1a2, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x009f,
        0x0e05, 0x050c, 0x0506, 0x0605, 0x0c0e, 0x0606, 0x0c0e, 0x089f,
        0x9e9d, 0x0e0c, 0x0c0c, 0x0c0e, 0x0505, 0x0c0c, 0x0c9e, 0xa39f,
        0xa10a, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0xa40f, 0x0404, 0x04a5, 0xa604, 0x04a1, 0xa5a5, 0xa10d, 0xa4a7,
        0xa4a4, 0x0d07, 0x039e, 0x9d04, 0xa8a8, 0xa99d, 0x04a1, 0xa19b,
        0x0aa2, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0101, 0xa2a2, 0x9b9b, 0x9b9b, 0x9ba2, 0xa29b, 0x9ba7, 0x9ba2,
        0xa20a, 0x0aa2, 0xa7a7, 0xaaa7, 0x0202, 0x029b, 0x9b9b, 0xa20a,
        0xa201, 0x0101, 0x0101, 0x0101, 0x0000, 0x0000, 0x0000, 0x0001,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0xa2a2, 0xa2a2, 0xa2a2, 0xaba2, 0x3e3e, 0x01a2,
        0x0000, 0xa2a2, 0x0aa2, 0xa29b, 0x9ba2, 0xa2a2, 0xa2a2, 0xa201,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x00a2, 0xa2a2, 0x3e3e, 0xa201, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0100, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101,
        0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101
};

static const uint16_t _palette_data[] = {
        0xfbfe, 0x90a4, 0x94c5, 0x86f6, 0x8273, 0x93fe, 0x9ffe, 0x82b4,
        0x835c, 0x83bd, 0x80c6, 0x837b, 0x83fe, 0x81cd, 0x83bc, 0x8651,
        0x9a4f, 0x9567, 0xbb0f, 0x99e7, 0xcbb3, 0xd3f4, 0xcff3, 0xaecb,
        0xdbd6, 0xc3b1, 0xb30d, 0xaa6a, 0xc7f1, 0xc3f3, 0xb78f, 0xb34e,
        0xd3f6, 0xbfcf, 0x9185, 0xc651, 0xe316, 0xdf78, 0xeffc, 0x8d24,
        0xe338, 0xf7fe, 0xeffa, 0xa669, 0x9d07, 0xb1ac, 0xa96a, 0xbe0f,
        0xe759, 0x8000, 0xd2d5, 0xeb7a, 0xef9b, 0xad8b, 0xd6d5, 0xaf2d,
        0xa649, 0xb5cd, 0xce93, 0xe7da, 0xaaaa, 0x8c83, 0x8022, 0x95a6,
        0xf3bc, 0xd737, 0x9e28, 0x8d04, 0xc251, 0xc312, 0x8d45, 0x8012,
        0x8016, 0x98b5, 0xb5b2, 0xc613, 0xb9d5, 0x94b9, 0x8cbb, 0x9519,
        0x8cb8, 0x9997, 0xb2f3, 0x801c, 0x801f, 0x8c5c, 0xb273, 0xaa92,
        0xaa75, 0x90fb, 0x9e13, 0xa68c, 0x800b, 0x885f, 0x90bf, 0x98df,
        0x8019, 0x8410, 0x9e2b, 0x8008, 0xad7f, 0xbdff, 0xce9f, 0xe33e,
        0xa95d, 0x8010, 0x910b, 0x94dd, 0xb9bf, 0xbe3f, 0x842b, 0x800d,
        0x8c56, 0x8c53, 0x842d, 0x802d, 0x8029, 0xb30e, 0x8c70, 0x9078,
        0x9108, 0x9989, 0x8cca, 0x99ac, 0xb72e, 0xaeab, 0xae8c, 0xaaae,
        0x958a, 0x992b, 0xa64d, 0xc733, 0xd353, 0xe3f8, 0xe7bb, 0xd2fe,
        0xc376, 0xa17d, 0x9d3d, 0xa15e, 0xbaf8, 0xd7f9, 0xd77a, 0xb6b8,
        0xadfd, 0xb65d, 0x9998, 0xb737, 0xb2f4, 0x9d4d, 0x9113, 0x9117,
        0x910e, 0x9130, 0x954f, 0x8128, 0x8906, 0x8317, 0x835a, 0x82d5,
        0x960c, 0x8210, 0x80e7, 0x8b5a, 0x818c, 0x8673, 0x86b3, 0x8149,
        0x979c, 0x877b, 0x814a, 0x80a5, 0xafff, 0x86d4, 0x8a95, 0xa549,
        0xa552, 0xb595, 0xc639, 0xadf4, 0xaa57, 0x9131, 0xa11f, 0x88a6,
        0xba8e, 0xbedd, 0xcf1b, 0xcb1d, 0xe3fd, 0x99ef, 0x88d5, 0xc3d4,
        0xbf56, 0x8231, 0xcfff, 0xa2f7, 0xabbd, 0x9673, 0xd3fe, 0xbbfe,
        0x9f59, 0x96f6, 0x85cf, 0xafdd, 0xd395, 0xb1f2, 0xca59, 0xa975,
        0x9576, 0xae3b, 0xcafb, 0xa9dc, 0xc318, 0xe35e, 0xaa58, 0xa1da,
        0x99b3, 0xa20f, 0x82b7, 0xa757, 0xb198, 0xa12e, 0xb6be, 0xd6b6,
        0xc35d, 0xbbdb, 0xaa57, 0x9914, 0xbffd, 0x9ad3, 0x8cf3, 0xaa7a,
        0xae78, 0x8b3b, 0x8172, 0xa1d4, 0x835d, 0x8217, 0x831d, 0x8172,
        0x8239, 0x831d, 0x8279, 0xad7d, 0x810c, 0xfbde, 0xfbde, 0xfbde,
        0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};

const picture_t picture_baku = {
        .data      = _data,
        .data_size = sizeof(_data),
        .width     = 64,
        .height    = 102
};

const palette_t palette_baku = {
        .data      = _palette_data,
        .data_size = sizeof(_palette_data)
};