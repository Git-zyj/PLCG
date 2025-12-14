/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0]) + (((arr_1 [i_0]) - (arr_1 [i_0])))))) ? ((((arr_1 [i_0]) ? var_5 : 5210))) : (((arr_1 [i_0]) + (arr_0 [i_0])))));
        var_18 = (arr_1 [i_0]);
        var_19 = (((-7985786936372453054 <= var_1) < 6815049827477561120));
    }
    var_20 = (var_10 == var_1);
    var_21 = ((((((var_1 ? 74 : -7985786936372453043)))) == (var_2 - var_9)));
    #pragma endscop
}
