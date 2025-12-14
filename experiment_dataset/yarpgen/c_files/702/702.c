/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_18 += (min((arr_13 [i_0] [i_1] [10] [i_0] [i_4 - 1]), (((arr_8 [i_4] [i_1]) * (((arr_7 [i_1] [i_1] [14] [13]) ? var_10 : var_3))))));
                            var_19 *= 376;
                        }
                        var_20 = ((((~(var_11 < var_4))) > ((((arr_6 [i_1] [i_1] [11]) >= (var_8 < var_13))))));
                        arr_16 [i_1] [6] = (min(((var_16 ? var_5 : var_2)), (((var_0 || (arr_8 [i_0] [i_3]))))));
                    }
                }
            }
            arr_17 [i_1] [i_1] = ((((((min(37681, -96))) ? (((var_6 ? var_9 : (arr_6 [i_0] [i_1] [i_1])))) : (((arr_12 [i_0] [i_1] [15] [i_0] [15] [i_0]) ? (arr_2 [i_1]) : var_8)))) >= ((((!(~var_2)))))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_20 [11] = ((392 ? ((((((arr_2 [i_0]) ? var_17 : (arr_10 [11] [11] [i_5] [i_5])))) ? ((var_1 ? var_0 : var_17)) : var_5)) : (((var_3 ? ((var_13 ? (arr_1 [i_5]) : (arr_6 [i_5] [14] [16]))) : (((~(arr_8 [i_0] [i_5])))))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_26 [i_6] = ((var_5 ? (((arr_9 [i_0] [i_0] [15] [i_0]) ? (arr_9 [12] [i_0] [i_5] [i_0]) : (arr_18 [0] [i_5] [i_5]))) : (!32767)));
                        arr_27 [5] [5] [i_6] [5] = (((~var_14) <= var_2));
                        arr_28 [i_0] [i_0] [11] [i_0] = ((((arr_2 [i_6 - 1]) ? (-364 <= 24576) : -var_17)));
                        var_21 = (((((((var_1 ? var_3 : (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((var_9 ? var_8 : (arr_11 [i_7] [10] [10] [i_7])))) : ((var_3 / (arr_25 [13] [5] [i_5] [i_6] [11] [i_7])))))) ? (((((var_6 ? var_15 : var_14))) ? (arr_7 [1] [i_6 + 3] [i_6 - 1] [i_6 + 4]) : (arr_15 [6] [i_5] [i_0] [i_5] [i_7]))) : (!1));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_22 = (((arr_18 [i_0] [i_8 + 1] [i_11 - 2]) * (((arr_18 [i_0] [i_8 - 1] [i_11 - 3]) ? var_4 : (arr_18 [i_0] [i_8 + 2] [i_11 - 2])))));
                            arr_40 [i_9] [i_9] [i_9] [i_9] [i_0] = (((((((((arr_22 [i_0] [i_8] [i_9]) ^ var_12))) ? ((var_16 ? (arr_34 [i_9]) : (arr_14 [i_0] [i_8] [i_0] [13] [i_0] [1] [5]))) : (arr_6 [i_0] [i_9] [i_9])))) ? ((((((arr_6 [i_9] [i_9] [1]) ? var_13 : (arr_7 [i_10] [i_9] [i_0] [i_0])))) ? var_1 : var_6)) : (((((-79 ? -270957804312494128 : 782057402))) ? var_13 : var_5))));
                            var_23 += ((((((arr_23 [i_0] [12]) == var_11))) == (((((arr_24 [i_10] [i_10] [i_10] [i_10]) ? (arr_14 [i_0] [i_0] [i_9] [3] [i_0] [i_0] [i_0]) : (arr_15 [i_8] [2] [i_9] [2] [i_8])))))));
                            var_24 = (((arr_23 [i_0] [i_8]) ? var_3 : -var_5));
                        }
                    }
                }
            }
            var_25 = ((((((var_4 ? var_15 : var_10)) * (!var_13))) >> (((((min(var_17, var_14)) << ((((-(arr_24 [i_0] [i_8] [i_8] [1]))) - 795987333452910847)))) - 2118758906724333))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    arr_46 [7] [12] [i_13] = ((~(--8526978825470319421)));
                    arr_47 [i_0] [i_12] [2] = (arr_4 [i_0] [i_12] [i_13]);
                    var_26 = -var_11;
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 8;i_14 += 1)
    {
        var_27 = var_2;
        arr_50 [0] = ((!(arr_22 [i_14] [i_14 - 1] [6])));
        var_28 = (((((min(var_14, (arr_15 [i_14] [i_14] [i_14] [10] [14]))) - (var_15 - var_17))) * ((var_8 ? (!var_15) : var_7))));
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_29 = ((!(((var_9 ? (arr_43 [i_15] [i_15]) : (arr_43 [i_15] [i_15]))))));
        var_30 = ((~((((var_5 ? var_10 : (arr_31 [i_15] [1]))) - ((min((arr_14 [i_15] [i_15] [12] [i_15] [3] [3] [i_15]), var_14)))))));
        arr_53 [i_15] [i_15] = ((((min(((var_4 - (arr_42 [i_15] [i_15]))), var_11))) ? (((-(arr_2 [i_15])))) : ((~((var_8 ? var_14 : var_17))))));
    }
    var_31 = (((((var_9 ? var_6 : (~var_1)))) || ((((!var_1) ? (-1716535309 & var_15) : (var_7 < var_6))))));
    #pragma endscop
}
