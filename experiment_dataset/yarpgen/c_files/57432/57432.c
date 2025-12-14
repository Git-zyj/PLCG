/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_19 -= 128;
        var_20 += var_3;
        var_21 = 32256;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (max(var_22, (~-2114471103)));
        arr_7 [11] = (max((max(var_15, ((1775916494 ? var_2 : -45)))), -2114471119));
        var_23 = (((((var_15 & ((var_10 ? var_8 : 1))))) ? ((min((!1), (min(240, var_1))))) : ((~((max(-32267, var_12)))))));
    }
    var_24 = (min(var_24, (((~(!var_15))))));
    var_25 = (min(var_25, (((!(!2114471097))))));
    #pragma endscop
}
