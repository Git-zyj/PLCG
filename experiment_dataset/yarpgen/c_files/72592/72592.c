/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_15 > var_7);
    var_21 = ((((((max(65535, var_0))) ? var_6 : var_15)) + (min(0, ((var_10 ? var_0 : var_14))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 = (!((min(((-(arr_3 [i_0] [i_0 + 2]))), (arr_3 [i_0 - 1] [i_0 + 2])))));
        var_23 = (max(var_23, var_13));
        var_24 = (max(var_24, (((-(((((65535 << (((arr_2 [i_0]) - 722283108))))) ? -65535 : (arr_0 [i_0 + 3]))))))));
    }
    var_25 = -var_2;
    #pragma endscop
}
