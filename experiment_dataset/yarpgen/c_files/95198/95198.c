/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = var_8;
        var_16 |= (min(13771949122847427442, 18446744073709551593));
    }
    var_17 = ((~(min(var_6, var_13))));
    #pragma endscop
}
