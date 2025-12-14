/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((var_5 ? 76 : -23141)) ? 592826461 : var_2))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        var_11 = var_6;
        var_12 = (arr_2 [i_0]);
        var_13 = min((((arr_2 [i_0]) ? ((var_4 ? var_9 : var_5)) : (max(592826461, 9223372036854775807)))), ((((min(var_2, 122))) ? -32755 : var_1)));
    }
    var_14 = var_3;
    #pragma endscop
}
