/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_9 ? -var_3 : ((21 ? -802 : 796)))), var_6));
    var_16 = (((((~((-110 ? var_5 : var_10))))) ? var_14 : ((var_10 ? 815 : ((var_4 ? -785 : var_2))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_17 = ((32 ? 236 : -15237034916841947758));
        var_18 = min(var_8, (((2714351689 ? 9223 : -21491))));
    }
    var_19 = (((((min(1, var_8)))) ? ((((var_2 ? var_1 : var_9)) ^ 31)) : ((max(-28904, (793 != 1))))));
    #pragma endscop
}
