/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_12 ? -3 : var_14)) >= var_0));
    var_19 = var_9;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 -= ((((var_5 ? (arr_0 [6]) : 55059))));
        var_21 = (((((arr_1 [i_0] [i_0]) ^ 55059))) ? ((min((arr_0 [i_0]), var_3))) : ((var_15 - (arr_0 [i_0]))));
        var_22 |= (min(((((arr_0 [2]) < (((arr_0 [10]) ? (arr_0 [4]) : var_0))))), ((~(-32767 - 1)))));
        var_23 += (55059 || (arr_1 [10] [10]));
    }
    #pragma endscop
}
