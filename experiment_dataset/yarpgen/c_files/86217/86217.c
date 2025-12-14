/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-45 ? 8 : (61 ^ -1))) | var_5);
    var_20 = (max(((((1440179856919200297 ? 1 : 76)))), 4816357034909077110));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = ((((var_7 ? (arr_2 [i_0]) : var_15)) < 166));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = ((-(arr_5 [i_1])));
        var_23 = (((((~(arr_5 [i_1])))) ? 18300 : (arr_4 [i_1])));
    }
    #pragma endscop
}
