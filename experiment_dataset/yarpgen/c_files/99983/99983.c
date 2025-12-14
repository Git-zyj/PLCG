/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 += (((arr_2 [i_0]) ? (arr_0 [i_0] [14]) : var_14));
        arr_4 [i_0] = (192 ? (!192) : -20856);
        var_17 |= (((arr_2 [i_0]) * (!-6626)));
    }
    var_18 = var_12;
    #pragma endscop
}
