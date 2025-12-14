/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 + (var_4 - var_3)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 *= (arr_0 [7]);
        var_18 = (max(var_18, -2819406852997456883));
    }
    #pragma endscop
}
