/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min((((arr_4 [i_1]) - (arr_0 [i_0 + 2]))), ((((max((arr_5 [17] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_1])))) ? ((max(var_8, (arr_2 [12])))) : (((arr_0 [8]) + var_3)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [19] [i_2] [9] [i_1] [21] = ((~(arr_7 [i_0 + 2] [i_1])));
                            var_14 -= ((arr_2 [i_2]) ? ((max(var_5, (arr_1 [15])))) : ((var_8 ? (arr_1 [i_0 + 1]) : (max((arr_1 [1]), var_0)))));
                        }
                    }
                }
                var_15 += 72;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_16 = (arr_3 [i_4 + 3] [i_4] [i_4 + 4]);
                var_17 |= (((arr_16 [i_4] [4]) ? (((arr_7 [i_4] [2]) ? ((~(arr_9 [i_4] [23] [i_4] [20]))) : ((min((arr_2 [i_4]), (arr_15 [i_5] [14] [4])))))) : 3238377407));
            }
        }
    }
    var_18 -= ((((var_12 ? (max(var_7, var_11)) : var_8)) / (((1449447839 ? (~-77) : 3238377399)))));
    #pragma endscop
}
