/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 549755813887;
    var_14 += (((((0 / (max(12329560306033946528, 23))))) ? 72 : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= var_9;
        var_16 *= -7658325060705747887;
        var_17 *= -19975;
    }
    #pragma endscop
}
