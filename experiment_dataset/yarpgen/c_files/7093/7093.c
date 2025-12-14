/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 65535;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [1] [i_0]) >= (~14)));
        var_18 = (max(var_18, (((var_12 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 ^= ((8 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])));
        var_20 = (max(var_20, (arr_0 [i_1])));
        var_21 = (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
        arr_4 [i_1] [i_1] = ((96 ? (arr_2 [i_1] [i_1]) : ((1 % (arr_2 [13] [13])))));
    }
    #pragma endscop
}
