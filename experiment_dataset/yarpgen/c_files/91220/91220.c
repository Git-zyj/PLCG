/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((var_11 ? var_12 : (((var_2 ? var_13 : var_3))))), -var_13);
    var_16 = -62;
    var_17 = ((-((-51 ? (var_7 * 62) : ((var_2 ? var_1 : var_1))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((((((~var_8) + 2147483647)) >> var_13))) ? ((((var_5 < (((var_0 ? (arr_0 [i_0] [i_0]) : 61572651155456))))))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_19 = (-8379713713991638827 ? ((var_9 ? (arr_0 [i_0] [i_0]) : -37800394)) : ((((((-(arr_0 [i_0] [i_0])))) ? (!var_8) : 61))));
        var_20 = (i_0 % 2 == 0) ? (((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 1045383156)))))) : (((((arr_0 [i_0] [i_0]) >> (((((arr_0 [i_0] [i_0]) - 1045383156)) - 2298626872))))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
