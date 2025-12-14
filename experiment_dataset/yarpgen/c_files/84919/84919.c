/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((var_8 | var_3), (((var_17 ? var_14 : var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (9145 || 16);
        arr_3 [i_0] = ((!(!-9223372036854775804)));
        arr_4 [i_0] = -2621057504031927197;
        arr_5 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_11));
        arr_6 [i_0] [i_0] &= ((-1093902367 != (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_10 [i_1] = ((!(((max(var_6, var_5))))));
        arr_11 [i_1] = var_11;
        arr_12 [i_1] [i_1] &= ((+(((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = (max(4879714382857615255, 1));
        arr_17 [i_2] = (!65530);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_20 [i_3] |= ((var_6 ? (((arr_13 [i_3]) ? var_2 : var_10)) : (((1930 ? 1 : 841202006)))));
        arr_21 [i_3] = ((178 ? (~57960) : 28982));
    }
    #pragma endscop
}
