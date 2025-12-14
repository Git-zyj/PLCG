/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(max(1, var_10)));
    var_13 = (max(var_13, (((((((((7209 ? var_11 : var_2))) ? (min(1, var_2)) : var_9))) ? (--1) : 8226799457709161675)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 1;
        var_14 *= (((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 3])));
        arr_3 [i_0 + 3] [1] = var_5;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_11;
        var_15 = (arr_5 [i_1]);
        arr_7 [i_1] &= (arr_0 [i_1]);
        var_16 = arr_0 [i_1 - 1];
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 += ((max((arr_10 [i_2]), (max(var_6, var_3)))) / ((min((arr_8 [i_2] [i_2]), (arr_9 [8])))));
        arr_11 [i_2] = var_6;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_18 = (((((min((arr_0 [7]), var_3))) ? (min(var_4, var_7)) : 1)) / var_3);
                    arr_18 [i_4] [i_4] [i_4] &= arr_15 [i_3] [i_4] [i_4];
                    arr_19 [i_3] [i_3] [i_4] [11] |= ((((max(var_0, var_6)) | ((((arr_12 [i_3]) ? (arr_16 [5] [5] [i_4] [13]) : (arr_4 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_19 |= (min(var_6, var_4));
                                var_20 -= (arr_8 [i_3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
