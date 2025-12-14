/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_5);

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_12 *= 33;
        var_13 = (((min(120, -33))) ? (((max(120, 0)))) : (min((((-127 - 1) & (-127 - 1))), 59)));
    }
    var_14 = var_2;
    #pragma endscop
}
