/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, (((0 << ((~(arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = var_2;
    }
    var_20 = (min(var_20, (((var_14 ? (80 - -var_12) : ((((-127 - 1) >= (var_2 / var_15)))))))));
    var_21 = (((80 + (-127 - 1))));
    #pragma endscop
}
