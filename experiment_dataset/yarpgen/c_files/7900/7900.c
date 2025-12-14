/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                var_13 = ((((!(arr_12 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_4 - 1]))) ? (arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_4 - 1]) : ((var_12 ? (arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_4 - 1]) : (arr_12 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_4 - 1])))));
                                var_14 = ((-(arr_9 [i_0] [i_0] [i_0])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                var_15 = (arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]);
                                var_16 ^= (((arr_4 [i_0] [i_0]) ? (arr_4 [i_3] [i_5]) : (arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])));
                                var_17 &= ((var_3 ? var_1 : (var_3 <= var_8)));
                                var_18 ^= (((arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2]) << (var_1 - 32453)));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_2] [i_0 - 2] [i_2] [i_2]) ? (var_3 == var_11) : (arr_6 [i_0] [i_2] [i_3] [i_0])));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_0] [i_2] = (!47056);
                                var_19 = var_5;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(~var_5)));
                                arr_21 [i_0] [i_0] [i_0] [i_0] = (((((-var_11 / (arr_17 [i_0] [i_0 - 2])))) ? ((min((arr_4 [i_0 - 1] [i_1]), var_4))) : ((min((var_8 == var_7), var_11)))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                                arr_26 [i_0] = ((!(arr_22 [i_0 - 3])));
                            }
                            var_20 ^= ((-var_8 ? (arr_4 [i_0 + 1] [i_0 - 2]) : (((arr_2 [i_0 + 1] [10]) ? (arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_0] [2] [i_0] [2] |= ((-(((arr_22 [i_0 - 1]) / (arr_22 [i_0 - 1])))));
                    var_21 = 1;

                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] = ((-((var_9 ? -var_11 : (arr_24 [i_0] [i_0] [i_0] [i_0])))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_22 = (((~var_9) & ((var_10 ? var_12 : (arr_1 [i_0] [i_0])))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_4 <= (arr_0 [i_10] [i_1]));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_23 = (((max((((arr_22 [i_0]) ? var_3 : var_10)), var_11)) * ((var_3 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_31 [i_0] [i_0] [i_0] [i_0])))));
                            var_24 = ((((((~(arr_28 [i_0 - 2]))) + 2147483647)) >> ((((((var_3 ^ (arr_24 [i_0] [i_0] [i_0] [i_0]))) << (((((~var_5) + 31)) - 29)))) - 97899))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_25 = (((var_7 & var_12) / (var_5 + var_6)));
                            var_26 *= var_3;
                        }
                        var_27 = 1;
                        var_28 = (max(var_9, (max(1, 1))));
                    }
                }
                var_29 = var_2;
            }
        }
    }
    var_30 = var_8;
    #pragma endscop
}
