/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? ((var_12 ? ((var_11 ? var_4 : var_1)) : var_9)) : -var_11));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = (!var_5);
        arr_4 [i_0] = 9223372036854775807;
    }
    var_21 = var_16;
    var_22 ^= ((-(~var_9)));
    #pragma endscop
}
