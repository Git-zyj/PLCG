/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~((~((1 ? 1 : 1)))));
    var_14 *= var_8;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        var_16 |= ((((min((arr_2 [1]), (arr_1 [i_0 - 2])))) ? ((var_4 ? var_12 : (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0 + 2] [i_0]) ? (arr_1 [i_0 + 2]) : (arr_2 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = var_6;
        var_18 = var_12;
    }
    var_19 = ((-var_9 ? -var_9 : var_10));
    #pragma endscop
}
