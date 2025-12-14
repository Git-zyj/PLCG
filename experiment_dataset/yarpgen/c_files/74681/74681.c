/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((122 ? ((var_12 ? 15454701857121663506 : var_12)) : (((3136148100 ? 9223372036854775807 : (-9223372036854775807 - 1)))))));
    var_14 = (~var_11);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = var_8;
        arr_2 [9] = -227;
        arr_3 [i_0] [i_0] = 6385844691757374468;
        arr_4 [i_0] [i_0] = (-9223372036854775807 - 1);
        var_16 = (max((((((-765496876 ? -9223372036854775807 : -5066))) ? (((var_9 ? var_2 : 58107))) : ((var_0 ? (arr_0 [i_0] [i_0]) : 41876)))), (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
