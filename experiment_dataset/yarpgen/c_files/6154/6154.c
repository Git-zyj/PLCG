/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((((-((min(var_8, var_3)))))), var_12));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_2] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0]);
                    arr_12 [i_0] = ((~(((arr_3 [i_2] [i_0] [i_0]) ? (arr_8 [i_1] [i_0]) : var_13))));
                    var_15 = ((~(((arr_7 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_2])))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_15 [i_0] = (arr_1 [i_0] [i_1]);
                    arr_16 [i_0] = (min(((-(((var_6 <= (arr_4 [i_0])))))), (((~var_11) ? var_9 : (~var_3)))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = var_0;
                                arr_24 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4 - 1] [i_0] = (arr_22 [i_0] [i_0] [i_3] [i_4 - 4] [i_0]);
                                arr_25 [i_0] = (arr_21 [i_0] [i_1] [i_3] [i_3]);
                                arr_26 [i_5] [i_0] = (min((arr_17 [i_5] [i_3] [i_3] [i_1] [i_0]), (arr_10 [i_4 - 4] [i_0])));
                            }
                        }
                    }
                }
                var_17 *= max((min((min((arr_2 [i_0]), (arr_7 [i_0] [0]))), ((((arr_20 [i_0] [2] [i_0] [i_0]) * (arr_14 [i_1] [i_1] [10] [i_1])))))), (arr_19 [i_0] [i_0] [12] [i_0] [i_0] [i_0]));
                var_18 -= var_6;
                arr_27 [i_0] [i_0] [i_0] = ((var_11 * (arr_21 [i_0] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_19 -= var_4;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_20 = (~1);
                arr_33 [i_6] = (min((((var_10 < (((min((arr_31 [i_6] [i_6] [i_7]), (arr_31 [i_6] [i_6] [i_6])))))))), ((((max(var_1, var_3))) * (max(var_1, var_12))))));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_38 [i_6] [i_7] = ((min((max((arr_36 [i_6] [i_7] [i_6] [i_7]), (arr_32 [i_7] [i_7] [i_6]))), (arr_28 [i_6] [i_6]))));
                    arr_39 [i_7] [i_6] [i_6] = (i_6 % 2 == zero) ? (((var_2 ? (arr_28 [i_6] [i_6]) : (((((arr_32 [i_6] [i_7] [i_6]) + 9223372036854775807)) >> (((arr_35 [i_6] [i_6] [i_6]) + 10606))))))) : (((var_2 ? (arr_28 [i_6] [i_6]) : (((((arr_32 [i_6] [i_7] [i_6]) + 9223372036854775807)) >> (((((arr_35 [i_6] [i_6] [i_6]) + 10606)) - 16720)))))));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_21 = (max(var_21, ((((var_9 + 2147483647) >> ((((~(arr_31 [i_9] [1] [i_6]))) - 3606)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_48 [i_6] [i_10] [i_11] [i_10] [i_11] = (arr_43 [i_6] [i_9] [i_6] [i_6]);
                                arr_49 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_47 [i_6]);
                                var_22 = (max(var_22, ((min((max((arr_28 [i_7] [i_11]), ((~(arr_29 [i_11]))))), (arr_42 [i_11] [i_7] [i_7]))))));
                            }
                        }
                    }
                    var_23 ^= (((max((arr_40 [i_6] [i_7] [i_6]), (min((arr_34 [2] [i_7] [i_7]), var_4)))) >= (((max((arr_44 [i_6] [i_6] [i_7] [i_9]), (min((arr_47 [6]), (arr_36 [i_9] [i_9] [i_7] [i_6])))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_24 = (((((((((arr_52 [i_6] [i_6] [i_6]) ? (arr_53 [i_6] [i_12] [i_9] [i_6]) : (arr_44 [i_6] [i_7] [i_6] [i_12])))) ? (min((arr_31 [i_13] [i_6] [i_13]), var_4)) : 0))) ? var_11 : (min(((4294967295 ? 3626975364 : 127)), -1846639854))));
                                arr_56 [i_6] [i_7] [i_7] [i_9] [i_6] [i_13] = (~var_12);
                                var_25 = (min((((((max((arr_42 [i_6] [i_12] [i_6]), (arr_31 [i_6] [i_6] [i_12])))) < ((max((arr_36 [i_6] [i_6] [i_6] [i_6]), (arr_52 [i_6] [i_6] [i_6]))))))), (max((arr_34 [i_6] [i_12] [i_13]), (((var_11 ? (arr_52 [i_6] [i_7] [i_6]) : (arr_41 [i_7]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_26 = (min(var_26, (arr_61 [i_15] [i_15])));
                                var_27 = (max((arr_58 [i_15] [i_7] [i_7] [i_6]), (max(var_12, ((max(51154, -127)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 &= var_13;
    #pragma endscop
}
