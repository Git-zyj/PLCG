/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max((!var_19), (!var_13)));
        arr_3 [i_0] = (~1430125189);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 ^= ((+((((((arr_5 [i_1]) ? 1165811174 : var_19))) ? (max(1, var_14)) : (arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = var_12;
        var_21 = 1;
        var_22 ^= var_16;
    }
    var_23 = var_3;

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 *= var_11;
        var_25 ^= var_9;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_26 = (((arr_5 [i_3]) ? (arr_5 [i_3]) : (arr_5 [i_3])));
        var_27 = ((8 ? var_17 : var_3));
    }
    #pragma endscop
}
