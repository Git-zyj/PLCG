/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 = (~var_1);
        arr_3 [i_0] = (arr_2 [i_0 - 1] [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [2] [i_1] [i_2] [i_2] = var_4;

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            var_18 = ((!((var_6 > (arr_14 [i_4])))));
                            arr_15 [1] [1] [6] [i_2] [i_3] [i_4 - 1] = ((arr_10 [i_0] [i_1] [i_3 - 1] [i_4 + 1]) && var_13);
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = var_13;
                            var_19 = var_2;
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] = ((arr_1 [i_0 - 2] [i_2 + 1]) ? (arr_1 [i_0 - 1] [i_2 + 2]) : (arr_1 [i_0 + 1] [i_2 + 2]));
                            var_20 *= ((var_12 ^ (((arr_12 [i_0] [i_1] [i_2] [9] [2]) ? var_14 : (arr_4 [i_3] [5])))));
                            var_21 &= (((arr_4 [i_2 + 2] [i_5 + 1]) || (arr_4 [i_0 - 1] [i_3 - 1])));
                            var_22 = var_11;
                            arr_21 [i_0] [7] [i_2] [i_3 - 2] [i_5] = ((!(~var_9)));
                        }
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            arr_24 [i_3] [i_3] |= (((!-17801) ? var_6 : var_4));
                            var_23 = (max(var_23, (arr_7 [i_0])));
                        }
                        var_24 &= (arr_6 [i_0 - 2]);
                        var_25 = var_7;
                        var_26 = (((arr_11 [3] [i_3 - 1] [i_3 - 1] [i_3] [i_0 - 1] [1]) * (arr_11 [i_0 + 1] [i_3 - 2] [i_2] [i_0 + 1] [i_0 - 2] [i_2])));
                        var_27 = (arr_10 [i_0] [i_1] [2] [i_3]);
                    }
                    var_28 = var_4;
                    var_29 = (16352 ^ (arr_13 [i_0 - 2]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_30 = (arr_14 [i_0 + 1]);
                            var_31 = (arr_4 [i_9 + 1] [i_9]);
                            var_32 = (arr_5 [i_0 + 1] [8] [i_9 + 1]);
                        }
                        for (int i_11 = 4; i_11 < 8;i_11 += 1)
                        {
                            var_33 = (min(var_33, (((var_14 ? 2008604559585116348 : var_11)))));
                            arr_38 [3] [i_9] [i_8] [i_9] [i_11] = -1;
                            var_34 = (((arr_28 [i_9] [i_9] [i_9 + 1] [i_9 + 1]) ? (arr_18 [i_0] [3] [2] [i_0] [2] [7] [i_0]) : ((var_10 ? (arr_35 [i_0] [8]) : -2008604559585116364))));
                            arr_39 [i_9] = (arr_0 [i_0]);
                        }
                        var_35 = (arr_14 [i_0 - 1]);
                        var_36 = (~-172123728);
                        var_37 &= var_7;
                    }
                }
            }
        }
    }
    var_38 = ((~var_16) ? var_3 : (min((!var_1), ((var_15 ? var_12 : var_4)))));
    #pragma endscop
}
