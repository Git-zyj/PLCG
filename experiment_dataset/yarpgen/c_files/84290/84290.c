/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 2011797710));
                var_20 = (arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 21487));
                                var_22 = (min(var_22, ((min((((((var_4 ? var_8 : (arr_14 [12])))) ? var_18 : (arr_6 [i_3] [2] [0] [i_3 + 2]))), 21487)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_15 ? ((((var_17 ? var_2 : -21487)) + (!var_10))) : ((~((1 ? 31318 : 0))))));
    #pragma endscop
}
