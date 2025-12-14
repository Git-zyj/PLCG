/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((arr_0 [i_0]) ? var_2 : (arr_2 [i_0] [i_0]))))) ? (arr_2 [i_0] [i_0]) : ((2147483647 ? ((max(-2147483644, (arr_1 [i_0])))) : ((var_17 ? (arr_1 [i_0]) : var_14))))));
        var_21 = (max(var_21, var_4));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_22 = (min(var_11, 1379856214731230761));
        arr_7 [i_1] [i_1] = (arr_5 [i_1]);
        var_23 = (max(var_23, ((min((((1379856214731230761 ? 1357312703 : (-2147483647 - 1)))), (((((var_4 + (arr_6 [i_1] [i_1])))) ? (((arr_2 [i_1] [i_1]) ? var_6 : var_15)) : ((min(var_11, var_12))))))))));
    }
    #pragma endscop
}
