/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((~var_4), var_9);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, ((((((((arr_0 [i_0] [i_0]) | var_6)) | ((((!(arr_1 [i_0]))))))) * var_1)))));
        var_19 = (max((((var_7 + (arr_0 [i_0] [i_0])))), (((var_11 | 2610087192) ? (max(var_8, var_14)) : ((((-47 + 2147483647) >> (((arr_1 [i_0]) - 16421788050398211590)))))))));
    }
    var_20 = ((!((((((var_11 ? var_12 : var_13))) ? (((var_0 ? -25 : var_13))) : (max(var_9, var_14)))))));
    var_21 = var_3;
    var_22 = ((~((-19611 ? (var_16 + 32570) : (118 % 14)))));
    #pragma endscop
}
