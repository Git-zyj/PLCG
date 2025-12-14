/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((203 ? 2158920321 : 2136046975));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 = (arr_1 [i_0 - 2]);
        var_21 = ((((((2136046992 != var_17) / ((var_16 ? (arr_0 [i_0] [i_0 - 1]) : var_14))))) | (((arr_1 [i_0 - 2]) ^ 71))));
        var_22 = 0;
    }
    var_23 = (~((var_5 ^ ((-24793 ? -780858873 : -2123375425)))));
    #pragma endscop
}
