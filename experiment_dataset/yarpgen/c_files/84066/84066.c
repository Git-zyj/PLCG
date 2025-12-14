/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [2] = 0;
        arr_5 [i_0] = (~2147483647);
        arr_6 [i_0] |= (arr_2 [i_0] [i_0 - 1]);
        arr_7 [i_0] [i_0 - 3] = (arr_3 [19]);
        arr_8 [i_0] [i_0] = ((~(arr_1 [i_0 - 3])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_13 [i_1] = (((((((arr_0 [i_1] [i_1]) ? var_0 : (arr_11 [i_1])))) ? (arr_0 [1] [1]) : ((~(arr_10 [i_1]))))) ^ ((min(0, (arr_2 [i_1] [i_1])))));
        arr_14 [i_1] = -9;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_17 [i_2] = (arr_12 [i_2] [i_2]);
        arr_18 [i_2] = ((!(arr_1 [20])));
        arr_19 [i_2] [i_2] = (max(8, (((arr_2 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_15 [i_2] [i_2])))));
        arr_20 [i_2] = arr_2 [i_2] [i_2];
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_23 [5] [5] = arr_0 [i_3] [i_3];
        arr_24 [i_3 - 2] = (((arr_21 [i_3] [11]) & (arr_9 [i_3 + 1] [i_3 - 1])));
    }
    var_18 = (~29660471);
    var_19 = ((((max(var_14, ((min(var_10, var_17)))))) ^ (min((min(var_9, var_16)), (var_16 <= var_15)))));
    #pragma endscop
}
