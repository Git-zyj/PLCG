/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 ? var_6 : (~1)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (~-113);
        arr_3 [i_0] = -1073741824;
        var_11 |= ((((((arr_1 [1]) ? (arr_1 [16]) : -1073741824))) ? var_3 : 65535));
        var_12 = ((var_6 <= (~var_7)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (((((!(arr_5 [i_1] [i_1])) ? (arr_0 [i_1]) : (max(var_7, 2365297495))))));
        arr_6 [i_1] [i_1] = ((arr_4 [i_1]) && -89);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_14 = (((((var_9 ? (arr_7 [i_2] [i_2]) : 71))) ? var_7 : (!19535)));
        var_15 = (((arr_8 [i_2] [i_2]) ? (((19535 ? 0 : (!70)))) : (min(var_1, -var_6))));
    }
    var_16 = var_1;
    #pragma endscop
}
