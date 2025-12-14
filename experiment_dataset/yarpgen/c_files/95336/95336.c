/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 2699998932;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 3] |= (min((((~-13125) ? (arr_1 [i_0 + 1]) : var_5)), var_2));
        var_12 = ((1594968366 ? ((-31670 ? 15698 : 11268)) : (~240)));
        var_13 = var_1;
        var_14 ^= var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1] [i_1]);
        var_15 = (max(var_15, (((arr_3 [i_1]) ? (arr_3 [i_1]) : var_7))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] |= (65535 ? var_4 : var_3);
        var_16 = (min(var_16, ((((((var_10 ? 15945235542320138529 : 58))) ? (arr_8 [i_2]) : var_3)))));
        arr_11 [i_2] = (arr_1 [3]);
        var_17 = ((((((9070 > (arr_9 [i_2] [0]))))) - (((arr_1 [8]) ? 15 : 2048133171))));
    }
    #pragma endscop
}
