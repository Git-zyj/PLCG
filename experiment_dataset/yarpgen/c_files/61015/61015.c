/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 -= (((arr_1 [10]) / 18446744073709551615));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, (((((!(arr_8 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]))) || (arr_1 [6]))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [i_0] = (((((~(arr_4 [i_0] [i_2])))) ^ 18446744073709551602));
                            var_15 = arr_11 [i_1 + 4] [i_1 + 3];
                            arr_13 [i_0] [i_0] [11] [i_3] [i_0] = 8;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_0] = (~18446744073709551615);
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [5] = (arr_0 [i_2]);
                            var_16 *= (((arr_3 [i_1 + 2] [i_1 - 4] [i_1 + 3]) ? ((~(arr_7 [18] [i_3] [i_5]))) : (arr_2 [10] [10])));
                            arr_19 [i_5] [i_3] [i_3] [i_0] [i_0] [i_1 - 2] [i_0] = var_7;
                            var_17 = (arr_7 [i_0] [i_0] [i_0]);
                        }
                        arr_20 [i_0] [i_0] [2] [i_0] [i_3] &= var_5;
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_0] [i_6] [i_0] [4] = (arr_0 [i_8]);
                        var_18 = (((arr_3 [i_6] [i_6] [i_6]) % (arr_6 [i_7 - 3] [i_7 + 3] [9])));
                    }
                }
            }
            arr_29 [i_0] [14] [i_0] = ((0 ? 401543874 : 3744614267));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_32 [i_0] = (arr_3 [12] [18] [i_0]);
            arr_33 [i_0] = ((arr_10 [1] [i_0] [i_0] [10] [i_9 + 1]) ? ((var_7 % (arr_5 [i_0] [i_0] [i_9 + 1]))) : var_10);
            var_19 = (((arr_21 [i_0]) | (arr_14 [i_0] [i_0] [2] [i_0] [i_9 + 2])));
            arr_34 [i_0] = (((arr_9 [i_9 - 1] [i_9 + 1]) ? var_10 : 218742375));
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_39 [i_0] = ((var_0 ? 3744614251 : (arr_37 [i_10 + 3] [1])));
            var_20 = (~(arr_31 [1] [i_0] [i_0]));
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            {
                                var_21 = ((var_11 ? (arr_27 [i_13] [i_13] [i_13] [i_13] [i_12 - 1] [i_12 + 2]) : (arr_6 [i_13] [i_13] [i_12 + 3])));
                                var_22 = (max(var_22, ((((arr_40 [i_14 + 1] [i_14 + 1] [i_11 - 1]) % -1308)))));
                                var_23 += (arr_6 [i_14 + 1] [i_12 + 3] [i_11 - 2]);
                                var_24 = 1515243678;
                                var_25 &= (~1);
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_26 = 2804;
                        arr_52 [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_12 - 1]);
                        var_27 = (((arr_30 [i_12 + 1]) ? (arr_7 [i_0] [i_11] [i_12 + 3]) : (arr_15 [1])));
                    }
                    arr_53 [i_0] [i_11 - 3] [i_0] [i_0] = ((((((arr_36 [i_0] [i_11] [i_0]) ? (arr_0 [12]) : (arr_45 [i_0] [i_11 + 1] [i_0] [10] [i_0])))) * (arr_16 [i_11 - 3] [i_12 + 2] [18] [i_12 + 3])));
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = (var_8 * var_11);
    #pragma endscop
}
