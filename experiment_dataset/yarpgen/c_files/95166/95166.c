/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((~8965412883274161597) == ((((arr_1 [i_0]) ? 250 : (arr_1 [i_0]))))));
        var_11 = (min(var_11, ((min(((var_5 & (arr_1 [10]))), 1175458740)))));
        var_12 += (((((((arr_0 [i_0]) ? var_10 : var_9))) ? ((-(arr_0 [i_0]))) : ((0 * (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((!(((16736 ? (arr_0 [i_0 + 2]) : (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 *= ((-(arr_9 [i_4] [i_4])));
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] [i_2] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (!-var_10);
    var_16 ^= var_0;
    #pragma endscop
}
