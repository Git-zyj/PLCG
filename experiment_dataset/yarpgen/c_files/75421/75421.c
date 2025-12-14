/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((max(var_8, 249)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((min(var_6, var_1))));
        var_14 = (min(var_14, (((((max((max(-2087374634, 36363)), -2087374634))) ? (((max(0, var_0)))) : (max((max(2087374633, var_1)), (var_6 && -27736))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = arr_2 [i_1 + 2] [i_1];
        var_15 &= (((!var_8) >> ((((-(arr_2 [i_1] [i_1 - 2]))) + 1812833995))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 ^= ((-((var_10 ? var_9 : (arr_5 [i_3] [16])))));
                        arr_12 [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = var_8;
                        arr_13 [i_1] [i_2] [i_1] = (((arr_7 [i_1] [10] [i_3 - 1] [i_4]) ? var_9 : (!var_1)));
                    }
                }
            }
            arr_14 [i_1] [i_2] [i_2] = (((arr_5 [i_2] [i_1]) ? (arr_10 [i_2] [i_1 - 2] [i_1 - 3] [i_1 - 3]) : ((((arr_2 [i_1] [i_2]) == var_4)))));
            arr_15 [i_2] [i_2] = var_11;
            arr_16 [i_1] [i_2] [i_2] = var_8;
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                var_17 = 1936831017593768383;
                var_18 = (min(var_18, (((var_3 - (((arr_8 [i_5]) ? (arr_17 [i_1] [i_5] [i_5]) : var_2)))))));
                arr_21 [i_1] [i_5] [i_6] [1] = (((arr_2 [i_1 - 2] [i_5 - 1]) ? (arr_2 [i_1 - 1] [i_5 + 1]) : var_6));
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_25 [i_1] [i_5] [i_1] = (arr_20 [i_1] [i_5] [13]);
                arr_26 [i_7] = (((arr_9 [i_7] [12] [i_5 - 1] [i_5] [i_7] [i_7]) - (arr_19 [i_1 - 3])));
                arr_27 [i_1] [i_5] [i_1] = (((arr_9 [i_7] [i_1 - 3] [i_7] [i_5 - 1] [i_5] [i_1]) == (arr_9 [i_7] [i_1 - 2] [i_7] [i_5 + 1] [i_7] [i_1])));
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                var_19 = (~var_7);
                var_20 = (((arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1]) > (arr_20 [i_8 + 1] [i_8] [i_8])));

                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    arr_35 [i_5] [i_5] [i_8] [i_8] = ((~((var_11 - (arr_11 [i_8] [i_8] [i_8 - 1] [i_8])))));
                    var_21 = (min(var_21, (~var_10)));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_22 = (((arr_2 [i_1 + 1] [i_5 + 1]) ? (arr_2 [i_1 - 3] [i_5 - 1]) : (arr_2 [i_1 + 2] [i_5 + 1])));
                        var_23 = var_4;
                        var_24 = (arr_37 [i_5 - 1] [i_8]);
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] = (((arr_6 [i_8] [i_5 + 1] [i_8]) * (arr_6 [i_8] [i_5 + 1] [i_8])));
                    }
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    arr_42 [i_8] [i_1] [i_1] [i_8] = (((((var_11 % (arr_9 [i_8] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((var_11 / (arr_19 [i_8]))) : (arr_6 [i_8] [i_5 - 1] [i_8])));
                    var_25 = (arr_8 [i_5 - 1]);

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_45 [i_1] [i_5] [i_8] [i_11] [1] = (585481615985375078 - 18446744073709551615);
                        arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [5] = ((arr_41 [i_1] [i_5 + 1] [i_1] [i_11] [i_12]) ? var_3 : 2147483647);
                    }
                    var_26 = ((!(arr_20 [i_1 - 1] [i_5 + 1] [i_8 - 1])));
                }
                var_27 = 166;
            }
            var_28 = ((var_11 ? var_9 : ((((!(arr_11 [16] [i_1] [16] [16])))))));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_50 [i_13] [i_1 + 2] = (((~210) ^ (arr_33 [i_1 - 3] [20] [i_1] [i_1 + 1] [i_1 + 1] [20])));
            var_29 = (arr_22 [i_1 - 3]);
            arr_51 [i_1] = ((((((arr_19 [i_1]) - var_6))) ? (arr_48 [i_1 + 2] [i_1 - 3]) : 40570));
        }
        arr_52 [i_1] = 3195920671043769084;
    }
    var_30 = ((-var_11 * ((((!((min(var_4, var_11)))))))));
    #pragma endscop
}
