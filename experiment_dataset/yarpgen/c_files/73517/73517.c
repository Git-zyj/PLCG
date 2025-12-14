/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_1, var_10));
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = 55234577;

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_14 = ((((((((var_4 ? var_0 : (arr_3 [i_0])))) ? 37 : var_4))) ? (arr_1 [i_0]) : (((((var_1 ? -1121435787 : var_8))) ? ((((arr_6 [i_0] [i_1] [i_0] [i_1]) ? (arr_0 [i_2]) : var_8))) : (max((arr_4 [i_0] [13]), var_3))))));
                    var_15 = var_7;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_16 = (!(arr_5 [i_0]));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_17 += var_7;
                                var_18 = (((arr_11 [i_4 - 1] [i_4 + 1] [i_5] [i_4]) ? ((~(arr_4 [7] [12]))) : var_5));
                                var_19 = ((-(var_5 / var_10)));
                                arr_17 [i_0] [i_0] [i_4] = var_5;
                                var_20 = ((-var_2 || (arr_2 [i_3] [i_4 - 1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_6] [1] [1] [1] = var_2;

                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        var_21 *= (arr_6 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1]);
                        var_22 = (max(var_22, (~var_8)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_23 *= var_9;
                        var_24 = (~1);
                        arr_27 [i_6] = (((arr_26 [7] [8] [i_6]) <= (arr_18 [i_0] [i_6] [i_8])));
                        var_25 = (arr_18 [i_6] [i_1] [i_0]);

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_26 = ((var_2 || (arr_30 [i_0] [i_0] [i_0] [i_0])));
                            var_27 = var_10;
                            arr_31 [i_0] [i_1] [i_6] [i_8] [7] = (((var_4 - 8) ^ ((var_1 ? var_5 : 239))));
                            var_28 = 8;
                        }
                    }

                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        arr_35 [i_1] = var_9;
                        arr_36 [i_0] [1] [i_0] [i_0] &= ((-(arr_22 [i_10 + 1] [i_6] [i_6] [i_0])));
                        var_29 -= -var_2;
                    }
                }
                var_30 = var_4;
            }
        }
    }
    var_31 = var_4;
    var_32 |= var_3;
    #pragma endscop
}
