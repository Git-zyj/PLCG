/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((((((18 ? var_5 : var_3))) ? var_0 : (((var_17 ? var_18 : var_6)))))) ? var_2 : ((var_6 ? ((26283 ? 0 : -22)) : ((var_2 ? -93 : var_18))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] &= (((((16 ? -2413 : 55))) ? 114 : ((80 ? (((1 ? 13541 : 27093))) : 4272886510698527503))));
        arr_4 [i_0] [i_0] = (((((var_17 ? 13517 : var_18))) ? ((((((arr_1 [i_0]) ? 9007199254740991 : 9351336274887266466))) ? (((-79 ? 1 : -7))) : (((arr_0 [1] [i_0]) ? (arr_2 [i_0]) : 1)))) : ((((arr_2 [i_0 + 3]) ? 10703 : var_16)))));
        var_21 += ((((((arr_2 [i_0 - 3]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 4])))) ? ((var_18 ? var_12 : 8854)) : ((1 ? var_15 : var_15))));
        var_22 ^= (((((14173857563011024132 ? var_7 : -119))) ? ((var_6 ? (arr_1 [0]) : var_16)) : ((1 ? var_16 : 106))));
    }
    var_23 ^= ((var_14 ? (((var_6 ? var_11 : ((3305375355 ? 5 : 3305375344))))) : var_1));
    var_24 = (max(var_24, var_1));
    #pragma endscop
}
