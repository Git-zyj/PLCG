/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_5 ? (var_10 - var_0) : -var_1);
    var_17 ^= 12477900675692981;
    var_18 = max((((-7961081496562881303 == (max(var_4, -1901608435709065404))))), var_13);
    var_19 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 |= -1;
                    var_21 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
