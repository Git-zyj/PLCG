/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = var_10;
                    arr_8 [i_0] [i_1 + 2] = ((-(arr_2 [i_1 + 2] [i_1 - 1])));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (-(arr_5 [i_0] [i_1 - 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_4] &= (((arr_7 [i_0] [i_0] [i_3 + 1] [i_2]) & var_2));
                                var_13 = ((arr_3 [i_0]) % (arr_3 [i_0]));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = (arr_13 [17] [i_0] [i_0] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_0] [12] [i_0] = (~(arr_12 [i_0] [i_0] [i_5] [i_5] [i_5]));

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_14 *= ((!(((arr_6 [i_0] [16]) || var_6))));

                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_15 = (arr_21 [i_0] [i_0]);
                    var_16 = (min(var_16, (arr_21 [i_0] [i_5])));
                    var_17 *= ((var_10 ? (arr_13 [i_6] [i_7 + 1] [i_7] [i_7 + 3] [i_7]) : (arr_13 [i_5] [i_7 + 1] [i_7 - 1] [i_7 + 3] [i_7])));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = var_2;
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        var_18 = (arr_12 [i_9 + 1] [i_0] [i_9] [i_9 - 2] [i_9 + 1]);
                        var_19 -= ((!(arr_12 [i_9 + 1] [14] [i_9 + 1] [i_9] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_20 -= (((arr_25 [i_10]) ? ((((arr_25 [i_8]) || (arr_33 [i_10] [18] [i_6] [i_8] [i_0])))) : (arr_11 [i_0])));
                        var_21 = (((arr_29 [i_0] [i_5] [4]) ? (arr_5 [i_0] [i_10]) : (((var_8 ^ (arr_12 [i_0] [i_0] [i_0] [i_8] [i_10]))))));
                    }
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_37 [i_0] [i_0] [14] [i_6] [i_5] [i_0] = (((arr_27 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11] [10]) >> (((arr_27 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]) - 66))));
                        var_22 = (arr_2 [i_0] [i_0]);
                        arr_38 [i_0] [i_5] [i_0] = (arr_7 [i_0] [i_11 + 1] [i_11] [i_0]);
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_5] [i_6] [i_6] [i_8] [i_0] = (arr_10 [i_5] [i_6] [i_8] [i_0]);
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_12] = (arr_27 [4] [i_0] [i_6] [i_8] [i_12]);
                        var_23 = (arr_24 [i_0] [i_6] [i_8] [i_6]);
                    }
                    var_24 = (((arr_36 [i_0] [i_8] [i_6] [i_5] [i_0]) + (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_25 = (((arr_25 [i_6]) ? (arr_25 [i_6]) : (arr_28 [i_0] [i_0] [i_6] [i_8])));
                    arr_43 [i_0] [i_0] [i_0] [1] = (((var_1 ? (arr_25 [i_8]) : (arr_13 [i_6] [i_8] [i_0] [i_8] [i_0]))));
                }
                var_26 = (arr_18 [i_6] [i_6] [i_6]);
            }
        }
        var_27 = (((((arr_25 [i_0]) <= (arr_29 [i_0] [i_0] [i_0]))) ? (arr_29 [i_0] [i_0] [i_0]) : (arr_1 [i_0])));
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        arr_47 [i_13 + 1] [i_13] = (max((((arr_25 [i_13 + 3]) - (arr_25 [i_13 + 2]))), ((max((arr_25 [i_13 - 1]), (arr_25 [i_13 + 2]))))));
        var_28 = (max(((((((arr_4 [14]) % (arr_4 [12])))) ? ((((arr_34 [18] [12] [8] [i_13 + 3] [8]) ? var_0 : (arr_34 [i_13] [8] [i_13] [i_13 + 2] [i_13 - 1])))) : (arr_28 [i_13] [6] [i_13] [i_13]))), (((!(((-(arr_31 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
    }
    var_29 = var_2;
    #pragma endscop
}
