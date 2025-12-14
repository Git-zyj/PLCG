/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((3413441790 == (((((min(0, -12))) ? ((10871359298609439468 ? 1 : -72)) : 1)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (arr_2 [1] [i_0]);
        var_18 = (arr_1 [i_0] [i_0]);
    }
    var_19 = 1;
    var_20 = (min(var_20, (((var_15 ? var_13 : var_4)))));
    #pragma endscop
}
