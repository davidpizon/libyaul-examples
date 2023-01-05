#include "state.h"

static render_t _render;
static sort_t _sort;
static tlist_t _tlist;
static mat_stack_t _mat_stack;

void
mic3d_init(void)
{
        __state.render = &_render;
        __state.sort = &_sort;
        __state.tlist = &_tlist;
        __state.mat_stack = &_mat_stack;

        __render_init();
        __sort_init();
        __tlist_init();
        __matrix_init();
}