/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 -= (max(var_7, (max(var_9, 24))));
                arr_7 [i_0] [i_0] [i_1] = (((4236124788 ^ 109) | (var_3 + 965588710970012085)));
                var_13 |= (min((var_1 % 4294967288), (((var_10 + (min(var_8, 1139056380)))))));
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
