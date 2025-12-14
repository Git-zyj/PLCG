/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, var_10));
        var_17 &= (((~var_13) && var_6));
        var_18 = (min(var_18, ((max(((((!(arr_1 [i_0]))))), ((16238612721918861560 / (arr_1 [i_0]))))))));
    }
    var_19 = var_12;
    var_20 = (((!(2130706432 % var_11))));
    #pragma endscop
}
