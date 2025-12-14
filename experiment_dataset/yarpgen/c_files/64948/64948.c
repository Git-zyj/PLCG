/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((min(115434632, ((var_1 >> (var_11 + 19030))))), ((((((var_0 ? var_4 : var_4))) ? (!-131072) : (!15360)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 |= var_7;
        var_18 ^= var_2;
        arr_3 [i_0] = var_12;
    }
    #pragma endscop
}
