/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -63488;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((arr_1 [i_0 + 1] [i_0]) ? 63 : (arr_1 [i_0 - 2] [i_0]))));
        var_17 = (-(max((max((arr_1 [18] [18]), (arr_2 [i_0]))), -63)));
    }
    #pragma endscop
}
