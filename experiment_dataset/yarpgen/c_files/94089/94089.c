/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= ((-301468001 ? var_2 : (-14334 + var_10)));
                var_15 = 0;
            }
        }
    }
    var_16 *= -301467982;
    var_17 = var_12;
    var_18 = (32767 ^ var_2);
    #pragma endscop
}
