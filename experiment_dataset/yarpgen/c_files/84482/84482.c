/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 119;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, (((((((arr_2 [i_0] [i_0]) ? (arr_1 [10]) : var_1))) < ((var_9 ? (arr_0 [i_0]) : var_15)))))));
        var_19 ^= -32766;
    }
    var_20 = ((((((-85 ? var_12 : var_11))) ? var_3 : var_12)) == var_11);
    #pragma endscop
}
