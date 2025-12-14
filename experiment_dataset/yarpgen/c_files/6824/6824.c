/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 ^= var_2;
    var_21 = (((max(var_14, var_11)) ^ (((var_4 ? var_8 : var_4)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = ((-((var_11 ? (max(var_8, var_11)) : var_8))));
        var_23 *= var_3;
    }
    var_24 = ((((85778872 ? 511 : 1190793281))));
    #pragma endscop
}
