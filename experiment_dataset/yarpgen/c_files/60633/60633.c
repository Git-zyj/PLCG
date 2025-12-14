/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 - (var_14 + 16)))) ? ((var_12 ? (((min(var_13, var_13)))) : var_2)) : -var_4));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max(var_8, ((-((-(arr_1 [i_0] [i_0 + 1])))))));
        var_16 = (min((((arr_1 [i_0] [i_0]) - (((var_0 ? var_7 : var_11))))), var_11));
        arr_3 [i_0] [i_0] = (min(var_10, (((((max(18, var_6))) ? -125 : ((var_7 ? (arr_0 [i_0] [i_0]) : var_9)))))));
        var_17 = (((~151) ? -5 : -46));
        var_18 = ((-(((arr_1 [3] [i_0]) / (arr_1 [i_0] [i_0])))));
    }
    var_19 = (((((((var_5 ? var_8 : var_14))) ? (~1) : (((var_0 ? -124 : 827782661)))))) * (((((var_8 ? var_10 : 2298))) ? ((var_14 ? 59 : var_10)) : var_11)));
    var_20 &= 534165166;
    #pragma endscop
}
