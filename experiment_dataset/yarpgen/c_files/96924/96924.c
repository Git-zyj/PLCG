/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 & (~var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 *= (arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_0] [i_1] [i_2] |= (((arr_1 [24]) || ((((arr_7 [i_1 + 1] [i_3 + 4]) ? (arr_7 [i_1 + 1] [i_3 + 2]) : (arr_7 [i_1 + 1] [i_3 + 1]))))));
                            arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] = var_4;
                            var_21 *= ((+((max((arr_4 [i_1 - 1] [i_2 - 2]), (max((arr_10 [i_0] [i_3] [i_2]), var_8)))))));
                            arr_14 [i_1] = ((max((min((arr_11 [i_0] [i_0] [i_0] [i_1]), var_18)), (min((arr_2 [i_0] [i_0]), (arr_8 [i_3] [i_3] [i_3] [i_1]))))));
                            arr_15 [i_1] [i_1] = (~((var_10 & (min(var_11, 19)))));
                        }
                    }
                }
                var_22 -= (max((((arr_11 [i_1 + 1] [i_1] [i_1 + 1] [0]) & 2024699797)), (min((arr_11 [i_1 + 1] [i_1 + 1] [i_0] [6]), 2024699797))));
            }
        }
    }
    var_23 = ((((min(var_4, var_15))) ? (-var_13 / var_3) : var_0));
    #pragma endscop
}
