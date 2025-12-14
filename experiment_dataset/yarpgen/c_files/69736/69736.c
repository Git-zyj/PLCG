/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 67));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = var_2;
                var_20 = var_17;
            }
        }
    }
    var_21 = ((~(((!((min(12800, 67))))))));
    #pragma endscop
}
