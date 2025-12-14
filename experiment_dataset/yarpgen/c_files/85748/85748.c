/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(((var_14 ? var_6 : var_11)), var_10)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 += (arr_0 [i_0]);
        arr_2 [0] = var_8;
        var_22 = var_6;
        var_23 = (min(var_23, ((((arr_0 [i_0 + 1]) ? (arr_1 [i_0 - 1] [i_0]) : 39293)))));
    }
    var_24 = (((((((var_0 ? var_10 : var_19)) - (var_12 || var_12)))) ? (((var_13 - var_12) | (~255))) : ((var_19 ? (min(var_1, var_2)) : (var_13 <= 32767)))));

    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_25 = 54011;
        var_26 += (arr_3 [i_1] [6]);
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((min(var_0, ((54006 ? (arr_5 [i_2 - 1]) : 39293)))))));
        var_28 = ((-((var_3 ? (min(10752716974724908911, 10752716974724908928)) : var_17))));
        arr_7 [i_2] = (1544094750759747428 / 146);
    }
    #pragma endscop
}
