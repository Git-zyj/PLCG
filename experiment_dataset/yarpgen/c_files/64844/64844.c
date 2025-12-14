/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((var_10 <= (min(-15675, (min(var_9, var_11))))));
                var_15 -= (!110);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] [1] = (min((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]), (max(34241, 1525550649))));
                            var_16 = (max(var_13, (arr_10 [i_1] [6] [i_1] [i_1])));
                            var_17 -= (var_2 | -var_4);
                        }
                    }
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
