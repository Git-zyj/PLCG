/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((var_12 ? var_8 : (arr_1 [8]))) <= ((max(var_5, 154)))))))));
        var_16 = (((((149 || (arr_1 [i_0]))) ? var_1 : (((min(var_2, 156)))))));
    }
    var_17 ^= (min(var_3, var_10));
    var_18 = ((((((max(var_13, var_8))) & ((min(18749, var_5))))) | -var_5));
    #pragma endscop
}
