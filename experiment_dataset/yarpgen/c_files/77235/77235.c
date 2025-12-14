/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((var_4 || var_8) ? var_9 : (var_17 % var_12)))), ((var_0 ? (var_6 | var_4) : (var_3 | var_7)))));
    var_19 = var_11;
    var_20 = ((-(((4294967295 & 4294967295) ? 115 : -64))));
    var_21 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = (((arr_0 [i_0] [i_0]) * 4294967271));
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
