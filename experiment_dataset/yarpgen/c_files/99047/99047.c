/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 ? (((104 ? var_9 : 1)) : ((9 ? -9223372036854775799 : var_4))))));
    var_12 = (((var_2 ? var_7 : 12811)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((min((arr_0 [i_0]), -9223372036854775799)) < (!9223372036854775798)))), (((-9223372036854775799 ? 3741526807543104832 : 1)))));
        var_13 = ((min((arr_0 [i_0]), (arr_0 [i_0]))) ^ (((((max(52725, 3889586151363642619))) ? ((max(-1, 0))) : ((0 ? 3741526807543104847 : 9514))))));
        arr_3 [i_0] = (max((((~(arr_1 [i_0])))), (((((1 >> (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? 18446744073709551610 : (arr_0 [i_0])))))));
        arr_4 [i_0] = ((((min((arr_1 [i_0]), 1)) ? ((-1081628803 ? 1 : (arr_1 [i_0]))) : (arr_0 [i_0]))));
        arr_5 [i_0] = ((-51534 ? (arr_1 [7]) : 34));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (arr_1 [i_1]);
        arr_10 [i_1] [i_1] = (((arr_6 [i_1]) || 374177460427023500));
    }
    #pragma endscop
}
