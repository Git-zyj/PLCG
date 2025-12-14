/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 ^= ((!(!112)));
                var_15 += 2670170212;
                var_16 *= (+-4209);
                var_17 = (!-1);
            }
        }
    }
    var_18 -= ((!(((~var_1) && var_9))));
    var_19 = ((((19535 > (var_3 / 19524)))));
    var_20 += (((~var_0) != var_5));
    #pragma endscop
}
