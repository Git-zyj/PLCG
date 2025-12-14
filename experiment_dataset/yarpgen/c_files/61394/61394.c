/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = -3725094475855561994;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((!(arr_2 [i_0])));
        var_19 = (max(var_19, ((var_9 ? (arr_2 [i_0]) : var_5))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((max((arr_5 [i_1 + 1]), var_10)) + ((var_5 ? (arr_12 [i_1 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (arr_12 [i_1 - 1] [5] [i_4 + 2] [i_4 - 1]))))))));
                        var_21 = (max(var_21, ((((-(arr_11 [4] [4] [8] [i_4])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_24 [i_1 + 1] [i_1] [i_1 + 1] [1] [i_1 + 1] = ((arr_8 [i_7]) ? ((((max((arr_20 [i_7]), (arr_15 [i_1] [i_5 - 1] [i_5] [i_6 + 1] [i_7] [i_7])))) ? ((~(arr_19 [7] [i_1] [i_6] [i_6 - 1]))) : (((arr_15 [i_5] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 2]) ? 38 : var_5)))) : (max(-955481948, (1 - -23))));
                        var_22 = (min(var_22, ((max(60, ((((~(-2147483647 - 1))) % 1)))))));
                        var_23 = ((+((-104 ? (-23 & 267969472) : (max(3725094475855561991, 3725094475855561989))))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = var_3;
                        var_25 = (arr_11 [i_1] [i_5 + 2] [i_6 - 1] [i_8]);
                        var_26 = (min(var_26, (((((-(max((-9223372036854775807 - 1), 253)))) == (((((arr_7 [i_8] [i_8]) < (~var_13))))))))));
                        arr_27 [i_1] [i_6] [i_8] = ((!((((!var_7) ? 32736 : ((max(23, 0))))))));
                    }
                    var_27 = ((((((!0) - (arr_16 [i_1] [i_1] [i_6 - 1] [i_6 - 1] [i_5] [i_5 - 1])))) ? -3725094475855561985 : var_2));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_28 = (min(var_28, ((((arr_3 [i_1 + 1]) || (arr_3 [i_1 + 2]))))));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_29 = -2;
                            var_30 = (min(var_30, (((((-3725094475855562003 != (arr_12 [i_1 + 1] [i_5 + 1] [i_9] [i_10 + 3]))) && (arr_15 [i_5 - 3] [i_5 + 2] [1] [i_1 + 2] [i_10 - 1] [i_6 + 1]))))));
                            var_31 = (min(var_31, ((((arr_22 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1 - 1]) && (arr_22 [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2]))))));
                            var_32 = (min(var_32, (arr_14 [1] [1])));
                            var_33 = (((((~(arr_20 [10])))) ? (arr_26 [i_5] [i_6] [i_6] [i_10]) : ((var_6 ? (arr_13 [i_1 + 2] [i_1] [i_1]) : 673186984))));
                        }
                        var_34 = (arr_31 [i_1] [i_5] [i_5] [i_9] [i_9]);

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_35 = -2;
                            arr_37 [i_1] = var_11;
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_41 [i_1] [i_6 + 1] [i_5] [i_1] = 1;
                            arr_42 [i_1] = ((3411633879598162691 ? (arr_2 [i_5 - 1]) : (arr_40 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
