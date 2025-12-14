/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 + ((-(!476222901144376456)))));
    var_20 = ((!((((!var_4) ? (!var_3) : -var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = ((var_5 >> (var_15 + 61)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (max((max((arr_5 [i_1] [i_1]), var_12)), ((((((var_14 ? -3530724551359344330 : (arr_0 [i_1] [i_1])))) ? (((arr_6 [i_1] [i_1]) << var_10)) : (arr_6 [i_1] [i_1]))))));
        arr_8 [i_1] = ((-1627362224731165615 ? (-9223372036854775807 - 1) : (((((0 ? var_2 : var_18))) ? (((var_4 | (arr_5 [i_1] [i_1])))) : (var_14 & var_12)))));
    }
    #pragma endscop
}
