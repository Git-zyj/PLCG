/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_15 ^= arr_0 [i_1 + 1];
                var_16 = (arr_1 [10] [10]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 += 63;
                            var_18 = (min(var_18, ((max((arr_1 [i_2] [1]), (arr_1 [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
