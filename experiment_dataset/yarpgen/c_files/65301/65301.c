/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(var_6, (var_7 + 1)));
        arr_3 [i_0] = (((((var_9 ? 1 : var_2) + var_3))));
    }
    var_17 ^= var_14;
    var_18 = var_11;
    #pragma endscop
}
