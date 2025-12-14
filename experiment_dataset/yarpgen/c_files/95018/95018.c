/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_11;
    var_17 = (min(var_17, (((((var_3 + var_4) <= (min(var_8, var_2)))) ? (9223372036854775807 / 19005) : (((-2676001633599482711 ? 1055980560 : (~var_12))))))));
    var_18 = ((((min(-4052165244870173705, var_15))) ? var_14 : (max(var_3, var_11))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 - 1] = (((arr_0 [i_0 - 1]) ? (((((65535 ? 81814091 : var_8)) * (((-(arr_0 [i_0]))))))) : (arr_1 [i_0 + 1])));
        var_19 ^= ((~(arr_1 [i_0 - 1])));
        var_20 = 1;
    }
    #pragma endscop
}
