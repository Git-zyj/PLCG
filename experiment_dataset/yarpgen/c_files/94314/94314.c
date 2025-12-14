/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_0 != 4294967289) && 4421)));
        var_15 = var_0;
        var_16 = 4421;
        var_17 = (max(var_17, ((((((((4439 ? var_5 : -4425)) / 4401))) ? (((-4417 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))) : -6491889545907563352)))));
    }
    var_18 = 4294967295;
    var_19 = (((((((min(4396, var_2))) ? var_2 : -549755813880))) && (var_5 + 1)));
    #pragma endscop
}
