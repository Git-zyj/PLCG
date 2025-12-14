/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = var_3;
        arr_3 [i_0] = var_1;
        var_12 = (max(var_12, ((min(((1746503823 ? (var_0 + var_2) : var_8)), ((((var_3 + 9223372036854775807) << ((((var_9 << (((arr_1 [2]) - 102)))) - 6815305340707691404))))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((1746503833 != 124) & ((var_5 ? var_1 : (arr_5 [i_1])))));
        var_13 &= (~var_8);
        arr_7 [i_1] = arr_4 [i_1 - 1];
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_14 ^= (((65535 & (arr_8 [1] [i_2 + 1]))));
        var_15 = (+(((arr_9 [i_2 + 1]) >> 1)));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_16 = (((arr_8 [i_3] [i_3]) * (max((arr_8 [i_3] [i_3]), (~var_8)))));
        arr_12 [i_3] = ((var_8 << ((((arr_9 [i_3]) && var_2)))));
    }
    #pragma endscop
}
