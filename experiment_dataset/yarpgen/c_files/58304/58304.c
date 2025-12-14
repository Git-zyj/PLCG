/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = var_11;
                    var_17 = (min(var_17, (((var_15 * (((((arr_5 [i_2 + 2]) != (arr_5 [i_2 + 2]))))))))));
                    var_18 = (max((((-(arr_7 [i_2 + 3] [i_2 - 1] [i_2 - 1] [i_2])))), (((((11704910126343964422 ? var_11 : var_3))) ? var_9 : 6741833947365587171))));
                }
            }
        }
    }
    var_19 = (max((((max(var_1, 6741833947365587184)) >> (var_13 - 20706))), var_7));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_20 = (((arr_21 [i_4] [i_4] [i_5 + 2] [i_6]) >= 30909));

                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                arr_25 [14] [i_6] [i_5 - 1] [14] [i_5] = ((((max((arr_11 [i_3]), (arr_11 [i_6])))) ? (((arr_15 [i_7] [i_5 - 2]) ? (((arr_17 [i_7] [13] [i_3]) / (arr_18 [i_3] [i_4] [13] [11]))) : ((((arr_21 [i_3] [8] [i_6] [i_7]) != (arr_12 [i_3])))))) : ((((((arr_10 [i_7]) & 11704910126343964409))) ? ((var_4 ? (arr_22 [3] [i_4] [i_4] [i_6] [6] [i_7]) : var_13)) : (arr_12 [i_7])))));
                                var_21 = (max(var_21, (((max((arr_14 [i_4] [i_6]), (arr_14 [i_6] [i_5])))))));
                                var_22 = ((((max(var_4, -var_6))) ? ((~((var_1 ? var_9 : (arr_23 [1] [i_6]))))) : var_5));
                                var_23 = ((-((-(max(217, 11704910126343964415))))));
                            }
                            for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                arr_30 [i_8] [i_4] = (arr_29 [i_8] [i_8 + 2] [i_3] [i_5 + 3]);
                                arr_31 [i_3] [10] [1] [i_8] [10] = ((((var_9 ? var_9 : var_12))));
                                arr_32 [i_3] [12] [8] [i_6] [i_8] = ((var_11 ? ((max((((var_12 | (arr_29 [13] [i_4] [i_5] [i_4])))), ((11704910126343964409 ? 23 : var_1))))) : (max(var_6, (6741833947365587199 != 7)))));
                            }
                            for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_24 = ((((max(((max((arr_10 [i_3]), var_2))), ((-(arr_17 [i_3] [i_9] [i_5])))))) ? (((-(arr_23 [i_9 + 2] [i_4])))) : (arr_20 [3] [i_9 - 3] [i_5 - 3] [i_5 - 3] [i_5 + 3] [3])));
                                var_25 = (((((-(arr_27 [i_9] [i_9 + 1] [1] [i_5 - 3] [i_4])))) != (max(6741833947365587188, 31401))));
                                var_26 ^= 117;
                                var_27 = (max(var_27, ((max((var_2 | var_10), (min((arr_26 [i_3] [10] [i_5] [i_3] [i_5 + 2] [i_4] [i_9]), ((1 ? (arr_19 [i_9] [i_6] [6] [8]) : 6741833947365587222)))))))));
                                arr_35 [2] [i_6] [i_5 - 1] [10] [i_4] [i_3] = ((-2147483647 ? 0 : 243));
                            }
                            /* vectorizable */
                            for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                            {
                                var_28 = (arr_34 [i_10 - 3] [i_6] [i_4] [11]);
                                var_29 = 23;
                            }
                            arr_39 [i_6] [i_4] [i_6] [i_6] [i_6] = (((((arr_22 [i_5 - 2] [i_5 + 1] [i_6] [i_5 + 1] [i_6] [i_5 + 1]) ? var_11 : (arr_37 [4] [i_5 + 1] [4] [i_5] [10]))) - (max((arr_27 [i_3] [i_5 + 2] [i_5] [i_6] [i_5 + 2]), (arr_37 [i_3] [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 1])))));
                        }
                    }
                }
                arr_40 [i_3] = var_5;
                arr_41 [i_3] [i_3] [i_4] = ((~(arr_19 [i_4] [9] [i_3] [i_3])));
            }
        }
    }
    var_30 = ((!(var_10 - var_3)));
    var_31 *= var_3;
    #pragma endscop
}
