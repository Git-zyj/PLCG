/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [i_0] = (var_4 ? 730782854177496566 : -255);
                arr_6 [i_0] [i_1] = (min((max(248, 10155)), (var_5 && var_3)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                var_14 ^= ((min((var_1 || var_9), var_7)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_4] [2] [i_2] = 0;
                            arr_19 [i_2] [12] [12] [i_5] [i_4 + 2] &= ((var_13 ? -3819888269 : var_4));
                            var_15 = var_2;
                            var_16 ^= var_9;
                        }
                    }
                }
            }
        }
    }
    var_17 *= (!((min(-19662, 117440512))));
    #pragma endscop
}
