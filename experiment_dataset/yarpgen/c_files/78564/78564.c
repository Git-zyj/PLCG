/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((0 && ((min(-1868724461, (-127 - 1)))))));
    var_20 = -8192;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (31 > -8192);
        var_22 = 0;
    }
    #pragma endscop
}
