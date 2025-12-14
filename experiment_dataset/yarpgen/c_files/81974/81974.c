/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_1, var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_13 = var_5;
                            var_14 -= min((((max(var_1, var_4)) << (var_3 > var_4))), (min(((max(var_1, var_3))), (max(7, 1)))));
                            var_15 = (min((var_0 | var_1), ((((var_10 + 9223372036854775807) << (var_7 - 114))))));
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                var_16 = min(127, 63);
                var_17 -= (max((min(var_9, var_9)), ((min(var_3, var_1)))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 -= var_2;
                            var_20 -= var_2;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_9] [i_0] = (min((min(var_0, var_7)), ((((var_7 & var_11) / var_10)))));
                        arr_29 [i_0] [i_0] = var_2;

                        for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(var_5, var_4))) / (min((1 ^ -6017849188702959313), (max(var_10, var_4))))));
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_10] = (min(-2147483645, 1609417324));
                            var_21 = (max(((max(var_1, var_7))), (min(var_0, var_4))));
                            arr_34 [i_0] [i_0] [i_8] [i_8] [i_8] = (min(((min(var_7, var_3))), (min(var_8, var_5))));
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] = (var_6 % var_7);
                            arr_39 [i_0] [i_0] [i_0] [i_9] [i_9] [i_0] [i_8] = (var_5 || var_9);
                            arr_40 [i_0] [i_1 + 2] [i_8] [i_8] [i_11] = (var_10 % var_2);
                        }
                        for (int i_12 = 3; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_0] [i_1] [i_0] [i_9] [i_9] = max(-15, 51);
                            var_22 = (max(var_22, var_10));
                            arr_45 [i_0] [i_1] [i_8] = (min(1, 22478));
                            arr_46 [i_0] [i_1] [i_8] [i_0] = (max(((min(var_2, var_3))), (min(var_9, var_0))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 16;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_59 [i_0] [i_13 + 2] [i_14] [i_0] [i_16] [i_14] [i_14] = (max(((min(var_5, var_7))), (min(var_3, var_9))));
                                var_23 = (max(var_23, ((max((max(var_10, (var_9 == var_11))), (var_6 / var_2))))));
                                arr_60 [i_0] [i_16] [i_15] [i_14] [i_0] [i_0] = (min((min(var_2, var_10)), ((max(var_6, var_7)))));
                                var_24 = (max((min(8191, -1561295282)), (var_5 == var_9)));
                            }
                        }
                    }

                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        var_25 = (max((max(((max(var_7, var_9))), (6718676597076831051 + 4294959096))), (((var_3 | ((min(0, 0))))))));
                        var_26 = (max((max(1304523376, 1)), (min(var_4, var_11))));
                    }
                    for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 2; i_19 < 14;i_19 += 1)
                        {
                            arr_70 [i_0] [i_14 - 3] [i_18] [i_0] = (min((min(var_4, var_0)), ((min(var_6, var_10)))));
                            arr_71 [i_0] [i_0] [i_13 - 1] [i_0] = ((min(var_11, var_9)) / (max(65535, 3957862648)));
                        }
                        for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
                        {
                            arr_75 [i_0] [i_13] [i_0] [i_18] [i_13] = ((var_9 >> (((max(var_6, var_11)) - 2519716288))));
                            var_27 = (max(var_27, ((max(var_8, (-9223372036854775807 - 1))))));
                        }
                        for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((max((min((var_4 & var_11), var_9)), var_3)))));
                            arr_80 [i_0] [i_0] [i_18] [i_14] [i_0] [i_0] [i_0] = var_9;
                            var_29 = ((((min(var_7, var_3))) >> (((max(-7288930999249139353, 4294959104)) - 4294959073))));
                        }
                        arr_81 [i_0] [i_13] [i_13] [i_0] [i_14 - 3] [i_18] = (min(var_5, (min(((min(-9223372036854775800, -21))), var_0))));
                    }
                    for (int i_22 = 1; i_22 < 15;i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_0] [i_13] [i_0] [i_22] = (min((var_3 & var_1), (max(var_6, var_0))));
                        arr_85 [i_0] [i_13] [i_14] [i_22] = (max((min(var_0, var_8)), (max(var_0, var_0))));
                        var_30 -= (max((var_1 / var_3), ((((max(-117, var_3))) << (var_9 - 3121129972)))));
                    }
                    var_31 = (max(((max(var_2, var_5))), (((var_1 / var_3) + (min(var_10, var_4))))));
                }
            }
        }
    }
    var_32 = var_7;
    #pragma endscop
}
