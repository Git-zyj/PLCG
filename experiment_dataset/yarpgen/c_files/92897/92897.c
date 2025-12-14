/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((1 ? -13605 : -31141));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (((((var_5 ? (arr_6 [i_4] [5] [i_4]) : var_13))) ? var_16 : -var_14));
                                arr_17 [i_0] = ((~(var_5 && var_1)));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [13] = ((-((18380 ? var_17 : var_1))));
                                var_19 = ((18 < (arr_14 [i_1] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                    arr_19 [17] = (((arr_2 [i_1]) & 9223372036854775807));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_5] = var_1;
                    arr_23 [1] [i_1] [i_5] [i_5] = (min(((2615485199663945827 ? ((min(var_2, 3198))) : ((~(arr_4 [i_0] [i_0]))))), ((((!12) < (!3186))))));
                    var_20 = var_7;
                    arr_24 [i_5] [i_5] = ((!((!(arr_13 [i_5] [i_1] [i_0])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    arr_28 [i_0] [5] = (-154659412199408845 / 127);

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_21 *= 154659412199408845;
                        var_22 = 94;
                    }
                    var_23 *= ((9223372036854775807 ? (arr_26 [i_6] [i_6] [10] [i_0]) : var_6));
                    var_24 = 3198;
                    var_25 = (!var_13);
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_26 = (((var_10 | var_15) ? ((var_3 ? (arr_6 [i_0] [i_1] [i_0]) : (((arr_11 [i_1]) ? 3904543373 : -4)))) : (((~(arr_27 [11]))))));
                    arr_35 [i_0] [i_0] [i_0] = (((arr_15 [i_8] [i_1] [i_1] [i_8] [12]) ? ((-(var_0 - var_3))) : (((arr_31 [i_0] [i_0] [i_0] [i_1]) ? (var_8 / var_13) : var_12))));
                    arr_36 [i_1] = ((2147483647 * (((((52215 ? 0 : var_1))) * (~var_14)))));
                    var_27 *= ((((arr_21 [i_0] [i_1]) ^ (arr_21 [i_0] [i_8]))));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_28 = (max(var_28, var_14));
        arr_39 [16] |= var_9;
        arr_40 [i_9] [12] |= ((~((((arr_38 [8]) && 107)))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_43 [i_10] = (((~var_2) ? ((min(var_10, var_4))) : ((3943353553 ? (arr_38 [i_10]) : (arr_42 [i_10] [i_10])))));
        var_29 = (max(var_29, 9223372036854775807));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_47 [i_11] = (arr_45 [i_11] [i_11]);
        arr_48 [i_11] = 7254937994286645317;
    }
    var_30 = var_4;
    #pragma endscop
}
