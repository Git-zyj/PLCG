/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 != (((((0 ? var_6 : 4))) ? var_3 : (var_8 != var_1)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] |= ((min(204, ((var_7 ? var_5 : var_7)))));
        arr_5 [i_0] = (((112 * (arr_2 [i_0 - 2]))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_12 = (max(((((arr_8 [i_1 - 2] [i_1 + 1]) <= 18446744073709551615))), 11001852021931616320));
        arr_9 [i_1] = ((((((((var_2 >= (arr_3 [0]))))) >= (109 - var_6))) ? (((112 & -113) / var_10)) : (((var_1 == var_2) & ((max((arr_7 [i_1]), 112)))))));
        var_13 = ((((min(255, 67108864))) >> (((arr_6 [i_1 - 2] [i_1 - 2]) - (arr_6 [i_1 - 3] [i_1 - 3])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_12 [6] = (+(((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))));
        arr_13 [i_2] [i_2] = (arr_3 [i_2]);
    }
    var_14 = ((var_5 | (min(((var_7 ? 7452782801703395079 : var_10)), (((1 ? var_2 : var_2)))))));
    #pragma endscop
}
