/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_3;
        var_12 *= ((min((arr_1 [i_0]), 64285)) % (((-33612 <= (2205 - 1)))));
        arr_3 [i_0] = (((((arr_1 [i_0]) || (((2205 ? 63330 : var_7))))) || ((((arr_0 [i_0]) ^ var_6)))));
        arr_4 [i_0] = (max(((-(arr_1 [i_0]))), -63330));
    }
    var_13 = (min(var_13, (var_9 < var_5)));
    var_14 = (var_7 ? (((var_3 & -100) ? ((var_9 ? var_2 : var_11)) : (2206 || 8598))) : var_6);
    #pragma endscop
}
