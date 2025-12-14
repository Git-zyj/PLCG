/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = (((var_14 * (var_2 / var_3))) >= (((-1 ? ((min(1, var_6))) : var_18))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = (((max(var_4, ((var_11 ? 8160 : var_4)))) << ((((8160 ? (arr_0 [15]) : (((arr_0 [i_0]) ? (arr_1 [16] [i_0]) : (arr_0 [i_0]))))) + 19923))));
        var_23 *= ((57376 < ((((((((arr_0 [i_0]) + 2147483647)) << (8151 - 8151))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_24 = (var_12 || 1);
            var_25 = ((((max((arr_1 [i_0] [i_1]), 15))) * (arr_2 [i_0] [i_0] [16])));
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = ((1 ? (((arr_7 [i_2] [i_2]) ? (arr_7 [i_2 - 1] [i_2]) : var_18)) : (((arr_7 [5] [i_2]) ? (arr_7 [i_2] [i_2]) : var_12))));
        var_26 = ((((((arr_6 [i_2]) < var_2))) << (var_4 - 16375)));
    }
    #pragma endscop
}
