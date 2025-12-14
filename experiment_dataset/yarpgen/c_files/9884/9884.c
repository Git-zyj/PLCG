/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((15354 + var_13) ? var_1 : var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (((((var_16 ? (arr_8 [i_1]) : var_11))) ? var_11 : var_11));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 = -69;
                        var_19 = -var_5;
                        arr_13 [i_1] [i_1] [i_1] |= (min((arr_0 [i_1 + 2]), (-1778619007 / 1778619004)));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_20 = 13455;
                        var_21 = (~22298);
                        arr_18 [i_2] [i_1] [i_2] = ((-((max((((arr_2 [2] [i_2]) && var_2)), (arr_4 [i_1 - 2]))))));
                    }

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_22 = (min(var_22, (max(((-((67 ? 2009832225 : -14721)))), (((max(1, var_12))))))));
                        var_23 = (((~(~-2009832226))));
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_24 = ((var_16 ? (var_5 || 2147483647) : -var_11));
                        var_25 = (arr_15 [i_0] [15]);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_26 [i_2] [i_1] [i_1] [i_2] = ((-2009832225 >= ((((((-(arr_10 [i_0] [i_0] [0] [i_7])))) ? ((var_9 + (arr_10 [i_0] [15] [11] [i_7]))) : 40895)))));
                        arr_27 [i_0] [i_1] [i_2] = ((!(((arr_24 [i_1 - 2] [i_1] [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1]) != (arr_0 [i_1 + 1])))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_30 [i_2] [8] [i_2] = (((((60956 ? -1778619007 : -3539105446200288464)) + var_6)) * ((((!(max(0, 1)))))));
                        arr_31 [i_8] [i_2] [i_1] [i_1 - 2] [i_2] [i_0] = (((((max(var_15, 2009832225)))) ? (((arr_20 [i_8] [i_2] [i_1 + 2] [i_0]) / (arr_20 [i_0] [i_1 + 3] [i_2] [i_8]))) : (max(((min(1, var_7))), (((arr_25 [i_8] [i_0] [i_2] [i_2] [1]) ? (arr_0 [i_8]) : var_12))))));
                        var_26 += (arr_15 [11] [11]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_0] [i_2] [i_0] [i_9] = var_16;
                        arr_35 [i_2] [i_1] [11] [i_9] = (((((arr_16 [i_1 + 2] [i_1] [i_1] [i_1 + 3]) ? var_9 : var_7)) - ((-(arr_0 [i_0])))));
                    }
                }
            }
        }
    }
    var_27 = var_9;
    var_28 = -var_8;
    var_29 = (((var_5 ? var_9 : var_0)));
    #pragma endscop
}
