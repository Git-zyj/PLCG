/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(var_15, (((~(min(((428436357 << (31 - 29))), var_3)))))));
        var_16 &= ((var_2 ? -27177 : (((arr_3 [i_0]) ? (max(var_14, (arr_0 [i_0]))) : var_1))));
        arr_4 [i_0] = (max(var_6, (((var_6 == var_9) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = ((((((~-1840579527) ? (arr_7 [i_1] [i_1]) : -510891794))) ? (~3866196462) : var_12));
        var_18 = (arr_1 [i_1] [6]);
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_19 = var_9;
        var_20 = (((max(4635032467379193315, -9223372036854775797))) ? var_4 : (!var_7));
    }
    var_21 |= (min(((((var_1 ? var_8 : 216)))), (var_11 % var_5)));
    #pragma endscop
}
