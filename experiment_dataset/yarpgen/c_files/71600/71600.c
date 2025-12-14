/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = ((max(var_2, (-127 - 1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (~-1);
        arr_4 [i_0] [i_0] = var_12;
    }
    var_18 = (1 | 21594);
    var_19 &= ((((~(18 | 1))) >= 246));
    #pragma endscop
}
