/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (min(var_18, (-10641 + -1156801772)));
        var_19 = -251;
    }
    var_20 = (((((((min(5, 234))) ? ((max(89, -16244))) : var_4))) ^ (min((63 & 251), var_7))));
    #pragma endscop
}
