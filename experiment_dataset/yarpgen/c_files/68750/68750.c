/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, 11035771313396822216));
    var_20 = (var_11 > 11035771313396822216);
    var_21 = var_10;
    var_22 = (!47855);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_23 |= max(7, (var_13 | var_8));
        var_24 ^= (var_17 <= 17681);
        var_25 ^= (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_26 = ((-(((((max(119, 63))) || (arr_2 [i_1]))))));
        arr_5 [i_1 - 2] |= (max(((-(arr_3 [i_1 - 2] [i_1 + 1]))), ((2735584677397621344 ? 255 : 31))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_27 -= ((17680 << (109 - 94)));
        var_28 = var_4;
    }
    #pragma endscop
}
