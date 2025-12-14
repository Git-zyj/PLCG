/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (max((((var_3 & (max(var_0, (arr_0 [i_0] [i_0])))))), ((~(max((arr_1 [i_0]), var_2))))));
        arr_4 [20] [i_0] = (max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = (0 % 70368744169472);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (max(var_14, (((!((((((arr_2 [i_1]) ? var_4 : (arr_1 [i_1]))) | (arr_1 [i_1])))))))));
        var_15 -= ((-(arr_1 [i_1])));
        var_16 = (((max((arr_7 [i_1]), (((arr_1 [i_1]) ? (arr_0 [i_1] [i_1]) : var_12))))) + (((((var_12 | (arr_1 [i_1])))) ? var_11 : (max(-15847, var_4)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = (arr_9 [i_2]);
        var_17 *= (min((arr_9 [i_2]), ((((arr_8 [i_2] [i_2]) / (arr_8 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 -= (((var_11 + 24074) ? (((((arr_0 [i_3] [i_2]) > (arr_10 [i_3]))))) : (((((41461 ? 41457 : (arr_1 [i_2])))) ? ((648983518 ? -1103273471 : (arr_10 [i_4]))) : (((-(arr_8 [i_4] [20]))))))));
                    var_19 = (arr_10 [i_4]);
                    var_20 -= (((((arr_0 [i_2] [i_3]) ^ 1169914364667048674)) < ((((!((((arr_8 [i_2] [i_2]) ? var_0 : -2210415551703069995)))))))));
                }
            }
        }
    }
    var_21 = var_9;
    var_22 -= var_13;
    var_23 *= var_4;
    #pragma endscop
}
