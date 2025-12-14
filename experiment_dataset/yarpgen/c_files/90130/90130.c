/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 -= ((min(var_12, var_5)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (!-var_2);
        var_22 = max((-2147483647 - 1), 25);
    }
    var_23 = var_3;
    #pragma endscop
}
