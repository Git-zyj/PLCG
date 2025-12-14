/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = (arr_1 [i_0 + 2] [2]);
        arr_4 [i_0 - 2] = ((((~(arr_0 [i_0] [i_0 - 2]))) | (arr_3 [i_0 + 2])));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_18 = (((max(32767, 13527583128189484136)) >> 70));
        var_19 = (((arr_6 [i_1] [i_1]) == 1));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_20 ^= arr_1 [i_2] [i_2];
        arr_9 [i_2 + 1] = (((arr_3 [i_2]) ? var_2 : 1));
        var_21 = (((arr_8 [i_2]) ? 1 : 1));
    }
    var_22 = -var_8;
    var_23 = var_13;
    #pragma endscop
}
