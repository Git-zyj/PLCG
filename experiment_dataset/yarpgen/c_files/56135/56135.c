/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_1 [i_0] [i_0])));
        var_11 = (min(1, 64472));
    }

    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_12 = (min(var_12, ((((min((arr_4 [i_1 - 2]), (var_4 <= var_4))) ? (var_8 | var_3) : (((arr_4 [i_1]) * var_6)))))));
        arr_6 [i_1] = (((!var_10) && (arr_5 [i_1])));
        arr_7 [i_1] [i_1 - 1] = ((1 != var_5) && (max(1, 1)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_13 = var_7;
        arr_10 [i_2] = (var_6 % 1);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_14 = (max((((min(0, 1)) ? (~var_4) : var_4)), var_9));
        var_15 = min(var_8, (((!((max(44032, var_7)))))));
        var_16 *= (((((arr_11 [1]) == (((1 >= (arr_12 [i_3])))))) ? var_3 : var_9));
        var_17 |= (((!-var_7) & ((max((arr_12 [i_3]), var_7)))));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4 - 1] = var_1;
        var_18 = (((((arr_13 [i_4 - 2]) * ((var_6 ? var_7 : var_4)))) & (arr_5 [i_4])));
    }
    #pragma endscop
}
