/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(43, 189));
    var_14 = var_11;
    var_15 = (!154);
    var_16 = (((((min(var_5, var_2)))) ? (-var_0 <= var_9) : var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((((121 & var_12) & ((var_2 ? 134 : (arr_1 [23])))))) ? ((2249600790429696 ? var_6 : 7)) : 217));
        arr_2 [i_0] = max((arr_1 [22]), var_9);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_18 = (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1])));
        var_19 = (((arr_3 [i_1 - 3]) ? (arr_1 [i_1 - 2]) : (~var_7)));
    }
    #pragma endscop
}
