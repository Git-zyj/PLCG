/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min((((var_13 ? var_8 : 66))), ((-66 ? var_9 : 38))))));
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_13 << (var_5 + 2147313978)));
        var_21 = (min(var_21, 66));
    }
    #pragma endscop
}
