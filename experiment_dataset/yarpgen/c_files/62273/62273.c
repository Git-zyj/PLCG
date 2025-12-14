/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_3 << (((!var_13) << (var_0 + 24122))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] |= var_2;
                    arr_9 [8] |= ((((((var_1 != (arr_7 [i_0] [i_1] [i_2]))))) | ((3264138107761200552 ? 65535 : 3264138107761200552))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] &= (var_1 ? (arr_2 [i_0 + 1]) : (arr_1 [2]));
                        var_19 = (min(var_19, (((var_5 >= (((arr_11 [i_0] [i_0 - 1] [0] [i_0 - 1]) + var_14)))))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_0] [i_0] [i_0] = var_16;
                        arr_16 [4] [i_2] [i_0] [i_0] = var_13;
                        var_20 = (arr_2 [i_4]);
                        var_21 = (((arr_3 [i_0 - 2] [i_1]) ? var_1 : var_17));
                        var_22 = (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] = (((arr_17 [i_0 + 1] [i_1]) + (((var_17 ? var_11 : var_0)))));
                        arr_20 [i_0] [7] [7] [7] = (65518 + 1);
                        var_23 = var_15;
                        arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] [1] = var_3;

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_24 = (min(var_24, (var_17 * var_15)));
                            arr_24 [10] [3] [3] [10] [i_5] [3] &= (var_6 ? var_3 : var_12);
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_28 [7] [i_0] [i_0] [i_0] [10] [i_7] = (arr_17 [i_2] [i_2]);
                        arr_29 [i_0] [i_7] [6] [i_1] [i_0] [i_0] = (var_10 % var_1);
                        var_25 *= var_17;
                        var_26 = var_3;
                        var_27 = (var_8 & var_5);
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 = (min(var_28, (((arr_14 [i_0] [i_0] [i_0 + 1] [i_8]) / var_0))));
            arr_32 [i_0] = ((var_0 ? ((((arr_27 [2]) >= var_10))) : var_2));
        }
    }
    #pragma endscop
}
