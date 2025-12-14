/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((((98 ? var_6 : var_0))) ? var_1 : ((min(1, -87)))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [16]) : (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_3))));
        var_16 *= ((((max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [13]))), ((94 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) || var_2));
        var_17 = (max(var_17, (((((+((max((arr_0 [i_0]), (arr_0 [i_0])))))) / ((+(((arr_1 [i_0] [i_0]) ? -12769 : var_8)))))))));
    }
    var_18 = (max(1, 4122902283));
    var_19 = (min(var_19, -var_11));
    var_20 = var_11;
    #pragma endscop
}
