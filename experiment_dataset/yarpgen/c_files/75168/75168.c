/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) << (((((((arr_3 [i_0]) ? var_12 : (arr_3 [i_0]))) + 7110081977011499460)) - 15))));
        arr_5 [i_0] = ((((67 ? var_12 : (max(var_10, -5709315367196198063)))) < ((var_9 ? var_6 : ((var_1 ? var_4 : var_12))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_14 = (((arr_8 [i_1]) ? (((-8038944333441103512 > ((min(var_5, 9223372036854775796)))))) : (((var_10 || -28) << (((~var_1) - 1512955272))))));
        arr_9 [i_1] = ((1684975706 ? 16074925025313399192 : 230));
    }
    var_15 = (max(((((var_5 ? 212 : 143)))), ((((max(var_9, 7170493701443440797))) ? var_4 : var_1))));
    var_16 += var_2;
    #pragma endscop
}
