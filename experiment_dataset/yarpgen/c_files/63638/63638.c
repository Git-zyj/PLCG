/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(-34, ((max(var_14, var_10))))) >> (((max(var_16, var_0)) - 24409))));
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (min(var_21, ((min(var_2, var_9)))));
    }
    var_22 &= var_6;
    #pragma endscop
}
