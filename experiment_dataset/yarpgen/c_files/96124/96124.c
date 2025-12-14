/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(-968025049, (76 + 4974719555340770565)))) ? var_0 : (min(-4200859875784612464, var_3))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (((-((min(var_0, var_13))))));
        arr_3 [i_0] = var_10;
    }
    var_17 = ((((max(-65, (~var_10)))) ? ((((var_5 >> var_15) && (var_7 + var_7)))) : (var_12 / -9)));
    #pragma endscop
}
