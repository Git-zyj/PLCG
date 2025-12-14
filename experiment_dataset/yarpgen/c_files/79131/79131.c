/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_12 ^= (max(229, 21));
                        var_13 = (arr_2 [i_0] [i_0]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_14 = (max(var_14, (((((min(((36845 | (arr_9 [i_0] [6] [2] [i_0] [1]))), var_2))) ? (min((arr_1 [i_4]), ((max((arr_9 [i_0] [i_0] [1] [i_0] [2]), var_8))))) : (arr_4 [2]))))));
                    var_15 = var_4;
                }
            }
        }
        var_16 = 4194176;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_28 [17] [i_7] [i_6] [i_7] = ((((min(69, 11))) << ((var_1 ? (arr_24 [i_6] [i_7 - 2]) : (arr_24 [i_6] [i_7 - 2])))));

                    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_6] [i_6] [i_6] [i_6] = (((((((arr_25 [i_6] [1] [19] [i_9]) * (arr_17 [i_7]))) << (((((arr_26 [i_6] [i_8]) ? var_4 : var_1)) - 962056222)))) * (max((!1), ((3 ? (arr_26 [i_6] [i_7]) : var_11))))));
                        var_17 = var_8;
                        var_18 = 0;
                        arr_33 [i_6] = (min(((((arr_31 [i_9 + 3] [14] [i_7 + 1] [i_9] [i_9]) - ((max(29855, 1)))))), 3810981939));
                        var_19 = ((max((arr_18 [i_6] [i_9]), ((0 ? var_4 : var_0)))));
                    }
                    for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_20 = (max((arr_27 [i_6] [7] [i_10 + 2]), ((min(var_8, (arr_30 [i_8] [i_10]))))));
                        arr_36 [i_6] [9] [i_8] = 1;
                    }
                    var_21 = ((!(((((min(21, (arr_26 [i_6] [i_7])))) * ((min(var_9, (arr_18 [i_6] [i_6])))))))));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_22 = (min(var_22, (arr_40 [18] [i_12] [23] [9])));
                                var_23 += 3524;
                                var_24 = (((-((min(1, 158))))));
                            }
                        }
                    }
                    var_25 = ((((arr_35 [i_6] [i_7 - 2] [i_6] [i_6]) ? (arr_38 [i_7 - 2] [i_7 - 3] [i_7 - 1] [i_7 - 1]) : (arr_35 [i_6] [i_7 - 2] [i_6] [i_6]))));
                    arr_46 [16] [i_6] = ((62012 ? (4067445264 | 1) : (arr_25 [i_6] [i_7 - 1] [i_6] [i_11])));
                    var_26 ^= (((((min((arr_26 [i_6] [i_7]), -125)))) * (min(((~(arr_39 [i_6] [i_6] [2]))), 1))));
                    arr_47 [i_6] [0] [i_11] [i_11] = (min(((-(arr_44 [i_6]))), (127 * 29855)));
                }
                arr_48 [i_6] = (arr_31 [i_6] [i_6] [i_7] [i_7] [i_7]);
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_27 |= (min(((((min((arr_37 [i_6] [i_7 - 2] [7] [i_15]), var_0))) * var_7)), (max((((!(arr_42 [i_15] [8] [i_6] [i_7] [i_7] [i_6])))), ((1 ? (arr_52 [i_14] [i_14] [i_14] [i_6] [i_6]) : var_0))))));
                            var_28 = (min(var_28, ((((arr_24 [i_7] [i_14]) ? ((min((arr_20 [i_6] [12] [0]), (arr_24 [i_7 - 1] [i_7 - 3])))) : (((arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_14 - 2]) ? var_10 : 1)))))));

                            /* vectorizable */
                            for (int i_16 = 1; i_16 < 20;i_16 += 1)
                            {
                                arr_58 [i_6] [i_7] = (arr_42 [i_6] [i_6] [i_7] [i_6] [i_6] [i_16 + 4]);
                                arr_59 [i_6] [i_16 + 3] [i_7] [i_16] [i_6] [i_6] [i_7] = ((((var_6 - (arr_39 [i_6] [22] [i_16]))) * var_9));
                                var_29 = (arr_57 [i_7 + 1]);
                                arr_60 [i_6] [4] [i_6] [7] = (((arr_53 [i_6]) ? (((arr_22 [i_6] [i_7]) / (arr_18 [i_6] [i_6]))) : ((var_9 ? var_7 : (arr_18 [i_6] [i_16])))));
                                var_30 *= (((((var_6 - (arr_23 [i_16 + 2] [i_7] [i_7])))) ? 1 : (arr_35 [18] [i_14] [i_15] [i_16 + 1])));
                            }
                        }
                    }
                }
                var_31 += (min((((3008935100816064632 ? 1 : var_9))), (arr_56 [i_6] [i_7 - 3] [i_7])));
            }
        }
    }
    var_32 = ((-((var_8 ? var_8 : ((var_1 ? var_5 : 4279951690))))));
    var_33 = var_6;
    #pragma endscop
}
