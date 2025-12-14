/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((min((arr_0 [18]), var_5)))));
                var_11 = (min(((1 / (arr_0 [i_0]))), var_4));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [20] &= (min(((~((1846815471 ? var_1 : 1575897970176921550)))), ((min(1, var_6)))));
                            var_12 = ((((11421 ? (arr_9 [i_1] [i_2 - 4] [i_2] [i_2] [i_2 - 4] [i_2]) : (arr_9 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2] [i_2]))) / (arr_9 [i_2] [i_2 + 1] [i_2] [i_2 + 4] [i_2 + 2] [i_2])));
                            var_13 = ((var_7 ? 597080048 : (arr_4 [i_0])));
                            var_14 = (arr_7 [i_0] [i_2]);
                            var_15 = 26726;
                        }
                    }
                }
            }
        }
    }
    var_16 = (var_0 != var_7);
    var_17 = ((-28499 ? var_1 : 11603579311394242659));
    #pragma endscop
}
