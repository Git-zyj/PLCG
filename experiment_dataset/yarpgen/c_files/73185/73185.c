/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (var_15 ? (((((max(-370283085, var_15))) ? ((var_14 ? 65408 : 370283084)) : 0))) : var_2);
                var_18 = 1917256174;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] = (max(((max((arr_9 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]), ((75 ? 0 : 21151))))), (((((-370283085 ? (arr_7 [i_0] [1] [i_0]) : (arr_0 [i_4])))) ? (((-370283085 ? var_16 : 32256))) : var_12))));
                                arr_12 [i_3] [i_1] = min(58, ((-((var_11 ? 120 : 98)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 197;
    var_20 = var_11;
    #pragma endscop
}
