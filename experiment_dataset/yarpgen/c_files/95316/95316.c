/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (arr_3 [i_0]);
        var_13 = (min(var_13, (((~((max(71, var_3))))))));
    }
    var_14 ^= var_9;
    var_15 = var_7;
    #pragma endscop
}
