/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_3, (~var_5)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 ^= ((((max((arr_1 [16]), 145))) & (max(var_6, var_8))));
        var_13 ^= -5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (((arr_3 [i_1]) < (arr_3 [i_1])));
        var_14 = (max(var_14, (arr_3 [i_1])));
        var_15 = (max(var_15, (((((((arr_3 [i_1]) ? var_4 : (arr_4 [i_1])))) || (((6999892275178240501 ? (arr_4 [i_1]) : (arr_4 [i_1])))))))));
    }
    #pragma endscop
}
