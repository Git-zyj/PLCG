/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(((~(~54683))), -106));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = -114;
                                var_15 = (max(var_15, (min(-5, -13))));
                                var_16 |= ((0 & (arr_5 [i_0] [i_0] [i_0])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_17 = ((var_7 ? (arr_12 [i_5] [i_1] [1] [i_5]) : 124));
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = ((var_2 ? var_12 : (arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5])));
                        var_18 = var_10;
                        arr_21 [i_0] = (-(((arr_10 [i_0] [i_1] [i_2] [i_5 - 1] [i_1] [i_0]) ? (arr_19 [i_0] [5] [i_1] [i_5] [i_2] [i_2]) : (arr_10 [i_0] [2] [i_2] [i_1] [i_1] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_24 [i_0] [i_2] [3] [i_1] [i_1] [i_0] = 9181;
                        arr_25 [i_1] [i_0] [i_0] [i_0] = (arr_19 [0] [i_6] [i_1] [i_1] [i_0] [i_0]);
                        arr_26 [i_1] [i_0] [i_6] = var_2;
                        var_19 = (((arr_19 [i_6] [i_1] [i_6] [1] [i_1] [i_1]) ^ ((30470 ? (arr_19 [7] [i_1] [i_2] [i_2] [6] [4]) : (arr_23 [i_6] [i_2] [i_1] [4] [0])))));
                        var_20 = (arr_6 [i_6] [6]);
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_32 [i_8] [i_0] [i_7 + 2] [i_2] [i_0] [i_0] = ((((((arr_3 [i_0] [i_0]) & (arr_29 [i_7 - 1] [i_7 + 3] [i_7 + 2] [i_7 + 1])))) ? 0 : (arr_6 [i_0] [i_1])));
                            arr_33 [i_8] [i_7 - 1] [i_0] [i_0] [4] [0] = ((((max((max(var_1, 0)), (min((arr_28 [i_0] [i_1] [i_2] [i_7 + 2] [i_0]), var_13))))) ? (((6318710945266231831 >= (min(1, (arr_10 [i_1] [i_1] [i_8] [i_1] [i_8] [i_0])))))) : var_4));
                            arr_34 [i_0] [i_1] [i_0] = var_2;
                        }
                        var_21 = (max(((((min(55, 26))) ? ((var_2 ? (arr_27 [6] [i_7] [i_1] [i_1] [i_1] [i_0]) : 1134696802983776889)) : (var_11 * var_12))), (((14662854694288610617 ? (arr_2 [i_0]) : -91)))));
                        arr_35 [i_0] [i_2] [10] [i_0] = (arr_18 [i_1] [i_1]);
                        arr_36 [i_0] [i_2] [i_1] [6] [i_0] = ((var_5 ^ ((var_6 ? (arr_13 [i_0] [i_0] [i_2] [i_7 - 1] [i_0]) : 1))));
                    }
                    arr_37 [i_0] [i_1] [i_0] [i_0] = (min((arr_10 [8] [i_2] [i_2] [i_0] [i_2] [i_0]), ((((arr_0 [i_2]) ? (arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2]) : -5830803248305824047)))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = (arr_19 [i_1] [i_1] [i_2] [i_9] [i_2] [i_1]);
                        var_22 = (min((arr_2 [i_0]), 50));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_23 = -30492;
                                var_24 = (max(22002, -951987585));
                                var_25 = ((((min(var_3, (arr_18 [11] [i_0]))) % var_1)));
                                var_26 = arr_13 [i_0] [i_1] [0] [i_11] [i_11];
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_27 = (arr_48 [i_12]);
        var_28 = var_3;
        arr_50 [i_12] [i_12] = ((((((arr_48 [i_12]) ? var_4 : 1842509114))) ? (arr_49 [i_12]) : (~var_11)));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        arr_53 [i_13] = ((126 ? ((((var_7 ? var_1 : 36582)) | (arr_52 [i_13]))) : ((min(169, (min((arr_52 [i_13]), 225)))))));
        var_29 = (min(1, (((arr_51 [i_13]) ? (max(var_2, (arr_52 [i_13]))) : (arr_51 [i_13])))));
        arr_54 [i_13] = 30463;
    }
    for (int i_14 = 2; i_14 < 12;i_14 += 1)
    {
        var_30 = (max(var_30, (((-var_1 & ((max(var_1, (arr_56 [i_14] [i_14 + 3])))))))));
        var_31 |= (((max(((30464 ? var_13 : (arr_55 [3]))), ((min(var_5, (arr_55 [i_14 + 1])))))) ^ (arr_57 [i_14 + 3])));
    }
    var_32 = max(var_13, (max((((var_1 ? -30448 : var_2))), 0)));
    #pragma endscop
}
