/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - 13714))));
        var_17 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [6] [6] |= (arr_4 [i_1] [i_1]);
        var_18 = (max(var_18, ((!(arr_0 [i_1])))));
        arr_7 [i_1] = 2891196177;
        var_19 = (!3583875656);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 = ((1403771112 ? (((arr_9 [i_2]) | (min((arr_9 [i_2]), (arr_9 [i_2]))))) : 1403771139));
        arr_10 [i_2] = (arr_9 [i_2]);
    }
    #pragma endscop
}
