/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (arr_3 [i_0] [i_0]);
        var_13 = ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (((arr_2 [i_0] [i_0]) ? var_10 : (arr_2 [i_0] [i_0]))))));
        var_14 = ((-6346664513598973734 ? -6 : ((((-6346664513598973726 ? -2273155241563899604 : var_0))))));
    }
    var_15 -= (((((((max(var_5, var_3))) ? (min(-7427887214996346898, var_2)) : var_7))) ? var_11 : (min(var_7, (((var_5 + 2147483647) << (((var_5 + 52) - 7))))))));
    #pragma endscop
}
