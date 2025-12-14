/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((((min(var_2, -1))) ? (((53 >> (var_6 + 607185655573621435)))) : var_8)))));
    var_17 = min(var_13, (min((var_7 && 1), ((var_7 ? var_10 : var_2)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max((arr_1 [i_0] [4]), (((arr_0 [0]) >> (((!(arr_1 [i_0] [i_0]))))))));
        var_19 += (min((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_20 = (min(var_20, ((min(((min(var_3, ((((arr_0 [i_0]) <= 13428)))))), (((((var_3 ? (arr_0 [i_0]) : 512))) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((var_6 >= (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_21 = ((var_10 ? 0 : (arr_0 [0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_22 *= (!1);
                                var_23 *= ((var_13 ? (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [7] [7] [i_3] [1] [7] [i_6] = -13;
                        arr_22 [5] [i_1] [5] [i_1] [i_6] [i_6] = 8863754959339259285;
                        var_24 = (arr_15 [i_3 + 1] [i_2]);
                        var_25 = var_8;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_1] [11] [i_1] [i_7] [i_7] = var_6;
                        var_26 += (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [0]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_31 [1] [i_2] [i_2] [12] [i_3] [8] [15] = (arr_14 [1] [1] [i_3] [i_9]);
                                var_27 = (arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]);
                                var_28 = (~5);
                                var_29 = (min(var_29, ((((arr_8 [i_3] [i_8] [i_9]) ? (arr_30 [i_2]) : var_4)))));
                            }
                        }
                    }
                    var_30 = (((arr_9 [14]) && (~var_13)));
                }
                arr_32 [i_2] [2] [2] = arr_9 [i_1];

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_31 = var_8;
                    var_32 = var_12;
                    var_33 = (((((max((arr_9 [i_1]), var_8)) <= (arr_28 [i_2] [i_10] [i_10] [i_2] [i_2] [5] [5]))) && (((-var_14 ? (min(var_12, var_10)) : ((((arr_12 [i_1] [i_2] [i_2] [i_2]) ? (arr_15 [i_2] [i_1]) : var_12))))))));
                    arr_37 [i_1] [i_2] [12] = min((arr_30 [i_1]), (arr_18 [i_2] [i_10]));
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_34 = ((arr_40 [1] [i_2] [14] [14] [1] [i_12]) ? (arr_40 [i_1] [i_1] [i_11] [i_12] [i_12] [i_1]) : (((var_13 + 9223372036854775807) << (((((arr_40 [1] [i_12] [i_1] [i_1] [i_1] [i_1]) + 17876)) - 52)))));
                                arr_44 [i_1] [3] [i_1] [i_1] [i_1] [i_1] [12] = ((0 | (min((arr_28 [1] [i_2] [1] [i_11] [14] [i_13] [i_2]), var_1))));
                                arr_45 [i_1] [i_1] [i_11] [i_12] [11] [i_13] = arr_26 [i_1] [i_1];
                            }
                        }
                    }
                    var_35 = (arr_4 [15]);
                }
            }
        }
    }
    #pragma endscop
}
