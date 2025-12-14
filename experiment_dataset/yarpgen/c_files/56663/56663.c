/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = ((44 ? ((((0 + -1731269818) > 2157327936))) : (arr_1 [i_0 - 2] [i_0])));
        var_11 = (max(var_11, (arr_1 [i_0] [i_0])));
    }
    var_12 *= (244 - -4973);
    #pragma endscop
}
