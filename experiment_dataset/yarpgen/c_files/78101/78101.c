/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((max((max(var_13, var_11)), 9223372036854775807)))));
    var_17 = (((((((min(var_6, var_3))) ? var_1 : var_12))) ? (((((max((-9223372036854775807 - 1), 3923638188))) && (((var_11 ? 63 : var_12)))))) : ((min(var_6, var_0)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((var_4 + 2147483647) >> ((((min(var_12, (arr_1 [i_0] [i_0])))) - 67))));
        var_18 = (((65535 / var_9) * ((((var_5 / var_4) / ((var_7 ? var_13 : var_14)))))));
        var_19 = (max((((((var_2 + (arr_1 [i_0] [i_0])))) ? var_13 : ((var_0 ? 1 : var_5)))), ((((((var_2 + (arr_1 [i_0] [i_0])))) ? ((var_14 << (var_15 + 1384178483))) : var_15)))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = arr_0 [i_1];
        var_21 = -16;
        var_22 ^= (max((max(var_6, var_15)), var_14));
    }
    #pragma endscop
}
