/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((((min(var_16, var_0))) ? var_9 : var_11))), ((~(min(var_14, var_11))))));
    var_18 = (max(var_8, var_15));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] = 9356;
        arr_3 [i_0] = (max(524287, (11460515018303515689 & -3594677498144337842)));
    }
    var_19 ^= var_5;
    var_20 = (max((11059147407473318687 - var_11), (min(((var_3 ? var_16 : var_16)), (5405483975809834201 - var_8)))));
    #pragma endscop
}
