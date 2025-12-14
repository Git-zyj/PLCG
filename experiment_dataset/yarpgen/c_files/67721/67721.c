/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 += (((arr_3 [i_0]) ? var_5 : (((arr_1 [i_0]) ? var_8 : var_10))));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) ? var_7 : (((var_3 ? (arr_0 [i_0]) : (arr_0 [1]))))));
    }
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_4] [13] [i_2] [i_1] = (arr_10 [i_2] [i_2 - 1] [i_2]);
                                arr_17 [i_5] &= (min(var_6, ((~(~var_3)))));
                                arr_18 [i_5] [i_4 - 3] [i_3] [i_2] [i_1 + 1] = (((((var_2 ? (arr_14 [i_5] [i_4] [20] [i_1]) : ((var_0 ? (arr_11 [i_1] [i_2] [i_3] [i_1]) : (arr_10 [i_3] [20] [i_3])))))) ? (arr_14 [i_1 + 1] [i_1] [i_1] [i_1]) : (((arr_10 [i_2 - 1] [i_1 - 1] [i_1]) ? (arr_10 [i_2 - 1] [i_1 + 1] [i_1]) : (arr_10 [i_2 - 1] [i_1 - 1] [i_1])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_27 [7] [i_2 - 1] [i_6] [i_7] [3] = (min(((min((min(var_9, var_5)), (arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])))), -var_4));
                                arr_28 [i_8] [i_7 + 1] [i_7] [i_6] [i_2] [i_1 - 1] [i_1] = ((var_10 ? (min((max(var_5, var_3)), (~var_8))) : ((((max(var_5, var_7))) ? (((arr_14 [i_1] [i_6] [i_7 - 1] [i_8]) ? (arr_19 [4] [12] [i_8]) : (arr_19 [i_8] [i_7 - 1] [i_2]))) : (min(1, -471124501))))));
                                arr_29 [i_1 + 1] [i_2] [i_6] [i_7] [i_8] = ((-(min(var_7, (min((arr_6 [i_2] [4]), var_4))))));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, ((min(((max(var_0, (arr_11 [i_1] [5] [9] [i_2 + 1])))), ((-(arr_11 [i_1 + 1] [i_2] [i_2 - 1] [i_2 + 1]))))))));
                arr_30 [i_1 - 1] [i_1] = min((((!(arr_26 [i_1 + 1] [i_1 - 1])))), (arr_22 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1]));
            }
        }
    }
    #pragma endscop
}
