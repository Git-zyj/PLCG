/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] |= ((var_9 ? 106 : ((((arr_6 [i_0] [1] [i_2 + 2] [i_0]) || -107)))));
                    arr_9 [i_0] [i_1] [i_2] = (min((((~var_4) - ((((arr_7 [i_2 + 2] [1] [i_1] [i_0]) ? 31360 : 1))))), (((!((((arr_0 [i_1]) >> (arr_3 [i_0])))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] = (~var_6);

                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            arr_22 [i_3] [1] [8] [8] [i_5] = ((~(arr_6 [i_5 + 1] [i_5 - 1] [i_4 + 2] [i_4 - 2])));
                            arr_23 [i_5] [i_5] [i_5] = (((arr_2 [i_4 + 1]) ? -106 : (arr_2 [i_4 + 2])));
                            arr_24 [i_5] [i_1] = 11483;
                            var_11 = (((-73 + 2147483647) << 0));
                            var_12 &= (var_1 & 4294967295);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_28 [1] [i_1] [i_3] [i_4] [i_6] = 56484;
                            arr_29 [i_6] [i_4] [i_3] [i_1] [20] = (arr_15 [i_4 - 1] [i_4 - 4] [i_4] [i_4 + 2]);
                            arr_30 [i_0] [8] [i_0] [i_0] [1] = ((829811486 ? (arr_1 [i_4 - 3]) : 2305834213120671744));
                            arr_31 [1] [8] [i_1] [i_3] [i_4] [i_6] |= (13714 >= 1);
                        }
                        var_13 = var_5;
                        arr_32 [i_1] = ((9052 ? (arr_11 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_3]) : var_5));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_14 -= var_0;
                        arr_35 [i_7] [i_1] [i_1] [i_0] = (((arr_26 [i_0] [i_3]) + (arr_26 [i_0] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_39 [i_1] [13] = (arr_11 [i_0] [i_0] [12] [7]);

                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            arr_42 [i_0] [14] [i_0] [i_0] [i_3] [i_9] [i_9 - 1] = var_4;
                            var_15 = (~-2305834213120671745);
                        }

                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            arr_46 [15] [i_1] [i_3] [i_10] [i_10] [i_3] [i_1] = var_2;
                            var_16 = (((arr_41 [i_10] [i_0] [i_10] [i_0] [i_10 + 1]) ? var_6 : -1));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_17 = 2305834213120671744;
                            arr_50 [i_11] [i_8] [i_0] [i_1] [i_0] [i_0] = (arr_37 [i_11] [i_8] [9] [i_0]);
                        }
                        arr_51 [i_0] [i_3] [i_8] = (var_8 >= 249);
                    }
                    arr_52 [11] [i_1] [i_3] = ((-(arr_34 [17] [i_1] [i_1] [i_0])));
                    arr_53 [6] [i_1] [i_3] = (!1);
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    arr_57 [i_12] [i_1] [i_1] [i_12] = (max(((min((arr_14 [i_12] [1] [i_1] [17]), (arr_19 [1] [i_0] [i_0] [i_1] [i_12] [i_12])))), (((((13714 ? 0 : var_10))) ? (((min(var_6, (arr_19 [i_0] [i_1] [i_1] [i_1] [i_12] [i_1]))))) : var_8))));
                    arr_58 [i_12] = (min(((var_7 ? (4375260226896493574 + -73) : (min(var_10, var_9)))), ((min(-73, 0)))));
                    var_18 ^= ((max(0, 1141504187)));
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_19 = (min(92, (!1276208985)));
                    var_20 = (max(var_20, (arr_55 [i_1] [i_1] [19] [i_1])));
                    var_21 = (((((-30084 ? ((5 ? var_1 : (arr_10 [i_13] [i_1] [i_0]))) : (var_7 < var_0)))) ? (((var_3 % var_4) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_36 [i_13] [i_13] [i_1] [3]))) : ((max((arr_36 [i_0] [i_0] [i_1] [i_13]), (max((arr_34 [1] [i_1] [i_1] [i_13]), var_5)))))));
                    arr_61 [i_0] [i_0] [10] = ((12907385516602007206 + ((min(var_2, var_2)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_22 = ((~((min(var_4, var_3)))));
                                var_23 = ((((max((arr_4 [i_15] [i_14] [i_13] [i_1]), (arr_4 [i_15] [i_14] [i_13] [i_0])))) ? ((-(-32767 - 1))) : (max(13, 13714))));
                            }
                        }
                    }
                }
                arr_69 [i_0] [i_1] [i_0] &= (arr_37 [i_0] [i_0] [i_0] [i_1]);
                var_24 = 89;
                var_25 = (max(var_25, ((((((min(13, (arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) >= (arr_41 [i_1] [i_1] [i_0] [i_1] [i_0]))) ? ((min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_4 [1] [i_0] [i_1] [17])))) : (-127 - 1)))));
                var_26 += (min(((0 ? ((-7 % (arr_60 [i_0]))) : var_5)), var_10));
            }
        }
    }
    var_27 = var_6;
    var_28 = var_9;
    #pragma endscop
}
