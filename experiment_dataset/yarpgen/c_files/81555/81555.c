/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (min((~var_11), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((-(((!(((var_4 ? var_6 : var_4))))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_0] = arr_2 [i_1 + 1] [i_1 + 1];
                    var_15 += ((-(arr_8 [22] [i_1 - 3] [i_2] [i_2])));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_4] [i_4] = ((-(arr_14 [i_0] [i_1] [1] [20])));
                                arr_23 [i_0] [i_1] [i_1] [i_4] [i_5] = ((-((((~(arr_0 [i_0]))) | var_8))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_16 = (arr_9 [i_0] [i_3] [i_0]);
                        var_17 = (~(((!((((arr_6 [i_6] [3] [i_6] [i_6]) ? (arr_1 [i_1 + 1]) : (arr_12 [i_1]))))))));
                        var_18 = -var_1;
                        var_19 *= (((arr_3 [i_0]) >= (arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 3])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_31 [i_7] [i_1] [i_1] [i_0] = (min(13213352317146282520, var_8));
                        var_20 = 13213352317146282520;
                    }
                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        arr_35 [15] [15] [i_1] [i_8 - 3] = (((((147 / (arr_15 [i_1 - 1] [i_8 - 3] [i_8 - 4] [i_8 - 3])))) ? (arr_2 [i_1 - 3] [i_1 - 1]) : (((arr_1 [i_1]) * (arr_19 [i_1] [i_1 - 1] [i_8 - 3] [i_8 - 2] [i_8 - 3])))));
                        var_21 &= ((-(!5233391756563269090)));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_22 = (0 >= 13213352317146282525);

                    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((arr_4 [i_0]) ^ (max((arr_0 [i_1]), (max((arr_11 [i_1] [i_9]), (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_41 [i_9] [i_9] [16] [10] [i_9] |= ((~(((arr_7 [2] [i_1]) % (arr_27 [i_0] [i_1 - 1] [i_0] [i_1 - 3] [2] [i_1])))));
                    }
                    for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_23 = var_10;

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_24 = ((-(arr_2 [i_1 - 2] [i_1 - 1])));
                            arr_50 [i_0] [i_1] [i_1] [i_11] [i_12] = (!((((arr_11 [i_0] [i_0]) % (arr_45 [i_0] [i_1 + 1] [i_9] [i_1])))));
                            arr_51 [i_0] [i_12] [i_0] [i_0] |= (arr_14 [i_1 + 1] [i_12] [i_1 + 1] [i_1]);
                            var_25 = (i_1 % 2 == zero) ? ((((arr_25 [i_1] [i_9] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_12]) >> (((arr_25 [i_1] [i_0] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_12]) - 804782223))))) : ((((((arr_25 [i_1] [i_9] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_12]) + 2147483647)) >> (((((arr_25 [i_1] [i_0] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_12]) - 804782223)) + 1441520586)))));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_33 [i_11 - 2] [i_11 - 2] [i_1 - 1] [i_1] [i_1]);
                            var_26 = (min(var_26, ((max((arr_19 [20] [20] [i_9] [i_11 - 2] [i_11]), (((arr_19 [16] [i_9] [i_11] [i_11 + 1] [i_11]) | var_4)))))));
                            arr_57 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [20] [i_11] [i_13] = (~var_5);
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (arr_19 [2] [i_1] [i_9] [2] [i_11])));
                            var_28 = (min(var_28, (arr_53 [i_14])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_29 = ((~(min((arr_60 [i_9] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3]), (arr_60 [i_16] [i_16] [i_1 - 2] [i_1 + 1] [i_1 - 3])))));
                                var_30 = (min(var_30, var_10));
                                arr_65 [i_0] [21] [21] [i_1 - 3] [i_1] [i_15] [i_16] = min((13213352317146282525 && 39958), var_6);
                                var_31 = (min(var_31, ((-((min((arr_2 [i_0] [i_1 - 2]), (arr_6 [i_0] [i_15] [i_1 - 3] [i_15]))))))));
                                var_32 = (-var_1 >= 5233391756563269090);
                            }
                        }
                    }
                    arr_66 [i_1] [i_1] [i_1] = ((!(arr_28 [i_9] [i_9] [i_9] [i_1 - 2] [i_0])));
                    arr_67 [i_1] = arr_1 [i_1 + 1];
                }
            }
        }
    }
    var_33 = (~18446744073709551615);
    #pragma endscop
}
