/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (min(var_13, var_0));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((-((max(var_9, (max(45, (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = (((((arr_1 [i_0]) != -7279851830498158081)) ? (((((arr_1 [i_0]) >= var_0)))) : ((((((arr_1 [i_0]) + (arr_1 [i_0])))) - (min((arr_1 [i_0]), var_10))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_15 = (min(((var_5 ? (arr_4 [i_1 - 2]) : var_2)), (((+((var_4 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1 - 4] [i_1 - 4]))))))));
        arr_6 [i_1] = 9513921004537845752;
        arr_7 [6] |= ((((((min((arr_3 [4] [i_1]), var_0))) ? (max(7279851830498158081, var_3)) : (arr_5 [i_1 - 4] [i_1 - 1]))) & (arr_3 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (((((var_5 || -7279851830498158088) ? ((((arr_8 [i_2] [i_2]) & var_7))) : (max(var_11, (arr_8 [11] [11])))))) ? (arr_3 [i_2] [i_2]) : ((var_5 ? (7279851830498158087 * var_1) : ((((!(arr_9 [i_2]))))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_2] [6] [i_2] [i_2] = (((arr_5 [i_4] [i_2]) ^ (!var_4)));
                    var_17 = (((arr_10 [i_3 + 3] [i_3] [i_3]) ? var_7 : (((~(arr_12 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_2] [i_6] = ((!(((-(((arr_19 [i_2] [i_3 + 1] [i_4] [i_5] [i_6]) | 0)))))));
                                var_18 = (((arr_3 [i_2] [i_2]) - (arr_11 [i_2] [i_3 - 1] [i_2])));
                            }
                        }
                    }
                    arr_23 [i_2] [i_3] [8] = (arr_17 [i_3] [i_3 - 3] [i_3 + 3] [i_3 - 2] [i_3 + 1]);
                }
            }
        }
        var_19 = ((((min(0, (arr_14 [i_2])))) || (!var_3)));
        arr_24 [i_2] = -7279851830498158082;
    }
    #pragma endscop
}
