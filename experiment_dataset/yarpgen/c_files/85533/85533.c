/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_15 ? ((var_6 ? 1 : 123)) : (~1))) * (!var_4)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((((var_11 ? var_14 : var_7))) ? (var_2 | 0) : (!2611487276)));
        var_17 -= (((((var_8 ? 139 : 4562915660625885382))) ? -28 : ((var_3 ? var_1 : var_9))));
        var_18 -= (((((var_10 ? var_3 : (var_15 / var_1)))) ? -3383582620 : (((((1 ? var_3 : 9223372036854775807))) ? var_1 : (((-1290957384 ? 1360234502 : 61597)))))));
    }
    var_19 = var_11;
    var_20 = ((var_6 ? (~17753) : 251));
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
