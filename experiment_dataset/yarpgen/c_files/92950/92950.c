/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 += (arr_0 [i_0] [i_0 + 2]);
        var_16 = ((var_5 ? (arr_1 [i_0 + 2]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_17 = (min(var_17, ((((var_2 & var_7) ? ((-7778261738626707166 ? -8473303025477568459 : var_2)) : (((var_0 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))))));
        var_18 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}
