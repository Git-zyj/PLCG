/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_15 += ((((((arr_1 [i_0 - 1]) ? (((arr_1 [i_0]) ? 65535 : var_0)) : (arr_1 [i_0])))) <= ((5254316389413153164 ? ((var_1 % (arr_0 [i_0]))) : (!-1)))));
        var_16 = (min(var_16, (arr_0 [i_0 - 3])));
        var_17 = (arr_0 [i_0 - 2]);
        var_18 = (min(var_18, (arr_1 [1])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (max(25995, ((1 ? (arr_2 [i_1] [i_1]) : ((var_10 ? var_6 : (arr_2 [i_1] [i_1])))))));
        var_19 = (min(var_19, (((var_6 ? 1668944501 : ((var_0 & (arr_2 [7] [7]))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [i_5] |= (((var_9 % -18929) ? ((((((arr_5 [i_2]) && (arr_11 [i_3] [i_4] [i_3] [i_6])))) + -1668944482)) : (((~-293665320) ? (arr_6 [4]) : var_0))));
                                var_20 = (max(var_20, (arr_14 [0] [1] [i_4] [i_5] [1])));
                                arr_22 [i_2] [i_6] [11] [i_2] [i_2] = (min((max(((-1 ? 9090 : 63)), 2525400501)), (min(var_9, 1668944502))));
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (((var_7 + ((((max((arr_23 [i_2] [i_3] [i_4 + 1]), (arr_16 [i_2] [i_4] [i_4] [9] [9] [i_7 - 3])))) ? ((((arr_9 [i_2] [5]) + (arr_7 [i_2] [i_2])))) : (max((arr_7 [i_4 + 1] [i_7]), (arr_13 [i_4] [i_4]))))))))));
                        arr_26 [i_2] [i_2] [i_4] [i_7 - 2] = (arr_10 [i_7 - 1]);
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_29 [8] [8] [i_2] = max(((((max((arr_11 [i_2] [1] [i_2] [i_2]), (arr_20 [i_2] [i_2] [i_4])))) ? ((min((arr_18 [i_2] [i_3] [i_4 + 2] [i_8] [2]), 1))) : (((arr_16 [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [1]) ? 65528 : (arr_19 [i_2] [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1] [13] [1]))))), (((!(!73)))));
                        arr_30 [0] = (arr_13 [14] [14]);
                        arr_31 [i_2] [3] [i_4] [i_3] [i_3 + 2] |= (((max(1, (((arr_18 [i_8] [i_8] [i_8 + 1] [10] [i_8]) / 221)))) / (arr_28 [i_2] [i_2] [i_2])));
                    }
                    for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_22 &= ((((min((-113 + 18), -var_12))) ? -118 : (((arr_23 [i_2] [10] [i_2]) ? ((0 + (arr_17 [i_2] [i_2] [i_2] [1] [9]))) : (arr_7 [i_2] [1])))));
                        arr_34 [2] [2] [i_4] = ((min(1941652514444012499, -605901)));
                        arr_35 [1] [1] [i_4] [i_9] [i_4 + 1] [1] = -11766;
                        arr_36 [i_2] [i_3] [i_9 - 3] = (((((arr_27 [i_3 - 3] [12] [12] [i_4 + 1] [i_4] [i_9 - 3]) <= (arr_27 [i_3 + 1] [i_3 + 1] [i_4] [i_4 - 1] [i_3 + 1] [i_9 - 1]))) ? (((arr_19 [i_4 + 1] [i_4 - 1] [i_9 + 2] [i_9] [i_9] [i_9] [i_9]) ? (arr_27 [i_3 - 3] [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_9 + 1]) : (arr_19 [i_2] [i_4 + 1] [i_9 - 2] [i_4 + 1] [i_9 - 3] [i_9] [i_4 + 1]))) : (1447387338 >= -2788677878694352214)));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        var_23 = (arr_3 [i_10]);
                        var_24 += ((var_10 | (((arr_5 [i_2]) ? (arr_23 [i_3] [i_4] [1]) : 32767))));
                        arr_39 [i_3] [i_10] = ((((((arr_11 [i_2] [i_3] [13] [i_3]) ? 11 : (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_9 [i_10] [i_3]) : (arr_9 [11] [i_2])));
                    }
                    arr_40 [i_2] [i_3 + 2] [1] [i_2] = (arr_6 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
