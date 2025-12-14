/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2 + 1] [i_1] [i_1] = (((var_4 > var_8) ^ 0));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_14 -= ((var_4 || ((max((~0), (arr_7 [i_3] [i_3 - 1] [i_3] [i_3]))))));
                        arr_9 [i_1] [i_1] [5] [i_3] = ((((min((arr_5 [i_3] [i_2] [i_1 - 1] [i_0]), ((-1 ? 13906 : 5207339531103987325))))) ? (min((!18), (((arr_5 [i_0] [i_2] [i_2] [i_2]) / (arr_4 [i_3] [2] [2] [i_0]))))) : ((max((arr_0 [i_1]), (((arr_1 [i_0] [i_0]) && var_9)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_12 [i_0 - 1] [i_0 + 1] [i_1] = 13;
                        arr_13 [i_0] [i_1 + 1] [4] [0] [i_4] [i_0] &= ((((arr_11 [i_0] [i_4]) ? (arr_11 [i_4] [i_4]) : (arr_11 [i_0] [i_1 + 3]))) <= 13612);
                        var_15 = (var_3 - var_11);
                        var_16 = (((arr_10 [i_1] [i_2 + 1] [i_1 + 1] [i_1]) - 8388607));
                        var_17 = ((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1]));
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_18 ^= ((((((arr_15 [i_0] [i_1] [i_2 + 1] [i_5]) >= (-32767 - 1)))) + (((((~(arr_11 [i_0] [i_0])))) ? (((arr_15 [i_0] [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_0] [i_1] [i_2] [i_0]) : (arr_1 [i_0 - 1] [i_0]))) : (arr_2 [i_1] [i_1])))));
                        var_19 -= (((arr_5 [i_5 + 2] [i_2] [i_1 + 1] [i_0 - 2]) == (((arr_5 [i_0] [i_1] [i_2] [i_5]) ? var_2 : (arr_5 [i_0 + 2] [3] [i_1] [i_0 + 2])))));
                        var_20 = ((((((arr_0 [i_5 - 1]) ? ((var_3 ? (arr_10 [i_0 - 2] [i_1] [i_2 + 1] [i_1]) : (arr_8 [i_1] [i_1]))) : ((((arr_3 [i_1] [i_1]) | 17725)))))) ? (arr_2 [i_1 + 3] [i_5 + 1]) : (arr_16 [i_1] [1] [i_1] [i_1])));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((((((arr_11 [i_0] [i_0]) * 0))) && var_8)))));
                            arr_19 [i_6] [i_1] [i_1] [i_1] [i_0] = (!var_5);
                            var_22 = (((!var_8) ? (arr_14 [i_1] [6] [0] [i_1]) : (arr_3 [i_0 - 1] [i_1])));
                        }
                        arr_20 [i_1] [i_1] = max(13299581200808380501, 0);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((min((((!(var_8 * var_4)))), (min((arr_5 [i_0] [i_0] [i_7] [1]), (~var_4))))))));
                                arr_25 [i_1] [i_1 + 3] [i_1] [i_1] [i_1] [i_1] = -5833;
                                var_24 -= ((~(((!((min((arr_3 [i_1] [i_0]), (arr_1 [i_1] [i_1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_25 = (min(((((min((arr_10 [i_2 + 1] [i_1 + 1] [1] [i_1]), 0))) ? (((arr_23 [i_10] [0] [i_9] [i_2] [i_0] [i_0] [i_0]) ? 10004 : var_4)) : ((((arr_29 [i_1] [i_9] [7] [i_1] [i_1]) - (arr_29 [i_1] [i_1] [i_1] [2] [2])))))), ((-((var_3 ? (arr_7 [i_9] [i_9] [i_9] [i_9]) : var_5))))));
                                var_26 -= ((((((min((arr_29 [i_9] [i_9] [i_2 + 1] [i_9] [i_9]), var_0))) ? (((0 ? (arr_21 [i_0]) : 1))) : (max((arr_10 [i_0 + 2] [i_1 + 3] [i_2] [i_0]), (arr_21 [i_0]))))) & (arr_27 [9] [9] [9] [9] [i_10])));
                                arr_31 [i_0 + 2] [i_1] = ((!((!(arr_26 [i_1] [i_2] [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
