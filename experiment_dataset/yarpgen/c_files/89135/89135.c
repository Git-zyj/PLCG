/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = var_10;
        var_12 = var_3;
        var_13 = var_8;
        var_14 = var_3;
    }
    var_15 = (min(var_15, var_6));
    var_16 = var_8;
    #pragma endscop
}
