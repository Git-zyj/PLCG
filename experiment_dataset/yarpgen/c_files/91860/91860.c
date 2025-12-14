/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, ((-94 ? -94 : 93))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = var_1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((-(min((~-94), 136))));
        var_16 = ((3435 ? (((-94 ? var_2 : 94))) : 11147961121692164644));
        var_17 -= (max((+-15), (min(var_6, var_4))));
    }
    var_18 = var_7;
    #pragma endscop
}
