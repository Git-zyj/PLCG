/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = var_2;
        var_17 = (var_14 << (((((max(var_0, 92)))) - 233)));
    }
    var_18 = var_7;
    #pragma endscop
}
