/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((+(((arr_1 [i_0 - 2]) / var_4))));
                arr_6 [i_1] [i_0] [i_0] = (min((max(var_5, var_6)), (arr_3 [i_0] [i_0 + 1] [i_1])));
                arr_7 [i_0] [i_1] = ((-((~(arr_0 [i_0 + 1])))));
            }
        }
    }
    var_12 = (max(var_12, ((min(((((var_6 ? var_2 : var_0)) * ((max(var_3, var_7))))), (201 | 65))))));

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        arr_12 [i_2] = var_9;
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_5] [i_5] [i_3] = (((min(var_6, (arr_15 [i_2])))));
                        var_13 = ((((~(~var_7)))) / ((((min((arr_18 [i_2] [7] [7] [i_5] [i_5] [i_5]), (arr_8 [i_2])))) ? ((245 ? 245 : 0)) : -119)));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_14 = (arr_23 [i_4 + 1] [i_2]);
                            var_15 = -var_3;
                            var_16 = (max(var_16, var_1));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_4] [i_5] [i_7] = ((-(((arr_23 [i_2] [i_2]) * var_1))));
                            arr_28 [i_2] [1] [i_4 + 1] |= ((2326799719 ? ((min((arr_22 [i_3] [i_5 + 3] [i_7] [i_7] [i_7 + 2] [i_7 - 1]), (arr_22 [i_4] [i_5 + 4] [i_5] [10] [i_7 - 1] [i_7])))) : (min(var_6, (arr_20 [4] [i_5 - 1] [i_5] [i_5 - 1])))));
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_17 = (min(var_17, 11));
            var_18 = ((2009293236148902986 ? ((3072 ? (arr_29 [i_2 + 2] [i_2 + 1] [i_2]) : 1)) : 1514057530));
            arr_32 [i_2] [i_8] = (min((max((arr_25 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [9] [i_2]), (arr_14 [i_2] [i_2 - 1] [i_2 + 4]))), ((((arr_25 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 3] [i_2] [i_2]) / (arr_25 [9] [i_2] [i_2 - 1] [i_2 + 3] [i_2 - 2] [i_2] [i_2]))))));
            arr_33 [i_2] [i_2] = (((min(44298, 1414913569)) / (((arr_2 [i_2 + 4] [i_2 + 1]) ? (arr_2 [i_2 + 4] [i_2 + 4]) : var_1))));
        }
    }
    #pragma endscop
}
