/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 59175;
    var_15 = (min(var_15, (((var_7 ? (min(-4807120389807512580, var_12)) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [5] [i_3] [i_2] [i_3] [i_0 - 2] = ((~(!57166)));
                            arr_13 [i_3] [i_3] = (((min(4807120389807512569, 4807120389807512556)) != (min(4294967287, -4807120389807512580))));
                            arr_14 [i_3] = arr_4 [i_0 + 3] [i_3 - 2] [i_3];
                            arr_15 [i_0 + 1] [i_1] [i_3] [i_3] = -5823640168386924019;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_16 *= 0;
                            var_17 = 24;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
