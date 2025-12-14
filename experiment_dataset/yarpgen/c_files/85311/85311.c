/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((-94 ? var_8 : (((var_10 ? var_6 : 3011367542021427766))))) / ((((((774221974 ? var_7 : -97))) ? var_10 : (~2338226804))))));
    var_14 = (min(var_14, var_8));
    var_15 = (((var_2 < 285710543) - ((min(var_3, (var_4 && var_11))))));
    var_16 -= (~285710559);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 *= var_10;
        var_18 ^= (min(var_0, (((((min(var_5, 712))) && (var_7 / 1))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = (arr_3 [i_1 + 1]);
        arr_4 [i_1] = (((arr_3 [i_1 - 1]) << (((arr_3 [i_1 - 1]) - 86))));
    }
    #pragma endscop
}
