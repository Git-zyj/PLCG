/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_1, -23678));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((min(var_14, 7070))) ? (((min(165, 215)))) : (min(var_0, -33)))) << ((((var_17 ? var_2 : -var_17)) + 3652881794673157250))));
        arr_4 [i_0] &= var_3;
        var_19 = (max(var_19, 14336));
    }
    #pragma endscop
}
