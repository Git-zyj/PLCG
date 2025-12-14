/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (!var_9);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, ((((((arr_1 [i_0]) & (((arr_2 [i_0]) & var_2)))) <= (((((var_0 > (arr_1 [i_0]))) ? (((arr_0 [i_0]) + var_3)) : ((((arr_0 [i_0]) || (arr_0 [i_0]))))))))))));
        var_13 ^= (((((((((arr_0 [i_0]) ? var_9 : (arr_0 [i_0])))) ? var_9 : (((var_0 / (arr_0 [i_0]))))))) ? (((((arr_1 [i_0]) < (arr_1 [i_0]))))) : var_2));
    }
    var_14 = (((var_8 % var_4) ? var_6 : var_3));
    var_15 = (((((var_2 ? (var_8 | var_0) : (~var_2)))) ? (((~((var_1 << (var_2 - 18250412497190951765)))))) : (((var_1 ^ var_1) ? (var_10 | var_9) : ((var_7 ? var_0 : var_2))))));
    #pragma endscop
}
