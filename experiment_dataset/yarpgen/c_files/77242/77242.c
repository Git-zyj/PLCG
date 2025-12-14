/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 ? (((~(max(-1266222821, var_1))))) : (max(var_8, (((var_3 ? var_8 : var_13)))))));
    var_20 -= 1266222810;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_21 = (max(((((var_7 / (arr_2 [i_0]))))), -1266222821));
        var_22 = ((+(min(((((arr_1 [i_0] [12]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 1] [i_0])))), (var_17 * 65535)))));
        var_23 = (((min(97, (max(0, (arr_2 [i_0 + 1]))))) > ((min((max((arr_0 [11]), var_15)), 16905)))));
    }
    var_24 -= var_6;
    var_25 = ((((((((var_0 ? 159 : var_9))) + (var_6 - var_5)))) ? (min(((max(var_18, var_9))), ((-6096566295388812976 ? var_8 : var_5)))) : var_7));
    #pragma endscop
}
