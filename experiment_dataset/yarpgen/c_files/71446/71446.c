/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -77;
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, 7));
        arr_4 [i_0] [i_0] = -77;
    }
    var_20 = (((((var_5 ? var_13 : var_7))) ? ((~((var_8 ? 224 : 107)))) : var_8));
    #pragma endscop
}
