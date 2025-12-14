/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (max(var_13, ((((((var_6 ? 2600781791 : var_4))) || var_8)))));
    var_14 = (((!-2554093355) || (var_6 <= 102)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 &= 5;
        var_16 = ((((arr_1 [i_0]) ? 193 : (arr_1 [i_0]))));
    }
    #pragma endscop
}
