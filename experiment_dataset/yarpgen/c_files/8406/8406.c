/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_5;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_1 [i_0 - 1] [i_0])));
        var_16 = (max(var_16, (arr_1 [i_0 + 1] [i_0 + 1])));
        var_17 = (min(var_17, (211 - 30)));
    }
    #pragma endscop
}
