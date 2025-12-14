/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0]) & 3018000834))) ? (1553434768 | 22931) : var_8));
        arr_5 [i_0] [i_0] = (((((((arr_3 [i_0] [i_0]) / 41)))) / (max(((-(arr_1 [i_0]))), var_2))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_9 [i_1] = (min(var_11, ((137 << (-12807 + 12826)))));
        var_12 = (((((3731285286 ? 11051153658773149066 : -4424738729338245979))) ? 7032532401747400110 : -62657754));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_13 = (-32767 - 1);
        var_14 = -206;
        var_15 = ((-93 ? (((arr_2 [i_2 + 2]) % var_11)) : (arr_1 [i_2 - 3])));
    }
    var_16 |= 30;
    var_17 = ((-(((((var_9 ? var_2 : 2327130114))) ? (min(147, 7914866986179387820)) : (!10)))));
    var_18 &= ((((~(-6781 ^ -7857))) | 34077));
    #pragma endscop
}
