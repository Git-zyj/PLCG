/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_15 - (var_16 - 1600475171)));
    var_18 += (var_2 < var_6);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (min(var_19, (((-(((!((var_11 < (arr_1 [i_0])))))))))));
        var_20 = var_12;
        var_21 = ((((min(6144, 28757))) ^ (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = var_16;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_22 = ((((~((13592 ? var_13 : 788820545)))) < (((-(arr_12 [i_1] [i_1] [i_1] [i_1] [11]))))));
                                arr_17 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_10 ? (((!(arr_1 [0])))) : (((41838 && (arr_10 [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                    arr_18 [i_1] = (((~(arr_9 [i_1] [i_2] [i_3]))));
                    arr_19 [i_1] [i_3] [i_3] [i_3] &= (max(((1652592638 | ((((var_14 < (arr_9 [i_3] [i_3] [i_2]))))))), (arr_3 [i_1])));
                }
            }
        }
        var_23 = (max(var_23, ((min(((min(23698, -107))), -123)))));
        var_24 = ((((((((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) + 2147483647)) << 0)) >> (((arr_0 [i_1]) + 3462590755377048339)))));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_23 [i_6] = (!4448);

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_26 [i_6] = (min((7929610340168499941 / 2010540323), (((~(((arr_24 [i_6]) ? (arr_25 [i_6] [i_6] [i_7]) : var_2)))))));
            var_25 = (+(((((arr_20 [i_6]) / (arr_24 [i_6]))) ^ (~var_16))));
            arr_27 [i_6] [i_6] = (((-(arr_20 [i_6]))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_28 [i_10 + 1]) ? (arr_20 [i_8 - 2]) : (arr_20 [i_8 - 2]))))));
                            var_27 = ((var_9 ? 726076459 : (arr_29 [i_8 - 3] [i_8 - 1] [i_8 + 1])));
                            var_28 = (max(var_28, var_1));
                            arr_37 [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] [i_10 + 3] |= (!-1775780439570076591);
                            arr_38 [i_6] [i_7] [11] [i_8] [i_10 + 3] = var_10;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_29 += (max((min((arr_32 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8]), (arr_32 [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8] [i_8] [i_8]))), (arr_32 [i_8 - 2] [18] [i_8 - 1] [i_8] [5] [i_8])));
                            var_30 = (min((var_8 < var_1), (((!(arr_22 [i_6]))))));
                            var_31 = (min((((arr_42 [i_8] [i_8 - 2] [i_8 - 1] [i_9] [i_8] [i_9]) ? (arr_42 [11] [i_8 - 2] [i_8 - 1] [i_11] [i_8] [7]) : (arr_42 [i_6] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8] [i_8 - 2]))), 127));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_32 = (min(-1600475175, 1578349229));
                            arr_45 [i_7] [i_7] [i_9] [i_8 + 1] [i_7] [i_7] &= ((~(((!(arr_21 [i_8 - 1] [i_8 - 3]))))));
                        }
                        arr_46 [i_8] [i_8 - 1] [i_8] = var_0;
                    }
                }
            }
            var_33 = (arr_29 [i_6] [i_6] [i_7]);
        }
    }
    #pragma endscop
}
