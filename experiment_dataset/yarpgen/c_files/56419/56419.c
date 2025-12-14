/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_10));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 ^= (max(((((min(-18890, -6291049057487474777))) ? (arr_2 [i_0] [2]) : -2950041926018737685)), var_1));
        var_21 = (((~var_3) ? ((-6291049057487474761 & (arr_2 [i_0] [i_0]))) : (min((((arr_2 [i_0] [i_0]) ? var_7 : var_16)), (min(-6291049057487474761, var_0))))));
        var_22 = arr_0 [i_0];
        arr_3 [i_0] = (arr_1 [i_0]);
        var_23 += (((((~(arr_1 [i_0])))) ? (min((min((arr_0 [i_0]), -1)), (var_5 || var_18))) : ((var_7 ? (arr_2 [4] [4]) : (arr_2 [i_0] [10])))));
    }
    var_24 = (!1092652267525313946);
    #pragma endscop
}
