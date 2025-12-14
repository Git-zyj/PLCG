/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(18446744073709551614, var_10);
    var_19 = (min(var_9, ((~(var_12 != var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((var_12 ? 18446744073709551603 : (arr_2 [i_0] [i_0])));
        var_20 = var_0;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_21 = (((~18446744073709551614) | ((((max(var_1, 2))) ? 18446744073709551613 : ((5971613685471101644 ? (arr_7 [i_1]) : var_4))))));
        var_22 -= ((((min(var_11, (max(4960835869982317769, var_15))))) & (arr_7 [i_1])));
        var_23 = (arr_4 [i_1 + 1]);
        var_24 = (-(max((min(var_16, var_13)), var_10)));
    }
    #pragma endscop
}
