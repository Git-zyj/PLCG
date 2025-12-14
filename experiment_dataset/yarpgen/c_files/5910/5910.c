/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(var_14, var_11));
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = ((93689579 ? 1566671711158945547 : -7790770566138156552));
        var_22 -= var_4;
        var_23 = (max(var_23, ((((!46) > (min(46, 292523915)))))));
    }
    #pragma endscop
}
