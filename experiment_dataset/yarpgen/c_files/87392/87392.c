/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = var_3;
                                var_14 |= (max(251, 251));
                            }
                        }
                    }
                }
                var_15 = (((arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_1] [i_1]) ? (((arr_12 [i_1] [i_1] [i_1] [i_0 + 1] [i_1]) ? var_12 : (arr_2 [i_0]))) : (var_10 - 79)));
                var_16 = var_12;
            }
        }
    }
    var_17 = (min(var_17, var_9));
    var_18 = max(((-((var_4 ? var_5 : -866783259)))), (((((var_11 ? var_3 : var_12))) ? var_11 : -var_1)));
    #pragma endscop
}
