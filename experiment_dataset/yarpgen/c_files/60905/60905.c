/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 *= ((0 ? -2282461945469927538 : (arr_0 [i_0 - 1])));
        var_18 = (var_3 || var_5);
    }
    var_19 -= ((var_2 ? 71 : ((var_4 ? (0 && -2282461945469927538) : (~23)))));
    #pragma endscop
}
