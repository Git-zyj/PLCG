/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_5, -2121216857)) ^ (var_2 && var_4))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] |= ((!(((var_7 << (var_9 + 13753))))));
        var_18 = (-(~2121216857));
        var_19 -= (-(((((~2121216872) + 2147483647)) >> 0)));
        var_20 = (min(var_20, ((min(((((max(var_6, var_10))) ? (min(var_8, var_15)) : var_0)), ((+(((((-127 - 1) + 2147483647)) >> 1)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (var_16 << (var_7 - 26));
        var_22 = (~56);
        var_23 = ((var_16 ? var_1 : (!var_5)));
        var_24 = (~31);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_25 = ((~((-(var_13 < var_4)))));
        arr_8 [8] = ((var_13 & (max(var_7, var_15))));
        var_26 = (((~((var_8 ? var_5 : var_14)))));
        var_27 = (~6665600174928078798);
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_28 += (!11781143898781472818);
        var_29 += (((!var_15) << (var_2 - 17793)));
    }
    #pragma endscop
}
