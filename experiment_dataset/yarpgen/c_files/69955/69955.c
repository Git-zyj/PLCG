/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 ^ var_11);
    var_17 = var_13;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(10336031143117238743, 10336031143117238741)))));
        var_19 = (min(var_19, ((((arr_1 [4]) & ((1 | (max(10336031143117238744, 0)))))))));
    }
    var_20 = ((~(min((max(var_2, var_2)), var_4))));
    #pragma endscop
}
