/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (((((var_13 ? 6313590409291004364 : (arr_1 [i_0])))) ? ((((arr_0 [i_0] [i_0]) - -21))) : ((-(min(var_10, 63))))));
        var_22 = (max(((0 ? -64 : -71)), (((!(arr_0 [i_0] [i_0]))))));
    }
    var_23 ^= (((var_17 < var_12) ? (min((~-71), var_19)) : -64));

    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_24 = (!var_16);
        var_25 = ((17206467540143951614 || ((1 && (arr_3 [i_1])))));
    }
    #pragma endscop
}
