/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((-(~31)))) / var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 *= ((+(((((var_2 ? (arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) : var_12))) ? (arr_9 [i_4 + 1] [i_0] [i_3] [i_1 + 1] [i_0] [i_0] [i_0]) : (var_6 > var_4)))));
                                arr_12 [i_1] [i_2] = ((-966419554 ? (((arr_5 [7] [i_4 + 1] [i_0 - 1]) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_2]) : (arr_5 [i_2] [i_1 + 1] [i_0]))) : (arr_0 [2])));
                                var_15 = (min(var_15, (((~((~(arr_0 [i_0 - 2]))))))));
                            }
                        }
                    }
                    var_16 = ((0 ? (((((arr_5 [i_0] [i_0] [i_0]) && var_12)) ? ((var_3 ? var_0 : var_5)) : (~var_1))) : (arr_2 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 = (((((-(~var_11)))) ? ((((!var_6) - (~var_4)))) : ((~((var_8 ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_7))))));
                                var_18 = (~(((~(arr_0 [i_2])))));
                                arr_18 [i_1] [i_1 + 1] = (((((~(arr_8 [4] [i_1] [i_2] [i_2])))) ? (((((((arr_15 [i_6] [i_5] [i_0] [i_0]) + var_7)) <= (arr_10 [i_0] [i_1] [i_1] [i_6 + 1] [i_1 + 1]))))) : (((((arr_2 [i_1 + 1]) & var_4)) + (arr_4 [i_1])))));
                                var_19 = (min(var_19, (((+((-var_9 ? var_9 : ((var_9 ? (arr_2 [i_2 + 1]) : (arr_13 [i_0] [i_0]))))))))));
                                var_20 = ((~(((var_5 & (arr_7 [i_2] [i_1]))))));
                            }
                        }
                    }
                    arr_19 [i_1] = (arr_5 [i_2] [i_2] [i_2]);
                    arr_20 [i_2 + 1] [i_1] [i_0] = ((-((var_5 ? (arr_15 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 + 1]) : (arr_0 [i_0 + 1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((-(!var_7)));
        var_21 &= ((((!(arr_21 [i_7] [i_7]))) ? (arr_23 [i_7]) : (((614915865 ? -4096 : 23)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                {
                    var_22 = ((((!(arr_22 [i_7] [i_9]))) && (arr_21 [i_9 + 1] [i_7 + 3])));
                    var_23 &= ((-((((arr_28 [10] [20] [20]) > (arr_21 [i_8] [i_9 - 2]))))));
                }
            }
        }
        var_24 = ((~((18446744073709551593 ? 20 : 614915865))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_41 [i_10] [i_11] [i_12] [i_13] = ((~(((arr_39 [i_12] [i_13]) ? (arr_39 [i_10] [i_10]) : var_12))));
                        arr_42 [i_10] [i_10] [i_11] [i_11] = (((((~(~var_7)))) ? (((~(arr_22 [i_13] [i_12])))) : ((~(12560092647671374095 % -1)))));
                    }
                }
            }
        }
        var_25 = (min(var_25, (arr_31 [i_10])));
        var_26 = ((!((!(arr_36 [i_10])))));
        var_27 += (arr_40 [i_10] [14] [i_10] [i_10]);
    }
    #pragma endscop
}
