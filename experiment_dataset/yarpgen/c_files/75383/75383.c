/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 -= var_2;
        arr_4 [i_0] = (((arr_0 [i_0]) ? (((arr_3 [i_0] [i_0]) + var_3)) : ((((((min((arr_1 [i_0] [i_0]), var_1))) && var_7))))));
        arr_5 [i_0] = ((var_3 / (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_14 = (max(((((arr_0 [i_1 - 2]) < (arr_0 [i_1 + 1])))), ((0 ? ((((arr_3 [i_1 - 3] [i_1]) + var_10))) : 18446744073709551615))));
        var_15 *= ((!(((~((min((arr_3 [i_1] [i_1]), 0))))))));
    }
    var_16 &= var_9;
    var_17 = ((((((var_8 / var_7) ? var_11 : ((var_6 ? var_0 : var_5))))) * 1051815862689071160));
    var_18 = ((var_10 ? (max((var_3 < 0), (max(-2201756843723781372, 1)))) : (((((~0) && (~var_1)))))));
    #pragma endscop
}
