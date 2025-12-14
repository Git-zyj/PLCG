/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((16492674416640 ? 987069189 : 4989166921571878420));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1 - 2] [i_0] [i_1] = (!52869);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, var_0));
                        arr_12 [i_0] [i_1] [i_3] [i_1] = (arr_6 [i_0] [i_1 - 3] [2]);

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_1] [i_2] [i_1] = (((arr_0 [i_2]) < (arr_0 [i_4 + 1])));
                            arr_17 [i_0] [i_2] [i_1] [i_1] [i_0] = 37089;
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = ((-(arr_4 [i_4 + 1] [i_4 - 3])));
                        }

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_12 ^= ((~((1134087374 ? 52881 : var_7))));
                            var_13 = ((var_9 ? 59317 : var_2));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = -var_7;
                        }
                        var_14 = 59317;
                    }
                }
            }

            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                var_15 |= var_8;

                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_6 - 2] [i_6] = (-(arr_20 [i_8 + 1] [i_1] [i_1] [i_0]));
                        var_16 = (((arr_9 [i_1] [i_1] [i_1] [i_8]) ? ((var_2 ? 59288 : var_9)) : var_8));
                        var_17 -= ((var_8 ? 10 : (arr_8 [i_8] [i_6] [i_1 - 3])));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_1] = (i_1 % 2 == 0) ? (((var_0 << (((arr_33 [4] [i_9] [i_1] [i_9] [i_1] [i_6 - 1] [i_1 + 1]) - 8860777077083998216))))) : (((var_0 << (((((arr_33 [4] [i_9] [i_1] [i_9] [i_1] [i_6 - 1] [i_1 + 1]) + 8860777077083998216)) - 1110347233574284994)))));
                        arr_35 [i_0] [i_1] [i_1] [i_7] [i_9] = (var_7 < var_7);
                    }
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        var_18 = (2480433748374860776 | 1);
                        var_19 -= ((!(arr_30 [i_0] [i_1] [i_1 + 1] [i_1 - 3] [i_7] [i_10 + 1] [i_10])));
                        arr_38 [i_10] [i_7] [i_1] [i_1] [i_1] [i_10 - 3] [i_1] = 977863320;
                        arr_39 [i_1] [5] [i_6] [i_1] [i_10] = (((!47755) && (!var_8)));
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        arr_43 [i_6] [i_1] = 1;
                        arr_44 [4] [6] [i_6] [i_6] [i_7 + 1] |= 1;
                    }
                    arr_45 [i_1] = ((arr_26 [i_1 + 1] [i_6 - 1] [i_7 - 3]) ? ((var_4 ? (arr_15 [i_7] [i_0] [i_0] [i_1] [i_0]) : (arr_21 [i_1]))) : ((((arr_32 [i_1] [i_6 + 1] [i_1] [i_0]) ? var_6 : var_5))));
                    arr_46 [i_6] [i_7] |= (((4341596239306616637 || var_8) ? 1 : ((var_2 ? (arr_4 [i_6] [i_6]) : var_3))));

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_49 [i_1] [i_12] [i_12] [i_7 - 3] [i_6] [i_0] [i_1] = 1061998365;
                        arr_50 [i_12] [3] [i_0] [i_6 + 1] [i_1] [i_1] = (1 ? var_0 : (arr_47 [i_1] [i_1 - 3] [i_1]));
                        arr_51 [i_1] [i_12] [i_12] [i_1] [13] = (((var_0 != 6232) <= -var_6));
                    }
                }

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_20 = (min(var_20, (((((4398046248960 <= (arr_24 [i_0] [8] [i_0] [i_0]))))))));
                    var_21 = var_1;
                    var_22 = ((arr_37 [1] [i_1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3]) << (10 - 10));
                    var_23 -= ((6251 ? 1024647293 : 18118884657437200943));
                    var_24 -= (((arr_53 [i_1 - 2] [i_6]) / (arr_52 [1] [1] [i_1 - 2] [i_13] [i_6 - 1] [i_13])));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_25 -= ((!(var_4 || 0)));
                    var_26 = (min(var_26, 59304));
                    var_27 *= 8781684747481500537;
                }
            }
        }
    }
    #pragma endscop
}
