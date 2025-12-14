/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (!((((((198 ? var_2 : var_14))) ? (var_13 > var_9) : var_2))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 += var_12;
        arr_3 [i_0] &= -18;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_5 [i_1 + 3] [i_1]) < ((max(16, var_1)))));
        arr_7 [i_1] [i_1 + 1] = var_15;
        var_18 ^= (((arr_5 [i_1 + 3] [22]) ? (((((29 ? (arr_4 [22]) : (arr_5 [i_1] [20])))) ? (min(var_13, 1)) : (arr_5 [i_1 + 2] [20]))) : 66));
        arr_8 [i_1] = (max((((arr_4 [i_1]) + (arr_4 [i_1]))), (((!(arr_4 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 |= (arr_9 [6] [i_2]);
        arr_11 [i_2] = (12996508262108414351 || 217);
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_15 [6] = (max(var_14, (arr_14 [i_3] [i_3])));
        var_20 = 1;
        arr_16 [i_3] [i_3] = (min(((var_10 << (3519551020 - 3519551015))), (arr_12 [i_3])));
        arr_17 [i_3] = ((arr_14 [i_3] [1]) * (arr_14 [i_3] [i_3]));
        arr_18 [i_3] |= (((arr_14 [8] [i_3]) && (arr_14 [i_3] [1])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_21 [1] &= ((73 + ((19 ? 1 : -115))));
        var_21 *= var_4;
    }
    #pragma endscop
}
