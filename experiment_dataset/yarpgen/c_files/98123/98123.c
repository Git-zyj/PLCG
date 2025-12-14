/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_15, var_2));
    var_18 = -var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : ((1864395414 ? var_7 : (arr_0 [i_0])))));
        var_20 = (-var_6 ? (((!(((~(arr_0 [i_0]))))))) : -12415);
    }
    #pragma endscop
}
