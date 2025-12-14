/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((-1 ? ((((min(var_4, var_0)) & 67))) : var_3));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = var_5;
        arr_2 [i_0] |= var_11;
        arr_3 [0] = var_7;
    }
    #pragma endscop
}
