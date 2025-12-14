/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));
    var_12 = ((~(-var_3 && var_5)));
    var_13 = (max(var_13, var_2));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = (arr_0 [i_0 - 2]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (min(var_15, (((351701509 | var_9) % (arr_4 [i_0] [i_0 - 1] [i_0])))));
            var_16 += (arr_1 [i_1]);
            var_17 = (min(var_17, (((!(arr_4 [i_0 + 1] [i_0 + 2] [i_1]))))));
        }
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        arr_7 [i_2] = (max((((arr_5 [14]) | var_3)), (arr_5 [i_2])));
        var_18 = (min((arr_3 [i_2 - 4]), ((var_1 % (arr_0 [i_2])))));
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_19 = (((arr_5 [i_3 + 3]) ? 0 : (((arr_10 [i_3 + 3] [i_3]) & (7 - var_4)))));

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            var_20 = ((var_0 ? ((((min((arr_2 [10] [10] [16]), (arr_3 [i_4])))) ? ((173320058 ? var_4 : var_3)) : (((var_9 ? var_8 : var_0))))) : (arr_14 [i_4 - 3])));
            var_21 -= (max((1 + 1), (arr_15 [i_4])));
            arr_16 [i_4] [4] [2] = (((arr_5 [i_3]) ? ((((arr_10 [i_4 - 4] [i_4 + 1]) ? (arr_4 [i_3] [i_3 - 2] [i_4 - 3]) : var_0))) : ((((((7 != (arr_8 [7]))))) % (arr_15 [2])))));
            var_22 = var_3;
            arr_17 [i_3] [i_4 - 2] [i_4] = arr_6 [i_3 - 3] [i_4];
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_23 = (((((arr_0 [i_3]) ? (arr_1 [i_3 + 1]) : (arr_11 [i_5]))) & (arr_5 [i_3 + 1])));
            arr_20 [i_3 + 3] [i_5] [11] = (arr_14 [i_3 + 1]);
            var_24 = (-(arr_13 [i_3 + 2] [i_5] [7]));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_23 [i_6] [i_6] [i_6] [6] = (arr_6 [i_3] [i_3]);
                var_25 = (max(var_25, ((((((arr_1 [i_3]) && (-9223372036854775807 - 1))) ? (((var_10 ? (arr_18 [i_6]) : var_5))) : ((var_2 ? (arr_12 [i_6] [i_5 - 3] [i_3 - 1]) : (arr_3 [i_3]))))))));
                arr_24 [i_3] [i_3 - 2] [3] = var_3;
            }
            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_26 = ((var_1 ? (var_4 <= -9223372036854775804) : (arr_6 [i_7 + 1] [i_5 + 1])));
                arr_27 [i_7] [i_5 + 2] [i_7 + 1] = (arr_26 [i_3 - 3] [i_5 - 3] [i_7 + 1] [2]);
                arr_28 [i_7] = -9223372036854775778;
                var_27 = var_1;

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    arr_33 [9] [9] [9] [i_7] [i_8 - 1] [i_3 + 2] = (arr_4 [i_3] [2] [i_8]);
                    var_28 = (min(var_28, (((arr_0 [i_8 + 2]) ? var_5 : ((0 ? -2 : 1))))));

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_29 = (((arr_26 [i_9] [i_7] [i_7] [i_8]) || ((((arr_8 [i_9]) + 9223372036854775807)))));
                        var_30 = (min(var_30, ((!(arr_29 [i_9] [i_9 - 1] [i_7 - 1] [i_3 - 4])))));
                        var_31 *= (((arr_29 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7]) >= 9223372036854775807));
                        var_32 = var_8;
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_33 += var_8;
                        var_34 = ((-(arr_12 [i_3 + 2] [i_3] [i_3])));
                        var_35 = (min(var_35, (((var_6 ? var_6 : var_9)))));
                        var_36 = (arr_14 [i_5]);
                    }
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_41 [i_3] [i_7] [i_7] = -var_5;
                    var_37 = ((!(arr_10 [i_5 + 1] [i_7 - 1])));
                }
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    var_38 = (arr_6 [i_7 - 1] [i_12 - 1]);
                    arr_44 [i_3] [i_5] [i_3] [i_7] [i_3] = (arr_37 [i_12 + 1] [0] [i_7] [i_5] [i_3]);
                    var_39 = -var_9;
                }
            }
            for (int i_13 = 2; i_13 < 11;i_13 += 1) /* same iter space */
            {
                arr_49 [i_3 - 2] [5] [5] = (arr_3 [i_3 + 2]);

                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_40 |= var_3;
                    var_41 = var_1;
                }
                arr_53 [i_3] [i_5 - 1] [i_3] |= (arr_43 [i_13 - 2] [i_5]);
            }
        }
        for (int i_15 = 4; i_15 < 11;i_15 += 1)
        {
            var_42 -= (var_2 ? (min((arr_54 [i_3 - 3] [i_3] [i_3]), ((((arr_5 [i_15]) ? (arr_29 [11] [11] [i_15] [i_3]) : (arr_12 [i_15] [0] [0])))))) : (arr_2 [i_3 - 3] [i_3 + 1] [i_15]));
            var_43 = var_2;
            arr_57 [i_3] [i_15 - 2] [i_3] = (((arr_47 [6] [i_15 - 4] [4] [i_15]) ? (((((arr_52 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1]) || (arr_52 [i_15 - 4] [i_15] [i_15 - 3] [i_15 - 2] [i_15 - 3] [i_15 - 1]))))) : (arr_12 [i_15] [i_3] [i_3])));
            var_44 = (((arr_9 [7]) % (((max(var_6, var_7)) ^ ((min((arr_55 [i_15]), (arr_55 [i_15]))))))));
            arr_58 [i_3] = min((arr_42 [i_3 + 2] [i_15]), 1);
        }
    }
    #pragma endscop
}
