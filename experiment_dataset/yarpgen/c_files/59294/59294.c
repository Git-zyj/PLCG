/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((1 ? var_15 : (max(-2122758483, 546721943))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = ((var_10 ? (((max(var_4, var_15)))) : var_3));
    }
    var_21 = ((((!(~-16688)))) * var_0);
    #pragma endscop
}
