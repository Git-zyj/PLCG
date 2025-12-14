/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] &= -var_17;
        var_19 ^= ((((((((arr_3 [i_0] [i_0]) + 2147483647)) >> (((arr_3 [i_0] [i_0]) + 1373499897))))) <= ((0 ? 0 : -8114372617465833692))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = 18446744073709551602;
        var_20 = (((arr_7 [i_1]) >= (((arr_6 [i_1]) ? 27750 : (arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = ((((((arr_10 [i_2]) ? ((-8114372617465833692 ? (arr_9 [i_2]) : var_4)) : (arr_10 [i_2])))) ? var_2 : (((var_0 / 4948361195544076538) ? -4332174305533440264 : (min(32402, (arr_10 [i_2])))))));
        var_21 ^= var_8;
    }
    var_22 -= (var_14 & var_15);
    #pragma endscop
}
