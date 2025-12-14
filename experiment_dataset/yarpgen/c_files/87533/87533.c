/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((-9223372036854775807 - 1) ? 0 : (((8388607 ? var_2 : var_10)))));
        arr_3 [6] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = var_14;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_2] = ((var_13 ? ((var_7 ? var_10 : var_12)) : var_10));
                    arr_13 [i_3] [i_2] [i_1] |= ((var_11 ? ((var_3 ? var_8 : var_12)) : var_6));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [i_7] [i_6] [i_5] [i_4 + 1] [i_1] = var_6;
                                arr_28 [i_1] [i_4] [i_5] [i_1] [i_6] [i_7 + 1] [i_7 - 1] = ((((var_5 ? var_10 : var_4))) ? ((var_5 ? var_1 : var_4)) : var_1);
                                arr_29 [i_1] [i_4 - 4] [i_5] [i_6] [i_7] = var_8;
                                arr_30 [i_5] [i_5] [i_5] [i_7] = ((var_12 ? var_2 : var_12));
                                arr_31 [i_1] = var_12;
                            }
                        }
                    }
                    arr_32 [i_1] = ((((var_13 ? var_17 : var_10))) ? var_15 : (((var_14 ? var_0 : var_1))));
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        arr_36 [i_8 - 3] = (((((var_6 ? var_2 : (((var_11 ? var_5 : var_12)))))) ? ((var_9 ? (((var_7 ? var_10 : var_13))) : var_16)) : var_0));
        arr_37 [i_8 + 1] [i_8 + 2] = var_14;
    }
    var_18 = var_0;
    #pragma endscop
}
