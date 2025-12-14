/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((((var_1 + 2147483647) >> (var_9 - 856267983)))) ? var_1 : (((((var_15 ? var_12 : var_12))) ? var_15 : (((max((-127 - 1), var_12))))))));
    var_17 = (max(var_2, (((var_4 / ((max(-26339, var_13))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((max(2827028680807524578, (arr_0 [i_0] [i_0]))) - (((~(arr_0 [i_0] [i_0]))))));
        var_19 = (26338 ^ 26339);
        var_20 -= var_0;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_4 [i_1] = (((((-26335 ? 26339 : -17582))) ? (arr_2 [i_1]) : (arr_0 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 = (min(var_21, (((26339 - (arr_6 [i_1]))))));
                    var_22 = var_14;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_23 += ((-((2742146420 ? (arr_10 [i_1 - 2]) : 26339))));
                        var_24 = (min(var_24, (((var_5 ? (arr_8 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_3 - 1]) : var_0)))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_14 [i_5] [i_5] [i_2] [i_2] [i_5] [i_1 - 1] = var_11;

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_25 += (min(var_0, var_5));
                            var_26 *= arr_6 [i_5];
                            var_27 |= (26353 ^ var_6);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_28 = (((arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 1] [8]) ? 1 : (arr_15 [i_3 - 1] [i_3 - 1] [i_3] [9] [i_3] [i_3] [i_3])));
                            var_29 = ((-((var_7 ? (arr_12 [1] [1] [3] [i_5] [i_7]) : (arr_15 [i_1] [i_1] [i_1] [i_3] [9] [i_7] [i_7])))));
                            var_30 = (((arr_10 [i_3 - 1]) ? ((((arr_12 [i_1] [i_2] [i_3] [i_2] [i_7]) ? -26357 : -26357))) : (((arr_8 [i_1] [i_3] [i_5] [i_7]) ? var_9 : (arr_0 [i_7] [4])))));
                            var_31 -= 26331;
                            arr_19 [i_5] [i_2] [i_3] [9] [i_7] = var_6;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_32 = (arr_2 [i_5]);
                            arr_24 [i_2] [i_5] = ((((!(arr_23 [1] [i_3 - 1] [i_2] [i_5]))) ? (((arr_23 [i_1] [i_3 - 1] [i_3] [0]) ? 10071 : 6008767640709246285)) : (((var_15 ? (arr_23 [i_1] [i_3 - 1] [i_8] [i_5]) : (arr_23 [i_1] [i_3 - 1] [1] [1]))))));
                            var_33 = var_14;
                        }
                        var_34 = (((~1) > (arr_21 [i_5] [i_3] [i_3 - 1] [i_3] [i_3] [i_2] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 7;i_9 += 1)
                    {
                        var_35 = var_9;
                        var_36 = (max(var_36, ((((arr_11 [i_1] [i_3 - 1] [i_9]) ? (arr_1 [i_3 - 1]) : (arr_18 [i_2] [i_2] [i_3]))))));
                    }
                }
            }
        }
    }
    var_37 = var_6;
    var_38 = (max(-26364, (max(((var_1 ? var_11 : var_13)), var_11))));
    #pragma endscop
}
