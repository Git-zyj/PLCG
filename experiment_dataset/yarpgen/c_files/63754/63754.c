/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-36273552195267584, ((min(235, var_17)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(235, 0));
        var_20 = (max(var_0, var_0));
        var_21 = ((!((min(var_6, var_15)))));
        var_22 = var_8;
    }
    var_23 &= ((max((17514136173693403399 == var_8), var_14)));
    #pragma endscop
}
