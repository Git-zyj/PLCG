/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~14);
    var_14 = ((((((((var_5 ? var_8 : 2650))) ? var_8 : ((max(61634, var_8)))))) || (var_1 <= -119)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = var_7;
        var_15 = var_1;
        var_16 = (arr_0 [i_0]);
        var_17 = (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_9));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 = (max(var_18, 536870912));
        var_19 = var_9;
    }
    var_20 = var_4;
    #pragma endscop
}
