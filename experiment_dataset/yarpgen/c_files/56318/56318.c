/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((min(var_11, var_9)) ? var_4 : var_1))));
        var_12 |= ((!(((~((min(var_11, var_8))))))));
        var_13 = (max((min(81, -8960357675549953288)), var_10));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (((((~((var_10 ? var_3 : var_9))))) ? (((-(var_8 >= var_8)))) : ((((max(var_11, var_4))) ? ((var_0 ? var_0 : var_1)) : (((min(var_2, var_6))))))));
        var_14 ^= ((((min(((min(var_8, var_6))), (var_3 | var_10)))) ? ((((max(var_9, var_11)) / (var_8 && var_5)))) : ((var_8 ? var_1 : ((var_0 << (var_1 - 10733)))))));
        var_15 = (((!var_6) ? var_6 : (min(((var_0 ? var_2 : var_0)), var_5))));
    }
    var_16 = var_5;
    #pragma endscop
}
