/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 ^= ((!((!(-9463 || 473066625)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = var_10;
                                var_16 = ((((arr_5 [i_2 - 2] [i_2 - 2] [0]) | (arr_5 [i_2 + 1] [i_3] [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((((var_7 ? var_4 : var_8))) ? ((var_1 ? var_10 : var_4)) : 8127792778464442263))) ? (var_4 > 116) : var_11))));
    var_18 = (min(var_18, ((max(var_6, (min(var_12, (((var_7 ? var_8 : var_0))))))))));
    #pragma endscop
}
