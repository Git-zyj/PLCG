/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 3227349068;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = 1;
        var_17 = ((((3227349068 * (arr_3 [i_0 + 4] [i_0 - 2])))) ? (max((var_2 | 805306368), ((min(var_13, var_7))))) : ((((arr_2 [i_0] [i_0 + 3]) ? var_13 : (arr_2 [i_0] [i_0])))));
    }
    var_18 *= var_2;
    #pragma endscop
}
