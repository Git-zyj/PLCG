/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 642762893;
        var_14 += var_6;
        arr_3 [i_0] = ((~(arr_1 [i_0 - 2])));
        var_15 = (max(var_15, (arr_0 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (min(var_16, (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1])))));
        arr_6 [i_1] = 13070313187112844659;
    }
    var_17 = ((-(((var_8 - var_5) + ((1 ? var_0 : var_6))))));
    #pragma endscop
}
