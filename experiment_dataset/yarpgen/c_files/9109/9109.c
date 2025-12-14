/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [12] [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
        var_19 = (max(((~(((arr_2 [i_0 - 1] [i_0]) ? -4812 : 4797)))), (((((1 ? 4812 : 8713171397900957127))) ? ((109 ? 47 : 32766)) : -4813))));
        var_20 ^= ((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] [i_0 - 1] = (max(1101, (min(((var_14 ? -1130 : var_1)), ((((arr_0 [i_0]) && 4813)))))));
    }
    var_21 = (max((max(((max(var_5, var_0))), ((var_6 ? var_12 : -8713171397900957134)))), -2147483634));
    var_22 = (min((max(((65535 ? var_17 : 17828)), var_15)), -70));
    #pragma endscop
}
