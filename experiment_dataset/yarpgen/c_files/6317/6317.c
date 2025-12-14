/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((~0) != (((-9223372036854775807 - 1) + 1)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = (max(var_18, (((!(((-(max(var_10, var_13))))))))));
        var_19 = (((((var_14 && ((min(-26610, var_5)))))) << ((((max(var_0, var_11)) < var_11)))));
    }
    var_20 = var_10;
    var_21 = (min(var_21, ((((-9223372036854775807 - 1) == 1)))));
    var_22 = (min(var_22, -2231984068));
    #pragma endscop
}
