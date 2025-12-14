/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 ^= 1;
        var_20 = ((((var_2 ? (arr_1 [i_0 - 1]) : 1))) * (((arr_1 [i_0 - 1]) ? -1 : 1445746185)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (!2849221101);
        arr_5 [i_1] = (arr_2 [i_1]);
        var_22 = ((-(1 > 4)));
        var_23 = (~1445746185);
        var_24 = (((-7 / 156) || 0));
    }
    var_25 = ((((~((-9795 ? var_15 : -16)))) <= var_18));
    #pragma endscop
}
