/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (-2 % 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, 1));
                            var_19 = (arr_5 [i_0 + 2] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
