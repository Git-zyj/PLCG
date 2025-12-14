/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((2883871475 ? 172 : -18897));
        var_20 = (arr_2 [i_0] [i_0]);
    }
    var_21 = ((!((max(var_0, var_16)))));
    var_22 = ((var_12 ? ((((max(var_17, -65))) ? var_9 : var_4)) : ((1168247142 ? var_15 : var_7))));
    var_23 = max(var_7, var_9);
    #pragma endscop
}
