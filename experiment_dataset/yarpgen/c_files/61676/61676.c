/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, var_16));
    var_21 = (var_1 <= var_7);
    var_22 = var_7;
    var_23 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_24 = (arr_0 [i_0]);
        var_25 = ((((((arr_0 [i_0]) & 11038))) ? var_1 : ((~((1073740800 ? 10528 : (arr_1 [i_0])))))));
        var_26 += (-104 / 116);
    }
    #pragma endscop
}
