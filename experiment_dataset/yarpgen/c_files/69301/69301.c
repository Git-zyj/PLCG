/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_6 ? ((975514368 ? -975514369 : 23199)) : var_6))) ? var_9 : ((((var_3 ? var_6 : var_3))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((var_7 ? var_10 : var_1))) ? var_11 : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((1977242158 ? -975514369 : -1573778364));
                    var_13 -= (((((42098 ? 1 : 18446744073709551615))) ? (((((var_7 ? var_11 : var_4))) ? var_2 : ((var_8 ? var_7 : var_10)))) : ((((var_8 ? var_1 : var_10)) >> (var_6 - 71)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((((16 ? -975514369 : -125))) ^ ((var_11 ? (((-125 ? -66 : 4000819522814397876))) : var_11)))))));
                                var_15 = (((-975514369 + 2147483647) >> (25897 - 25896)));
                                arr_16 [i_2] = (((var_6 ? ((var_9 ? var_10 : var_7)) : (((var_1 ? var_9 : var_5))))));
                                arr_17 [i_2] [i_2] = (var_9 ? var_10 : (((-3318800964128171172 ? var_8 : (var_5 - var_5)))));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((((((885842613 ? 2147483647 : 0))) >= ((-6088984877848984374 ? -2311299692868476271 : 2599023691714624526)))))));
                }
            }
        }
        var_17 = -1628760737;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((((16 ? 7196 : 11310194175241268793))) ? ((1628760736 ? -3318800964128171172 : 0)) : ((((42098 + 2147483647) << (((-8901404372100552826 + 126) - 4))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 -= (((var_2 != var_8) ? (var_11 >= var_7) : (var_7 <= var_6)));
                    var_20 = ((1 ? -6088984877848984374 : 16));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_21 |= ((((((1628760736 ? 16 : 89))) ? var_1 : (var_5 - var_6))));
        var_22 += ((((975514367 ? 1916369038510165796 : 2147483647))));
    }
    #pragma endscop
}
