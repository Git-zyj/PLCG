/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((max(var_6, var_4))) ? var_4 : (var_4 != var_4)))) ? ((((max(var_9, var_4))) ? (13835058055282163712 | var_3) : (((var_5 ? var_4 : -49))))) : (var_6 ^ var_3)));
    var_12 = var_1;
    var_13 = ((var_0 ? (var_0 + var_3) : (((((4294967283 ? 4611686018427387880 : var_2))) ? var_1 : var_7))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_10;
        var_14 = ((~((~(max(var_0, var_1))))));
        var_15 = 0;
        var_16 = ((~((((min(var_9, var_5)) > var_6)))));
        var_17 -= ((-(((((43828 ? 26499 : 87))) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((((~var_10) ? var_8 : ((~(arr_6 [4] [4]))))) % 21683);
        var_18 = 0;
        var_19 -= (max((max((min(-34, (arr_4 [i_1]))), (var_1 ^ var_7))), (arr_5 [i_1])));
        var_20 += var_10;
    }
    #pragma endscop
}
