/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((var_4 ? var_8 : var_5)))));
        arr_3 [i_0] = (((~(arr_0 [i_0]))));
        var_15 ^= (var_13 || var_11);
        arr_4 [i_0] = (var_12 | (var_13 / var_10));
        var_16 = (min(var_16, (((0 + (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 -= ((var_7 ? (arr_7 [i_1 - 1]) : 4106675725));
        var_18 = (min(var_18, (arr_5 [i_1 - 1] [i_1 - 1])));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_19 = ((((((18446744073709551608 ? (arr_11 [9] [i_2]) : 1)))) ? (arr_0 [i_2 - 3]) : ((~(arr_11 [i_2 + 2] [i_2 + 2])))));
        var_20 &= var_9;
    }
    var_21 = var_7;
    #pragma endscop
}
