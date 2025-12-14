/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((5 ? var_4 : var_10)))) % (-1 - var_7)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 -= (((((!1048574) / (arr_2 [1]))) ^ (((-((-(arr_1 [17]))))))));
        var_15 = ((!(((var_6 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_16 *= (arr_4 [14] [i_1 + 3]);
        arr_5 [i_1 + 2] = (((((arr_4 [i_1 - 1] [i_1]) << var_3)) % (((arr_4 [i_1 - 2] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 + 3] [i_1])))));
        var_17 *= (((arr_1 [i_1 + 1]) - (var_6 + 65535)));
    }
    var_18 = ((!((max(((min(var_11, var_3))), ((var_4 ? -2147483644 : -32762)))))));
    #pragma endscop
}
