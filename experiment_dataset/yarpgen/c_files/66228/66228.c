/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(6248060194275223299, var_5));
    var_19 = ((var_9 - (var_4 / var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = var_1;
                var_21 ^= (16411826049314557860 + 18446744073709551615);
            }
        }
    }
    #pragma endscop
}
