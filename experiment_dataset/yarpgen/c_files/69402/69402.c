/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((!var_14) ? ((var_2 ? var_10 : var_19)) : var_11)));
    var_21 = ((~(~var_14)));
    var_22 = (max(var_22, (((max(var_15, (~var_16)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max(((-(arr_1 [11] [11]))), 25);
        var_23 = (min(var_23, var_14));
        var_24 = var_11;
        var_25 = (min(var_25, (~var_0)));
    }
    #pragma endscop
}
