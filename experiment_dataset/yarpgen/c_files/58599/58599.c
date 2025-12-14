/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((+(max((arr_4 [i_0] [i_1]), (arr_0 [i_0])))));
                var_14 ^= (((max(var_10, (arr_2 [i_1])))) ? (((max((arr_1 [1] [1]), 2700869982)))) : (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))));
                arr_5 [i_1] [i_1] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_3] &= (arr_7 [i_2]);
                var_15 = ((((min((arr_7 [i_3 - 1]), (arr_7 [i_3 - 1])))) ? ((max(var_11, (arr_4 [i_2] [i_2])))) : -var_11));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [8] [i_3 + 1] [i_4] [i_3 + 1] [6] [i_5] = ((1603554453017299451 / (arr_18 [i_3 - 2] [3] [i_3 - 2] [3])));
                                arr_23 [i_2] [i_2] [i_5] [i_5] [i_5] [i_2] = (865722333 | 74);
                            }
                        }
                    }
                    var_16 = ((-(arr_3 [8] [i_2])));
                    arr_24 [i_4 + 1] [i_3] [i_2] [i_2] = ((~(!var_2)));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_17 = (((arr_1 [i_3 - 2] [i_3 - 3]) & (arr_17 [i_7] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 2])));
                    arr_27 [i_7] = (((-(arr_1 [3] [i_3 - 2]))) < (((var_11 > (arr_0 [i_3 - 3])))));
                    var_18 = (((1620351665 ^ (arr_3 [i_2] [i_2]))));
                    var_19 = (arr_8 [4]);
                    var_20 = ((!(!-0)));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_30 [i_2] [i_3] [i_3] [i_8] = (arr_0 [i_3 - 3]);

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_21 = -var_8;
                        var_22 = (max((arr_29 [i_3] [0] [i_9]), (arr_4 [i_2] [i_8])));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_36 [i_2] [i_3] [i_8] [i_8] [i_8] [i_10] = var_0;
                        var_23 = 0;
                        arr_37 [i_8] [i_8] [i_10] = (max(-50, var_6));
                        var_24 = var_10;
                    }
                }
                arr_38 [i_2] = (max((((arr_9 [i_3 - 1]) ? (arr_9 [i_3 - 1]) : (arr_9 [i_3 - 2]))), (((arr_9 [i_3 - 2]) ? (arr_9 [i_3 - 3]) : var_0))));
            }
        }
    }
    #pragma endscop
}
