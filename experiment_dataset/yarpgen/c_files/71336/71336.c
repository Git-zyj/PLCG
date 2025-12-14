/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 126;
        var_16 &= 13907452321537694330;
        var_17 |= (((!18621) || (((8568443994850349528 ? (((((arr_1 [i_0]) && var_9)))) : var_9)))));
    }
    var_18 = var_1;
    var_19 = 18446744073709551615;
    #pragma endscop
}
