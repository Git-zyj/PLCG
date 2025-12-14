/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(((var_12 ? var_11 : var_4)), 1)), ((8552171215385112308 ? var_7 : 29062))));
    var_17 = (min(var_17, (((1 ? (((-5917478060154902036 ? var_11 : var_5))) : (((min(1, var_15)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((1648 ? (!0) : 29062));
        arr_2 [i_0] = (max(((~((max(1, 0))))), (max(1, -1105957977))));
        arr_3 [i_0] = (max(0, 1));
        var_19 *= (((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [1])))) ? 255 : -9198356159562699768)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = -5917478060154902036;
        var_21 ^= (((max(56689, 0))));
        arr_6 [i_1] = (max(29062, (max(5917478060154902036, ((max(0, 1)))))));
        var_22 = -1;
    }
    var_23 = var_12;
    #pragma endscop
}
