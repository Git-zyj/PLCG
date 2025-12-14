/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-var_1 ? var_1 : (((max(16383, var_12))))))) ? (max((-9223372036854775807 - 1), 1099511627775)) : 1));
    var_14 = var_10;
    var_15 = (max((min(0, 1099511627775)), (max(1099511627775, 1099511627775))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 -= (((arr_0 [i_0]) << (1099511627783 - 1099511627778)));
        var_17 = ((1099511627775 ? 0 : -1099511627765));
        arr_2 [1] [i_0] = 16368;
    }
    #pragma endscop
}
