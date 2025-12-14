/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (var_4 - var_5)));
    var_13 *= (!(((1 > var_1) >= (var_11 > var_3))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (((((1 ? (arr_1 [i_0] [i_0]) : (((var_7 && (arr_0 [13] [19]))))))) || var_4));
        arr_2 [i_0] [11] = (min((max(0, (max(var_3, var_1)))), (arr_0 [i_0] [i_0])));
        var_15 *= var_7;
        var_16 ^= -var_5;
    }
    var_17 = -630233127;
    #pragma endscop
}
