/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = 8192;

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] [i_1] |= (arr_0 [3]);
                    var_11 += ((0 & (((arr_7 [i_2 - 1]) & (max(var_8, var_10))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_12 = (max(var_12, ((((~1) / ((~(arr_3 [i_0] [i_0]))))))));
                    arr_12 [i_1] [i_1] [i_1] = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [1] [i_1] [i_3] [i_4] [i_5] [i_5] = (arr_17 [i_0] [i_0]);
                                var_13 += var_0;
                            }
                        }
                    }

                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_6] [4] = (arr_4 [i_6 - 3] [8] [i_0]);

                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_14 = (min(var_14, 140737488355328));
                            arr_26 [i_6] [i_0] [i_0] [i_6] [9] [i_3] [i_0] = (!(((arr_2 [i_0]) <= (arr_10 [i_0] [9] [i_0] [i_0]))));
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_15 = var_8;
                            var_16 ^= ((-((11581 ? (arr_27 [i_3] [i_3] [i_8]) : (arr_25 [i_1] [i_1] [i_0] [i_8] [i_8] [1] [i_0])))));
                            var_17 = 4294967295;
                            arr_30 [i_0] [i_0] [i_3] [i_6] [i_6] = (((arr_21 [i_6 - 3] [i_8 + 1] [i_8 + 2]) ? (arr_21 [i_6 - 1] [i_8 + 1] [i_8 - 2]) : (arr_21 [i_6 - 1] [i_8 - 2] [i_8 + 1])));
                            var_18 *= 11581;
                        }
                    }
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        var_19 += ((11572 ? 140737488355328 : (((1 ? var_7 : 56)))));

                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            arr_37 [i_10 + 3] [i_10 + 3] [i_10 + 3] [5] [i_9] [i_10 + 3] = 1;
                            arr_38 [i_9] = (((28389 ? var_4 : (arr_29 [i_0] [6] [i_0] [i_9] [i_0]))) * (((var_1 ? 0 : var_1))));
                            var_20 = 0;
                            arr_39 [i_0] [i_1] [i_3] [i_0] [i_3] [i_9] [i_10] = ((!(((var_3 ? -1734381474 : 53955)))));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_21 = var_7;
                            arr_43 [i_9] [i_9] = 7;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_47 [i_9] [i_9] [i_3] [i_9] [i_9] [i_1] [i_9] |= (((((arr_4 [i_0] [i_1] [i_0]) >= (arr_31 [i_0] [i_1]))) ? (arr_46 [i_0] [i_9 - 3] [i_0]) : (~1)));
                            var_22 = ((~(arr_11 [i_0] [i_1] [i_3])));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_23 = (min(var_23, var_0));
                            arr_52 [i_13] [i_9] [i_9] [i_0] [i_13] = (arr_51 [i_3] [i_9] [8] [i_1] [i_3]);
                            var_24 = ((0 ? ((22270 ? (arr_3 [i_0] [i_9]) : var_0)) : (!var_4)));
                        }
                        var_25 += ((((4290772992 ? 17809 : -115)) | (arr_5 [i_1] [i_3] [i_9])));
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_56 [i_0] [i_1] [i_1] [i_3] [i_1] = var_8;

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_60 [i_0] [i_1] [6] [i_3] [i_14] [i_14] [9] = (((arr_32 [i_3] [i_15] [i_3] [i_14]) + (arr_32 [6] [i_3] [i_1] [i_0])));
                            var_26 ^= (-2147483647 - 1);
                        }
                        var_27 = ((~(((arr_13 [i_0] [i_0] [10] [i_0]) ? var_10 : var_6))));
                    }
                }
                arr_61 [i_0] [i_1] [i_1] = (((((-(((7 >= (arr_45 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))))) ? (((-var_1 >= (((arr_0 [i_1]) ? var_9 : (arr_3 [i_0] [i_1])))))) : ((((min((arr_42 [i_1] [i_1] [i_1] [i_0] [i_1]), var_1))) ? (arr_40 [i_0] [i_0] [2] [i_0] [i_0] [i_0]) : (var_5 % var_0)))));
            }
        }
    }
    var_28 ^= var_6;
    var_29 |= (var_7 % var_4);
    #pragma endscop
}
