/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((var_0 ? (arr_1 [i_0]) : var_14))) ? var_14 : (((((arr_2 [13] [1]) || 3883504487)))));
        var_17 = ((var_12 == (arr_2 [13] [i_0])));
    }
    var_18 = (max(var_18, (((((var_10 ? (var_15 ^ var_1) : (~var_2))) * (var_5 & -11))))));
    var_19 = (max(var_19, var_15));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (min(var_20, ((((arr_5 [1] [i_1]) || (-1273253528 + 411462808))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_2 + 1] [i_3] = (((var_5 == var_6) ? (arr_5 [i_2 + 2] [i_1]) : ((((var_5 == (arr_8 [i_3] [i_2 - 1] [i_1])))))));
                    var_21 = -1273253523;
                    arr_14 [i_1] &= ((~((var_2 >> (((arr_0 [1]) - 10603655537759723653))))));
                }
            }
        }
        var_22 = (((arr_4 [i_1]) * (arr_1 [i_1])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_25 [13] [i_4 - 1] [i_4] [i_5] [i_5] [1] = (arr_10 [i_4 + 1] [10] [i_4 - 1] [i_4 - 1]);
                                var_23 = (max(var_23, ((((var_4 != (arr_3 [i_5] [i_4])))))));
                            }
                        }
                    }
                    arr_26 [i_1] [i_4 - 1] [i_1] [i_4] = (((!8911361087047969640) || (var_3 > 32767)));
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}
