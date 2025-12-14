/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_14));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (130 ? 19 : -953691056964992073);
        var_17 = ((1023 ? ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 125))))) : var_12));
        var_18 = var_6;
        var_19 = (arr_1 [i_0]);
        arr_2 [i_0] = (max((arr_1 [0]), ((min(1, 1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 -= (((((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))) ? (max(var_4, (max(9223372036854775807, 137438953440)))) : (!var_6)));
        arr_5 [i_1] [i_1] = (max(-4025099504437370887, ((-18574 ? 1 : ((1 ? -18577 : 9223372036854775807))))));
    }
    var_21 = ((min(-18577, 119)));
    #pragma endscop
}
