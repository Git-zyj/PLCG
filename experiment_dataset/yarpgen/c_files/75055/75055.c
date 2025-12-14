/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((((((min(-1, 583120401)) < (((-59 + 2147483647) >> (var_14 - 51773)))))) < ((var_9 ? 0 : (103 * 1)))));
    var_20 = var_13;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_21 *= -32640;
        var_22 = min(((var_16 ? var_9 : 255)), var_13);
    }
    #pragma endscop
}
