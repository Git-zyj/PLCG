/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, (!var_1)));
        var_13 = ((((((arr_0 [7] [i_0]) ? ((-1 + (arr_1 [i_0]))) : ((max((arr_1 [2]), var_0)))))) ? (arr_0 [i_0] [i_0]) : ((max(1, 1)))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] |= ((((max(((var_8 ? var_7 : var_0)), (((arr_2 [i_1]) * (arr_3 [21] [21])))))) ? ((var_9 ? (var_9 / var_1) : (((-(arr_4 [i_1])))))) : (((-var_1 ? 1 : var_5)))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_14 += (~1);
                            var_15 ^= ((((((arr_6 [i_3]) ? var_4 : var_6))) ? (arr_10 [i_4] [i_2 + 4] [i_3]) : (!var_10)));
                            arr_16 [i_1] [i_2] [i_3] [0] [i_5 + 1] [i_3] = var_6;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_2] [10] [10] [i_6] = ((var_4 ? ((((106 ? 1 : var_4)))) : ((min(1, 108)))));
                            var_16 = (min(var_16, (!var_8)));
                        }
                        arr_21 [i_1] [13] [i_2 - 2] [1] [i_3] [i_4] = 1;
                    }
                }
            }
        }
        var_17 = ((((((arr_10 [i_1] [12] [i_1]) ? (arr_11 [1]) : ((var_0 ? var_0 : var_2))))) ? ((var_9 ? var_6 : ((((arr_19 [i_1] [i_1] [i_1] [8] [i_1 + 2] [i_1] [i_1]) == var_1))))) : (((arr_17 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1]) ? (var_8 > var_7) : var_7))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_26 [i_1 - 1] [i_7] [i_8] = (((((var_3 ? (-107 + 106) : var_0))) ? (((((var_2 ? var_1 : var_8))) ^ ((var_0 ? (arr_22 [i_1] [i_1]) : 12288)))) : (arr_17 [i_8] [i_7] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_18 = (+(((!var_6) ? (arr_29 [i_8]) : (var_9 % var_7))));
                                arr_31 [i_8] [i_9] = -0;
                                var_19 |= ((((var_6 ? var_11 : var_3))) - (arr_10 [i_1] [i_1] [i_1 + 1]));
                                arr_32 [i_10] [i_9 + 1] [7] [i_8] [9] [21] = ((!(((-126 ? (9223372036854775807 ^ -3435334397393283218) : var_8)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_40 [i_1] [i_1] [i_7] [i_8] [i_11] [i_11] [i_12] = var_9;
                                arr_41 [i_1 + 2] [i_7] [i_8] [i_11] = max((((!((min((arr_22 [i_1] [i_1]), var_6)))))), ((~(-9223372036854775807 - 1))));
                                arr_42 [i_1] [i_1] [16] [i_1] [i_1 + 2] = (((((((((arr_35 [10] [2] [2] [0]) ? var_10 : (arr_4 [i_1])))) ? ((0 ? var_6 : var_0)) : (((arr_17 [1] [i_8] [i_1] [i_1]) % var_6))))) ? (((!(var_11 > var_8)))) : var_0));
                            }
                        }
                    }
                    var_20 -= 1;
                }
            }
        }
        arr_43 [i_1] = (((((~(var_7 & var_10)))) ? (((var_1 | 9650) ? 65535 : (((arr_18 [i_1] [i_1] [i_1] [20] [20] [i_1]) ? 107 : var_4)))) : ((((((var_4 ? var_6 : (arr_11 [i_1])))) ? (max((arr_8 [i_1] [i_1] [i_1] [i_1]), var_8)) : ((var_1 ? (arr_29 [i_1]) : var_5)))))));
    }

    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_47 [i_13] |= (((!var_1) ? (arr_13 [i_13] [i_13] [i_13] [i_13] [i_13] [20] [i_13]) : ((((((var_3 ? var_3 : (arr_29 [13]))) <= (((arr_36 [i_13] [5] [1] [13]) ? var_2 : var_0))))))));
        var_21 += (57 == 187);
        arr_48 [i_13] = ((((arr_4 [i_13]) / var_8)) > (!var_0));
        arr_49 [8] &= (arr_18 [17] [21] [21] [17] [11] [i_13]);
    }
    var_22 = var_2;
    #pragma endscop
}
