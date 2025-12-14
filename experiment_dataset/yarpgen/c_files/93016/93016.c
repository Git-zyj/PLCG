/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min(83, -9223372036854775786));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max((((arr_1 [i_0]) ? 83 : (arr_0 [i_0]))), ((max((arr_0 [i_0]), -32118)))));
        var_17 = ((~(((((2613476053049515767 ? (arr_0 [i_0]) : (arr_1 [i_0])))) ^ 2047))));
        var_18 += (~-9223372036854775805);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
