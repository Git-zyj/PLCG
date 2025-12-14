/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (min((arr_4 [i_0] [i_1] [i_0]), (min((arr_4 [i_0 + 1] [i_0 + 1] [i_0]), (arr_4 [i_0] [i_0 + 2] [i_0])))));
                arr_7 [i_0] [i_0] = (((~var_2) ? ((((((arr_2 [i_0]) ? var_9 : var_5))))) : var_0));

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] = var_11;

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_16 = ((+(((arr_13 [i_3] [i_0] [i_0] [i_3 + 1]) ? var_13 : (arr_12 [i_0] [i_3] [i_3] [11] [i_0])))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [0] [i_2] = (arr_8 [i_0] [i_3 + 1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_17 = (arr_0 [i_0] [i_4]);
                        var_18 = (arr_15 [i_4 + 2] [i_1] [i_0 + 1]);
                        var_19 += (arr_0 [12] [2]);
                        var_20 = (min(var_20, (arr_4 [i_0 + 1] [i_4] [4])));
                        var_21 = (max(var_21, var_9));
                    }
                    arr_17 [i_0] [i_1] [i_2] [i_2] = (arr_16 [i_0] [i_1] [i_2] [i_2] [i_0 - 1]);
                    var_22 = ((arr_3 [i_0]) ? (((arr_9 [i_0]) ? (arr_3 [i_2]) : var_14)) : ((((!(arr_3 [i_0 - 1]))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] = (((arr_12 [i_0] [i_0] [i_0] [i_5] [i_0]) ? (((-(max(var_7, (arr_10 [i_0] [14])))))) : (arr_5 [i_0] [1])));
                    arr_21 [i_0] [i_0] = (min((arr_5 [i_0 - 1] [i_0 - 1]), (arr_10 [i_0] [3])));
                    var_23 = (max(var_23, 0));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_24 += (arr_8 [i_6] [i_1]);
                    arr_24 [i_0] [i_6] [11] [6] = 130;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_25 = ((((((arr_0 [i_0] [i_1]) ? (arr_29 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [12] [3] [5]) : (arr_15 [i_0] [1] [8])))) ? (((min((arr_16 [i_6] [i_7] [i_6] [i_1] [i_0 + 1]), (arr_19 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2]))))) : (arr_8 [i_0] [i_1])));
                                arr_30 [i_0] [i_0] [14] [i_7] [4] [i_1] = (arr_10 [i_0] [i_8]);
                            }
                        }
                    }
                    var_26 -= ((-(arr_13 [i_0] [i_0] [i_6] [i_1])));
                    var_27 = (max(var_13, (arr_27 [i_0] [0] [i_0 - 1] [i_0 + 1] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            {
                arr_38 [5] [i_9] [i_9] = (min((arr_0 [i_9] [i_10 - 1]), var_6));
                var_28 -= ((max(var_1, (arr_22 [i_10 - 1] [9]))));
            }
        }
    }
    #pragma endscop
}
