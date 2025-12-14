/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~var_2) ? ((var_3 ? ((var_9 ? var_12 : var_13)) : 119)) : var_6));
    var_16 = ((var_7 ? ((64213 ? ((63484 ? -16584 : var_7)) : -var_12)) : (((137 && 119) ? ((21178 ? var_14 : var_12)) : 0))));
    var_17 = ((((((var_6 || var_8) ? ((var_3 ? var_14 : var_0)) : (0 < 137)))) ? (((((0 ? var_0 : 4518))) ? var_9 : 13)) : (((~var_4) ? (~var_12) : var_3))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(var_18, (((var_6 ? var_3 : (!151))))));
        arr_4 [19] = (!var_7);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_7 [14] [i_1] = ((0 ? (!var_8) : 151));
        arr_8 [0] [0] = (var_8 == 8825);
    }
    var_19 = (max(var_19, var_12));
    #pragma endscop
}
