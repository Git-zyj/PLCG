/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, 1770670970));
        var_20 = -var_11;
    }
    var_21 = -1067279799;
    var_22 = (min(var_22, var_5));
    var_23 = -1067279799;
    #pragma endscop
}
