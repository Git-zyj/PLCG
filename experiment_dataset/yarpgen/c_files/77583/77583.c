/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (!32757)));
                arr_4 [i_0] [i_0] [i_1] = (min(-32757, (((~var_1) ? 9223372036854775807 : 7893))));
                arr_5 [i_1] [i_1] [i_1] = (((!10331) ? var_6 : (min(((var_2 ? var_5 : 32767)), (!var_9)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (64 ? ((448 ? var_3 : -67108864)) : -3402);
                                arr_13 [6] = ((~((43 ? var_5 : (2712779829925085456 | 3740905025)))));
                                var_16 = (min(var_16, ((min(15, -10343)))));
                                var_17 ^= (max((var_12 || 95), -10311));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
