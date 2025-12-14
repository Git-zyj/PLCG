/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (!1798501553);
        var_19 = 18446744073709551615;
    }
    var_20 = ((var_7 ? (min(var_3, ((-1798501564 ? -1798501521 : 1)))) : var_3));
    #pragma endscop
}
