/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_13);
    var_20 = var_9;
    var_21 = (min(var_21, 2097148));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, -5503285145343453773));
                    var_23 = (min(var_23, 31457280));
                }
            }
        }
    }
    #pragma endscop
}
