/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? var_15 : (var_10 - -44)));
    var_19 = ((-(((var_16 + -50) ? (var_15 - var_7) : ((var_14 ? var_0 : var_2))))));
    var_20 = var_1;
    var_21 = (max((min(var_12, 576460752303423487)), (!2599015275)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 ^= ((-(arr_2 [i_0] [i_0 - 1])));
        var_23 *= ((-113 ? (!4071843280) : (((arr_0 [i_0 + 3]) & (arr_0 [i_0 + 2])))));
        var_24 &= (((0 ? -1 : 223124021)));
    }
    #pragma endscop
}
