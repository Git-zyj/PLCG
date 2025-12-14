/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_12 : ((var_8 ? ((var_11 ? var_5 : var_7)) : var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((var_6 ? var_7 : var_9))) ? (((var_11 ? var_3 : var_9))) : ((var_2 ? var_1 : var_14))));
        var_17 = (min(var_17, (((var_14 ? (((var_5 ? var_6 : 145))) : ((var_0 ? var_10 : var_2)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_10 [i_0] [6] [i_1] [i_0] = (1 ? 216 : 49);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [13] [i_1] = ((((var_14 ? var_4 : var_14))) ? ((var_4 ? var_6 : var_4)) : var_5);
                        var_18 = (max(var_18, (((-12809 ? ((0 ? 132 : 0)) : 165)))));
                        var_19 = (max(var_19, var_13));
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [1] = ((var_11 ? ((132 ? 1 : 8)) : ((var_0 ? var_7 : var_13))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_20 -= (((((6 ? 94 : 1))) ? var_1 : var_2));
                        var_21 = var_2;
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = ((var_2 ? var_5 : ((var_2 ? var_11 : var_1))));
    }
    var_22 = var_4;
    #pragma endscop
}
