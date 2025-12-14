/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 ^= ((-(((arr_0 [i_0]) * 0))));
        var_11 = ((arr_0 [i_0 - 2]) >> (((arr_0 [i_0]) - 5451668173881657433)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_12 = (arr_4 [13]);
        arr_5 [i_1] = (1 < 0);
    }
    var_13 = var_8;
    #pragma endscop
}
