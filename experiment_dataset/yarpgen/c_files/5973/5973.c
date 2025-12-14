/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(56, var_4));
    var_11 = 69;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (((min(65514, -78))));
                var_13 = (max(var_13, var_0));
            }
        }
    }
    #pragma endscop
}
