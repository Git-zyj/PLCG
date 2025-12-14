/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, var_7));
        arr_2 [i_0] [i_0] = max((!var_2), (((!var_5) ? (((arr_0 [i_0]) & (arr_1 [i_0]))) : var_7)));
        var_13 = (min(var_7, (((min((arr_0 [i_0]), var_1))))));
    }
    var_14 = ((((var_6 ? var_1 : (min(var_2, var_3)))) >= (((var_2 < (var_3 ^ var_3))))));
    var_15 = var_2;
    var_16 = (min(var_16, var_7));
    #pragma endscop
}
