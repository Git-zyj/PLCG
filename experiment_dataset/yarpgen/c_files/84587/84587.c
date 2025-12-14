/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -971188213;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= (max(var_11, (arr_1 [i_0])));
        arr_2 [9] [i_0] = (arr_1 [i_0]);
        var_19 = (((arr_0 [i_0] [i_0]) ^ (arr_1 [i_0])));
        arr_3 [i_0] = (((((((min((arr_1 [i_0]), 2147483647))) ? (((arr_0 [7] [7]) & (arr_1 [i_0]))) : (-32767 - 1)))) | (((arr_1 [i_0]) ? ((((arr_0 [i_0] [i_0]) ? -81 : 32754))) : (min(var_9, var_15))))));
    }
    var_20 = var_3;
    var_21 = ((((((((var_1 ? 971188212 : var_14))) ? 255 : ((var_0 ? var_4 : var_2))))) + 1939639056424236368));
    #pragma endscop
}
