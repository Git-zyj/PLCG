/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 30641;
    var_13 = ((((1230420030753353545 ? 118 : -1230420030753353545)) ^ (var_1 & var_11)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= ((~(((!((max(778372317, -94))))))));
        arr_2 [i_0] [i_0] = (max((arr_1 [i_0]), ((((max(3511, var_3))) ? var_1 : var_10))));
        var_15 = ((((arr_1 [i_0]) & var_8)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = ((((((((arr_4 [i_1]) ? (arr_3 [18]) : 202)) + 2147483647)) >> ((var_1 / (arr_4 [1]))))));
        var_16 = (max((max((arr_5 [i_1]), (max((arr_3 [8]), var_5)))), ((min(var_9, (arr_3 [i_1]))))));
    }
    #pragma endscop
}
