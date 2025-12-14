/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] |= (~var_0);
        var_16 = (min(var_16, (((arr_1 [i_0]) ? (max((((1 ? -411883459 : 1856292850))), ((var_1 | (arr_0 [i_0 + 1]))))) : (((arr_0 [i_0]) ^ (arr_0 [i_0 - 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_17 = (!var_2);
                        arr_10 [i_0] [10] [i_2] [i_3] [i_3 + 3] [i_2 - 2] = (-((+(max((arr_1 [i_0 - 1]), 1)))));
                    }
                }
            }
        }
        var_18 = var_10;
    }
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (~((-1 ? 2147483647 : 1)));
        var_19 = (var_0 % (-1764787273 || 26));
        var_20 ^= -22;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 = (max(var_21, (((1 + (arr_15 [i_4 - 2] [7] [i_4 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_22 = (((arr_18 [1] [i_5] [i_8]) / (((((var_11 ? (arr_12 [i_4]) : var_4)) + -var_10)))));
                                var_23 = -var_10;
                            }
                        }
                    }
                    var_24 += ((var_10 != (((((var_3 ? (arr_16 [i_5] [i_4]) : var_14))) ? (var_14 % var_7) : ((((arr_21 [i_4] [6] [i_6] [14] [i_4 - 2] [13]) < -411883459)))))));
                }
            }
        }
        arr_23 [i_4] [i_4] = ((-411883459 ? 2147483647 : -1));
    }
    var_25 = var_4;
    #pragma endscop
}
