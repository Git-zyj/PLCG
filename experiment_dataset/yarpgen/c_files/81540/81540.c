/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((!(((var_4 ? (min(var_9, 3621635528)) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 = min(var_6, var_5);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = var_3;
                        arr_11 [i_2] [i_2] [i_1] [i_2] = ((((~(arr_6 [i_2]))) & var_7));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = -125;
                            var_14 = (((673331768 & 196) ? ((673331768 * (arr_12 [i_2]))) : var_0));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_18 [i_2] [i_2] = min((arr_13 [i_2] [i_2]), ((var_6 * (max((arr_2 [i_5]), 70368744177663)))));
                            var_15 -= ((var_4 / (var_0 && var_8)));
                            var_16 = (max(var_16, ((min((arr_5 [i_5]), (min((arr_5 [i_0]), (arr_5 [i_0]))))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 = (max(var_17, (((((min((arr_4 [i_0] [i_0] [i_0]), 673331758))) ? (min((arr_4 [i_6] [i_2] [i_0]), (arr_4 [i_1] [i_1] [i_0]))) : (min((arr_4 [i_6] [i_2] [i_1]), var_4)))))));
                        arr_22 [i_2] = var_3;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_18 -= (arr_7 [i_1]);
                        arr_25 [i_2] [i_2] = ((((arr_15 [i_7] [i_2] [i_2] [i_2] [i_0]) && (var_0 && var_3))));
                        var_19 -= ((-7547 ? (max(-4056, 33554431)) : ((((arr_24 [i_0] [i_0]) / var_6)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_20 = var_3;
                        var_21 = (0 && 65535);
                        var_22 = (min(var_22, ((((arr_10 [i_0] [i_2] [i_0] [i_1] [i_0]) ? (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]) : (arr_10 [i_0] [i_2] [i_1] [i_0] [i_0]))))));
                        arr_28 [12] [i_2] [i_2] [i_0] = var_2;
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_23 = ((-(var_2 & var_8)));
                            var_24 |= ((-(arr_6 [i_10])));
                        }

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_25 = (127 % 108298788);
                            var_26 = (min(var_26, var_3));
                            arr_39 [i_12] [i_10] [i_0] [i_1] [i_0] = var_5;
                            var_27 = 6349;
                        }
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_43 [i_0] [i_0] [i_1] [i_0] = (max(((min((arr_0 [i_1]), var_9))), ((-(arr_0 [i_9])))));
                        var_28 -= ((+(min((arr_3 [i_13] [21] [21]), 3043956992))));
                        arr_44 [i_13] [i_13] [i_0] [i_0] [23] [i_0] = (min((arr_34 [i_13] [i_9] [i_9] [i_1] [i_0] [i_0] [i_0]), var_1));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_29 = (min(var_29, var_3));
                            arr_47 [i_14] [i_13] [i_9] [i_1] [i_0] [i_0] = var_0;
                            var_30 = (max(32765, (min((arr_34 [i_9] [i_14] [i_13] [i_9] [i_9] [i_1] [i_0]), var_2))));
                            var_31 = (min((arr_1 [i_14] [i_0]), (arr_27 [i_1] [i_13] [i_9] [i_9] [i_1] [i_0])));
                            var_32 -= (min(108298774, (arr_5 [i_14])));
                        }
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            arr_50 [i_15] [2] [i_9] [i_1] [i_0] = (min(-4056, 499681747786198098));
                            var_33 = (min(var_33, ((min(108298800, ((((min((arr_42 [14] [i_9]), 17402073891936490109)) != 18446673704965373957))))))));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_34 = (min(var_34, ((min(var_2, ((((min((arr_46 [i_13] [20] [i_0] [i_0]), -1184627565))) ? 55700 : (arr_17 [i_16] [i_16] [i_0] [i_0] [i_0] [i_0]))))))));
                            var_35 = -32765;
                            arr_53 [i_16] [i_13] [i_16] [i_1] [i_16] [i_0] [i_0] = (!108298800);
                            arr_54 [i_16] [i_16] [i_16] [i_16] [i_1] [i_0] = var_2;
                            var_36 = (min(var_36, ((((((arr_38 [i_0] [i_13] [i_9] [i_9] [i_1] [i_0]) + 9223372036854775807)) << ((((min(9835, 19066))) - 9835)))))));
                        }
                        var_37 = 55680;
                    }
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_38 = (max(var_38, ((var_1 < (arr_15 [i_0] [i_17] [i_9] [i_17] [i_0])))));
                        arr_57 [i_17] [i_0] [1] [i_1] [i_0] = (((55687 >= 0) >= ((min(7, (arr_9 [i_17] [i_9] [i_9] [i_0]))))));
                        var_39 = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_40 = var_6;
                                var_41 = (min((((arr_23 [i_18] [i_18] [0] [i_0] [i_0] [i_18]) ? (arr_34 [i_19] [i_19] [i_9] [i_18] [i_9] [i_0] [i_0]) : var_6)), (((arr_8 [i_18] [i_18] [i_18]) ^ var_7))));
                                var_42 = (max(var_42, 1));
                            }
                        }
                    }
                    var_43 |= -22;
                    var_44 = (max(var_44, (((((max((arr_9 [i_9] [i_0] [i_0] [10]), (var_1 * var_0)))) && (arr_4 [i_9] [i_1] [i_0]))))));
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_45 = (min(var_4, ((max(1251010303, 60769)))));
                            var_46 = (min(var_46, (32765 && 60769)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
