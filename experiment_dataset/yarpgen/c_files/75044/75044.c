/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((((((9223372036854775779 ? -3318511544433707706 : var_2))) ? ((7342755567861269422 ? var_3 : var_17)) : var_8))) ? (min(((var_3 ? 7342755567861269422 : var_7)), ((var_2 ? var_10 : 9223372036854775807)))) : (((var_3 ? (-9223372036854775807 == var_14) : var_3)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = min((max((arr_0 [2]), var_0)), (arr_0 [i_0]));
        arr_2 [i_0] = (max((~-1), (arr_0 [i_0])));
    }
    #pragma endscop
}
