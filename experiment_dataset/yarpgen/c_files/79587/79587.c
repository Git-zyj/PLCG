/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!-29426);
    var_15 = (((50 + var_8) / var_3));
    var_16 = var_12;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0 - 1]) ? var_2 : (arr_3 [i_0 - 1])))) ? (arr_3 [i_0]) : (arr_3 [i_0 + 2])));
        var_17 = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = (arr_3 [i_1]);
        var_19 = (min((arr_1 [i_1 - 1] [i_1]), (((arr_0 [i_1 - 1]) & (arr_1 [i_1 - 1] [i_1 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_20 = (((1717822020 | var_8) + (arr_7 [i_2])));
        arr_9 [i_2] = (18345 + 13397955690323591381);
    }
    #pragma endscop
}
