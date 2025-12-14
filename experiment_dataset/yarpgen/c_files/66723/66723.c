/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 -= (((((arr_1 [i_0 + 2] [i_0 - 2]) == var_10)) ? (((((arr_0 [i_0]) && 193)) ? (arr_2 [i_0 + 2]) : (arr_8 [i_2] [i_1] [i_0 - 1] [i_0 - 1]))) : (max(-377175143109606518, ((max(0, (arr_6 [i_0] [i_1] [i_1]))))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (2129176575107183644 == -2129176575107183644);
                            var_15 |= (178 >= var_1);
                            arr_13 [i_0] [i_2] [i_4] = ((!(((791765993448120563 ? -2129176575107183644 : (arr_10 [i_4 - 1] [i_3] [i_1]))))));
                            arr_14 [i_0] [5] [i_0] = (~var_6);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [1] [i_1] = (arr_6 [i_2] [i_1] [i_0]);
                            arr_20 [i_0] [i_1] [i_0] = (var_3 ? var_9 : (arr_12 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_3 - 4]));
                            var_16 = (min(var_16, (((~(arr_7 [i_0 - 2] [i_0 + 4] [1] [i_3 + 1]))))));
                        }
                        arr_21 [i_0] [i_1] &= var_11;
                        arr_22 [i_1] [i_3] = (((arr_4 [i_1] [i_0]) + (arr_6 [i_3 - 2] [i_3 - 2] [i_0 + 2])));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_26 [i_6] [i_2] [12] [i_1] [i_0] |= ((~((max((arr_4 [i_0 + 1] [i_2]), -26)))));
                        var_17 = var_6;
                        arr_27 [i_2] &= (arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_30 [i_7] = -1697664793;

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            var_18 = (((~208) + 47224));
                            arr_33 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7] [i_8] = ((var_8 ? ((var_5 ? var_3 : var_11)) : (((5603 ? 110 : 1)))));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] [i_2] [i_7] [i_7] [i_9] [i_9 - 1] = var_9;
                            var_19 = (min(var_19, (((!(arr_36 [i_0] [i_1] [i_1] [i_9]))))));
                            arr_38 [10] [i_7] [i_2] [i_1] [i_0] [i_0] = var_11;
                            arr_39 [i_0] [i_1] [13] [i_1] = ((~var_6) ? 1 : (max(((~(arr_16 [i_0] [i_1] [i_1] [i_2] [i_7] [i_9]))), ((-(arr_15 [i_7] [i_2]))))));
                        }
                        for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_43 [i_0 + 2] [i_1] [i_10] &= (((((max(var_0, var_11)))) ? var_1 : (arr_34 [i_0] [i_1] [i_0])));
                            var_20 = 1;
                            arr_44 [i_0] [i_1] [i_2] [i_7] = (((-(arr_11 [i_10 + 1] [i_7] [i_0 + 4] [i_1] [1] [i_0 + 4] [i_0]))));
                        }
                    }
                    arr_45 [i_2] [i_1] |= (((arr_29 [i_1] [i_0]) ? (((arr_16 [i_0] [i_0] [i_0 - 2] [i_0 + 4] [i_0 - 2] [i_0 - 1]) - (((arr_11 [1] [14] [i_0] [i_1] [i_0] [i_0] [14]) ? -111 : (arr_10 [i_0] [i_1] [i_0]))))) : 2064043571));
                }
            }
        }
    }
    var_21 = (min(-118, ((~(~var_11)))));
    #pragma endscop
}
