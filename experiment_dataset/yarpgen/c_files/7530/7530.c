/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = 808598831;
                var_21 = var_0;
                var_22 = 242;
            }
        }
    }
    var_23 |= ((var_5 <= (max(var_11, 1248984807))));
    #pragma endscop
}
