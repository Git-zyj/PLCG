/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((!1), var_11))) || (var_3 / var_3)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = ((((1 & 1784026151) ? ((var_5 ? var_12 : var_1)) : ((min((arr_1 [i_0]), 2510941145))))));
        var_17 = (min(var_17, ((((min(4903367331770704332, (arr_1 [i_0 + 3]))) ^ ((((arr_0 [i_0] [16]) ? (min(1784026151, 188)) : 2229508327))))))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((((109 && (arr_6 [1] [1]))) ? (arr_3 [i_1 + 1]) : (var_7 | var_3)));
        arr_8 [i_1 + 1] = (arr_4 [i_1] [i_1]);
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_18 = var_8;
        var_19 *= ((-11 ? (arr_10 [i_2]) : (((arr_10 [i_2]) / -26))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_20 = 24726;
        var_21 = (min(var_21, ((((4903367331770704324 ? 4903367331770704334 : (~1)))))));
        arr_14 [i_3] |= ((!(arr_1 [i_3])));
        var_22 &= (arr_0 [i_3] [i_3]);
    }
    #pragma endscop
}
