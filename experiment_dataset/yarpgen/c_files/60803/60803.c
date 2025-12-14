/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((~46161) ? var_6 : 18446744073709551601)) != var_17))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~101);
        var_21 = (max(var_21, (((101 << (var_4 - 33209))))));
    }
    var_22 = (min(var_22, (((var_16 ? (((154 ? var_9 : var_8))) : 101)))));
    var_23 = var_5;
    #pragma endscop
}
