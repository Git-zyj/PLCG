/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((~var_10) ? 1340719185 : (var_8 || var_15))) * var_14));
    var_17 = 12117833805177647044;
    var_18 = var_10;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((arr_0 [i_0]) ? 53 : (arr_0 [i_0]))));
        var_20 = ((var_13 / (arr_0 [i_0])));
    }
    #pragma endscop
}
