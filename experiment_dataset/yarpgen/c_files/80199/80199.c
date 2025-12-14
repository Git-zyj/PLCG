/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = -3556;
                    arr_8 [i_2] = -116;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] [1] = (max((arr_1 [i_2]), (28822 && -88)));
                                var_14 = (((((arr_2 [i_0]) & 4090456849351557814))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = (((((max(var_6, var_7))) ? 88 : (var_11 ^ 73))));
    var_17 = (min(56, 77));
    #pragma endscop
}
