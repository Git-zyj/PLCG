/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 ^= -9041;
        arr_2 [i_0] = var_7;
        var_13 = (min(((((arr_0 [i_0] [0]) ? 9041 : (arr_1 [6] [i_0])))), (~-5249492487514416750)));
        var_14 ^= ((arr_1 [4] [i_0]) & ((((arr_0 [i_0] [i_0]) ? -9042 : 68))));
        var_15 = ((((arr_1 [i_0] [i_0]) ? 2041241456514437038 : var_2)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 = (~-9036);
        var_17 = (var_8 ? var_3 : ((0 >> (var_1 + 1104386933))));
    }
    var_18 = (min(var_18, var_10));
    #pragma endscop
}
