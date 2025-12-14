/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 *= ((!(arr_5 [i_0] [i_1 + 2] [i_2])));
                    var_12 = (arr_2 [i_0]);
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
