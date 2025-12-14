/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? (min((var_1 * var_12), var_3)) : var_11));
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] |= (((arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 4]) * (((arr_5 [i_2 + 1] [i_2 + 4] [i_2 + 2] [i_2 + 2]) ? (arr_3 [i_2 + 2] [i_2 - 1] [i_2 + 3]) : (arr_5 [i_2 + 4] [i_2 + 2] [i_2 + 1] [i_2 + 4])))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2 + 3] [i_3] = (((arr_5 [i_0] [i_0] [i_0] [i_2]) ? (arr_3 [i_2] [i_2] [i_2]) : (arr_1 [i_0] [i_0 + 2])));
                        arr_10 [20] [i_2] [i_1 - 3] [20] &= (((arr_1 [i_1 - 4] [i_1 - 3]) / 15));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_1 - 4] [i_2] [i_1 - 4] [i_0] = ((-(arr_2 [i_0])));

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] = (((((((arr_14 [i_5 - 1] [21] [i_2 + 4] [i_4] [i_2 + 4] [i_0 + 2] [i_0]) + 2147483647)) << (15 - 15))) & (arr_14 [i_5 + 1] [i_5 + 1] [i_0] [i_4] [i_2 + 4] [i_0 + 2] [i_0])));
                            arr_17 [i_0] [i_0] [i_2] [i_4] = (((-9223372036854775807 - 1) ? (min((arr_2 [i_5]), (arr_0 [i_0 - 1]))) : var_7));
                            arr_18 [i_0] [i_0] [i_1] [19] [i_1] [i_0] [i_5 - 1] = (max(((max((arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]), (max(var_3, (arr_3 [i_2 + 4] [i_5] [i_1])))))), (((((var_11 ? var_12 : 44))) ? (((var_4 ? 44 : var_7))) : (65490 & var_10)))));
                        }
                        arr_19 [i_4] [i_4] [i_2] [i_4] = ((((min(var_1, 65476))) ? (((arr_4 [i_1 - 4]) ? 4096684904 : (arr_4 [i_1 + 1]))) : ((((var_2 ^ 15) ? (((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_1] [i_2 + 2] [i_4]) : var_6)) : (((var_4 < (arr_4 [i_4])))))))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_6] [i_6] [i_6] [i_0] = (((((((var_1 ? 9223372036854775807 : (arr_3 [i_1] [i_1] [i_1])))) ? (arr_2 [i_0 + 2]) : (((max((arr_12 [i_0] [i_0] [i_2 + 4] [i_6]), 65495)))))) & ((min((arr_21 [i_0] [i_6]), (((arr_2 [i_2]) ? 65500 : (arr_22 [i_0] [i_6] [i_6] [i_6]))))))));
                        arr_25 [i_0] [i_0] [i_6] [i_0] = ((((max(81, 65518)))) == ((-189655034 ? (-9223372036854775807 - 1) : 65494)));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_29 [i_0 + 1] [i_1 - 3] [i_7] [i_1 - 3] = 65535;
                        arr_30 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1] = 1;
                    }
                    arr_31 [i_0 - 1] [i_1] [i_2] [i_2] = (((arr_5 [i_1 - 4] [i_1 + 1] [i_1 - 1] [i_1 - 4]) ? ((0 ? 189655033 : 64386)) : (arr_27 [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_1 - 2] [i_2 + 4])));
                }
            }
        }
    }
    #pragma endscop
}
