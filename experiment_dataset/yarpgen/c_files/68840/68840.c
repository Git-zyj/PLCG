/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min(((((!var_0) && (!65535)))), var_4));
    var_20 = var_0;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 ^= (max(-17521654146145191189, (min(var_5, (arr_0 [i_0 + 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = ((-((((((arr_8 [i_1]) ? var_0 : var_0))) ? (max(var_12, var_16)) : (~var_17)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (max(((var_8 ? var_9 : (arr_10 [i_0]))), var_2));
                                var_24 = (min(var_24, ((max(((((arr_3 [i_2] [i_1 + 3]) ? 34659 : var_9))), ((-(arr_2 [i_0 + 1]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = -var_15;
                            }
                        }
                    }
                    var_25 = (min(var_25, ((min(((-(arr_8 [i_0 - 1]))), (var_18 >= 739701283))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_26 = (max(3150898652, (arr_0 [i_0] [i_1])));
                                arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = (min(((min(148, (min(108, var_8))))), (max((((arr_4 [i_5]) ? var_5 : 34659)), var_4))));
                                var_27 = (max(((-((126 ? 65527 : -739701283)))), var_14));
                                var_28 = (min((((arr_0 [i_2] [i_0]) ? -202161427269622452 : var_18)), (max(18446744073709551615, (var_7 & var_2)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_29 = (max((arr_10 [i_0]), ((-(arr_10 [i_0])))));
                                var_30 ^= (min(((716 ? var_16 : 58792)), 6744));
                                var_31 = (min(var_31, ((max(18446744073709551615, ((min(148, var_15))))))));
                                var_32 = (max(var_32, ((min((arr_10 [i_10]), ((min(4822639847133249837, 26713))))))));
                            }
                        }
                    }
                    arr_32 [i_0 - 1] [i_0] = -739701283;

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_33 = var_3;
                        arr_37 [i_0] [i_0] [i_7] [i_0] [i_8] [i_0 - 1] = var_3;
                        var_34 = ((-var_16 ? var_4 : (arr_8 [i_11])));
                        var_35 = 29601;
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_36 -= var_5;

                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            arr_43 [i_0] [i_7] [18] [i_12] [i_12] = ((~(((((29550 ? 58792 : -78))) ? -var_8 : (max(var_9, 739701283))))));
                            var_37 = var_18;
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_38 = (min(var_38, ((((((var_14 ? 101725138171326674 : var_2))) ? (min((min((arr_34 [i_0] [i_0] [i_14] [i_0]), var_6)), -var_10)) : var_14)))));
                            var_39 = (max((min(4822639847133249837, -739701283)), (min(var_13, 18446744073709551615))));
                            var_40 = (arr_26 [i_0 - 1] [i_0 - 1]);
                        }
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [i_7] [i_8] [i_0] = var_3;
                        var_41 = var_2;
                        var_42 = ((((min(((min((arr_7 [i_0] [i_0] [i_8]), var_15))), var_12))) && ((min((max(var_17, (arr_41 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))), var_16)))));
                    }
                    var_43 = (min((arr_4 [i_7]), -1956));
                }
            }
        }
        var_44 = (!89);
    }
    #pragma endscop
}
