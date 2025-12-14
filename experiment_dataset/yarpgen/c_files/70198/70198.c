/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [6] = (((((var_16 | var_5) + 2147483647)) >> (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (var_10 ? (arr_3 [i_0] [i_0] [4]) : (arr_6 [i_0] [i_0] [i_0] [i_0]));
                    var_21 = ((0 ? 1 : 1));
                    var_22 ^= (arr_3 [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_23 |= ((((((var_16 ? var_10 : var_10))) ? var_1 : (((var_10 ? var_14 : var_0))))));
    var_24 &= var_8;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] [14] = (1 >= 494903415);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_25 |= (var_9 / var_12);
                    arr_15 [i_3 + 1] [i_3] [i_3 - 1] = ((var_5 ? (arr_8 [i_3 - 1]) : var_5));
                    var_26 = (((arr_11 [i_4] [i_3] [i_3 + 1]) ? var_8 : (arr_11 [i_3] [i_3] [i_3 - 1])));
                    arr_16 [i_3] [i_4] [i_3] = var_18;
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        var_27 = (((((arr_19 [i_7 - 1] [i_4] [i_4] [i_3] [9]) ? var_18 : (arr_19 [i_7 - 3] [i_4] [i_6] [i_7] [i_4]))) >> (((((arr_19 [i_7 - 1] [i_4] [i_6] [i_4] [i_3]) * (arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2] [0]))) - 727650383))));
                        var_28 |= (((((arr_19 [i_3] [i_6] [i_4] [i_3] [i_3]) >= var_7)) && (arr_18 [i_7] [4] [i_7] [i_7])));
                        var_29 = (((((((arr_10 [i_3]) ? var_2 : var_9)))) ? ((-22 ? 3847 : 1)) : ((((arr_10 [i_3 - 1]) > var_0)))));
                        var_30 ^= ((((((arr_18 [i_4] [i_7 - 3] [10] [i_7]) ? var_17 : var_15))) ? ((2120581895 ? 2305843009213661184 : 1)) : (arr_13 [i_4] [i_4] [i_4])));
                    }
                    arr_21 [12] [i_4] [12] |= (((arr_20 [i_3 - 1] [i_3 - 1] [i_6] [i_4]) ? (arr_8 [i_3]) : (((var_16 ? var_6 : (arr_19 [i_3] [i_3 - 1] [i_3] [i_3] [i_3]))))));
                }
                arr_22 [i_4] [i_4] |= (((((var_9 ? (arr_18 [i_4] [i_3] [i_3] [i_4]) : var_9)) | var_6)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_31 *= ((((arr_13 [i_3 + 1] [i_3 - 1] [i_4]) ? (arr_18 [i_8] [i_4] [8] [i_4]) : (((arr_20 [i_3] [i_3] [i_3] [i_4]) ? var_18 : var_11)))));
                            var_32 = ((((((arr_19 [i_3] [i_3] [i_3] [i_9] [i_3 - 1]) ? (((arr_23 [i_4] [i_3]) ? (arr_9 [i_3]) : (arr_23 [5] [i_3]))) : ((var_0 ? (arr_9 [i_3]) : var_0))))) && (((var_5 ? var_2 : (arr_10 [i_3 + 1]))))));
                            arr_28 [i_3 - 1] [i_4] [i_3] [i_9] [i_9] = ((((17303 / 1) / ((var_13 ? var_5 : (arr_20 [i_3] [i_3] [i_3] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    var_33 ^= (((259198968 & 259198968) == ((((1 >> (887428180 - 887428155)))))));
    #pragma endscop
}
