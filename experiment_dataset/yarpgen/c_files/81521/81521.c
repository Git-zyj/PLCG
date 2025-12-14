/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (!90)));
    var_21 = var_1;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 -= (~90);
        var_23 = (max(54143, (min(32256, 8333819842133704270))));
        var_24 = (((var_5 ? ((min(101, 3066896865))) : var_12)) >> (min((arr_1 [i_0]), var_12)));
    }
    var_25 = 9672;
    #pragma endscop
}
