/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_3 ? ((((min(var_4, 1)) != var_9))) : ((124 ? -2 : 1)))))));
    var_13 = 252;
    var_14 -= (min(((((((46 ? var_0 : var_3))) ? var_11 : var_9))), (var_8 || var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((~(var_4 >= 1)))) ? ((min((arr_12 [1] [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_0] [i_0]), var_5))) : var_8))));
                                var_16 ^= (arr_0 [i_2] [i_0]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (~var_4)));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_18 = (arr_8 [i_5] [i_1] [i_1] [i_6] [i_0] [i_5]);
                        var_19 = (max(var_19, (~var_3)));
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_1] = ((3838347191049249987 ? 1 : 8192));

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            var_20 ^= var_8;
                            var_21 = (min(var_21, ((~(arr_5 [i_8 + 1] [i_5])))));
                        }
                    }
                    arr_27 [i_0] [i_1] = ((var_5 >> ((((var_0 | (-2147483647 - 1))) - 18446744073257385770))));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_9] = ((!(~-3751532462872119237)));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((((min(var_7, -20)))) ? (arr_18 [i_9] [i_1] [2] [i_10]) : ((((arr_25 [i_0] [i_0] [i_0] [i_1 - 1] [i_11] [i_1 - 1]) == (arr_8 [13] [2] [i_9] [i_10] [i_11] [i_11 - 1])))))))));
                                var_23 = (min(var_23, ((((-16 ? var_6 : -2))))));
                            }
                        }
                    }
                    var_24 *= (((arr_0 [i_9] [5]) >> (((var_2 > (min(var_9, var_2)))))));
                    var_25 = (min(var_25, var_10));
                }
                for (int i_12 = 4; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (arr_7 [i_12] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_27 = 1216164547;
                                var_28 = (min(var_28, ((min(var_6, (min((arr_21 [14] [i_14] [i_14 + 2] [i_14 + 1]), var_2)))))));
                                var_29 = min(var_0, (min(var_10, ((var_0 % (arr_3 [i_1] [i_1] [i_14 - 1]))))));
                                arr_44 [i_0] [3] [8] [i_12] [i_13] [i_1] [i_14 - 2] = (min((((!(var_10 && -1652158543)))), (0 >> 1)));
                            }
                        }
                    }
                    var_30 = (min(var_30, (((var_0 ? ((((arr_35 [i_0] [i_1 - 1] [12] [i_0] [i_12 - 2]) ? var_7 : 144115153716117504))) : (((var_4 % (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_31 = ((((0 + 15360) ? 2422827423675380984 : -15361)));
                                var_32 = 10773469703948299904;
                                arr_49 [i_1] [i_15] [i_15] [i_15] [i_15] = min((((arr_15 [i_0] [i_0] [i_12 - 1] [i_16 + 2] [i_16 - 1] [i_16] [i_16]) & ((var_2 ? var_0 : var_7)))), (~18446744073709551615));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_17 = 4; i_17 < 17;i_17 += 1) /* same iter space */
                {
                    var_33 = (max(var_33, (!12929837016410026143)));
                    arr_53 [i_1] = var_0;
                    var_34 = (min(var_34, ((((((var_9 ? (-32767 - 1) : var_9))) || -30496)))));
                    var_35 = var_3;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                arr_60 [7] [i_1 - 1] [i_17] [i_1] [i_19] = -1652158515;
                                var_36 += (((((var_5 << (var_0 - 2152274007109173026)))) ? ((var_4 ? (arr_0 [i_17] [i_18]) : (-32767 - 1))) : (arr_42 [i_0] [i_1 + 1] [i_1 + 1] [i_18] [i_19])));
                                var_37 = (((((var_9 ? 6895021547022659484 : (arr_54 [i_0] [i_0] [i_0] [i_0])))) ? var_6 : var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
