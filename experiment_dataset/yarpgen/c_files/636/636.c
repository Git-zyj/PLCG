/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((var_6 ? var_15 : var_19)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [6] = (var_9 << (-var_0 + 1616236637));
        var_21 = ((~((var_0 ? (var_1 & var_17) : var_5))));
        var_22 = ((((var_5 ? var_18 : var_11))) ? (263014596 >= -81) : (((((var_4 ? var_18 : var_10))) ? var_1 : (~var_12))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 = (((((~((var_6 ? var_16 : var_6))))) ? var_3 : var_16));
        var_24 = (((-var_1 < var_3) ? ((var_5 ? -var_12 : var_17)) : (((var_19 ? var_18 : var_19)))));
        var_25 = (min(var_25, ((((~var_18) ? var_14 : (~var_7))))));
    }
    #pragma endscop
}
