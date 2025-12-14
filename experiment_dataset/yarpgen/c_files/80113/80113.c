/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = 248;
        var_16 = 128;
    }
    var_17 *= (max(((min(16878, 4294967295))), (((((min(1953418612, 1))) ? 25821 : 2057922555)))));
    var_18 -= ((max((var_10 & 0), (max(0, 1)))));
    var_19 = (max(var_19, (min(((min((min(4294967278, var_2)), (50 % -57)))), 0))));
    #pragma endscop
}
