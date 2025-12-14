/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((min(var_8, var_14)))), (((var_3 * var_10) ? var_4 : 18))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = var_3;
        var_18 ^= (min(((var_1 ? var_11 : var_9)), (arr_1 [i_0])));
    }
    var_19 = ((1031933015 >> (var_13 + 1867569965)));
    #pragma endscop
}
