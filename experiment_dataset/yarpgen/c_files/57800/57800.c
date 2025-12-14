/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max((max(var_1, var_4)), (((((var_6 + 2147483647) >> (var_10 + 1467871427))) ^ (var_6 > var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_2] [i_0] [i_0] = ((((((arr_5 [i_0] [i_0] [i_2]) - (arr_0 [i_0])))) ? (max((arr_6 [7] [i_2] [i_0] [i_0]), (arr_0 [i_1]))) : (arr_6 [8] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(31, (arr_9 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3])));
                                var_13 = (max(var_13, ((((arr_3 [i_0]) ? (max((-127 - 1), (arr_2 [i_3 + 1]))) : (((var_3 ^ (arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [10])))))))));
                                var_14 = ((arr_6 [i_4 - 1] [i_3 + 1] [9] [i_3]) ? ((((((var_9 ? 15 : (arr_3 [i_3])))) || var_8))) : (((!(arr_4 [i_4 - 1] [i_1])))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_15 = ((((max(((max(var_10, 15))), (~-2809880195326317943)))) ? 566598520 : (arr_14 [16] [i_1] [i_1] [6])));
                    var_16 -= (((arr_15 [i_5] [i_5 + 1] [i_5 + 1]) && ((((arr_15 [i_5] [i_5 + 1] [i_5 - 2]) ? (arr_10 [i_0] [i_5 - 1] [1] [i_0] [i_5] [i_1]) : (arr_15 [i_5 - 1] [i_5 + 1] [i_5 - 1]))))));
                    arr_17 [i_0] [i_5] = (i_5 % 2 == 0) ? ((((((var_9 + 2147483647) >> ((((~(arr_12 [i_0] [i_5]))) + 1002293011)))) != -582010990))) : ((((((var_9 + 2147483647) >> ((((((~(arr_12 [i_0] [i_5]))) + 1002293011)) + 634549525)))) != -582010990)));
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [17] [i_6] [i_1] [i_8] = 13115260902681796956;
                                arr_25 [i_8] [i_7] [i_7] [i_6] [i_1] [i_8] = (arr_1 [i_1]);
                                arr_26 [i_6] [i_8] = (((!var_7) && ((((arr_21 [i_0] [i_0] [14] [13]) ? 1689286007 : (arr_5 [i_0] [10] [i_0]))))));
                                arr_27 [i_0] [i_8] [i_8] [i_7] [i_7] [5] = (~var_7);
                            }
                        }
                    }
                    var_17 = (var_9 < 6703056370887577079);

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_9] [i_6] [i_6] [i_1] [i_9] = (((!(arr_12 [1] [i_9]))));
                        var_18 = (((~var_3) - 0));
                        arr_31 [i_9] = ((((((arr_13 [i_0] [0] [0] [i_9] [14] [i_0]) ? 1357243726 : var_5))) ? (~var_4) : -115));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_19 = (((arr_29 [i_10] [16] [i_10] [i_10]) * (!815704359)));
                        var_20 = (min(var_20, (arr_20 [3])));
                        arr_34 [i_0] [i_0] [i_10] [1] = (((arr_22 [8] [i_10] [i_6] [13] [i_1] [i_0]) ? 2147483647 : (arr_14 [i_10] [i_6] [i_1] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_21 = (max(var_21, (!65241)));
                                arr_40 [i_11] [i_6] [i_0] [i_0] = ((0 | (arr_20 [i_12 - 1])));
                                var_22 = (~-1338586889);
                            }
                        }
                    }
                }
                arr_41 [14] = (((arr_14 [i_1] [6] [i_1] [i_0]) << (((arr_14 [i_1] [i_0] [i_0] [i_0]) - 2428273199))));
            }
        }
    }
    #pragma endscop
}
