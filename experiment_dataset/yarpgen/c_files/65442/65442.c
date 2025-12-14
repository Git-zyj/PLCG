/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 *= var_8;
    var_13 |= ((202192404 ? 4092774892 : 202192408));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = ((arr_1 [i_0]) ? var_7 : (((arr_1 [i_0]) | (arr_1 [i_0]))));
        var_15 = var_5;
    }
    #pragma endscop
}
