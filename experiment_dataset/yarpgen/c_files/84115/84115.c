/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_1 ? (max(var_4, -637996941)) : (var_8 * var_7))) ^ ((min(var_6, ((var_3 ? var_6 : -16066)))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 ^= (((var_1 & var_3) > ((((arr_2 [i_0 + 1]) ? var_6 : (arr_0 [i_0 + 1]))))));
        var_16 = (max(var_16, (arr_0 [i_0])));
        arr_3 [i_0] = (max((((arr_1 [i_0 + 2] [i_0 + 2]) / var_6)), ((max(((-1442932126 ? (arr_2 [i_0]) : -62)), var_8)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_7 [i_1] [i_1 - 3]) || (arr_7 [i_1 + 1] [i_1 - 1])));
        arr_9 [i_1] = (((arr_5 [i_1 - 1]) == (arr_5 [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = (arr_0 [i_2 + 1]);
        arr_13 [i_2] [i_2] = ((+(((arr_11 [i_2 + 1]) & var_3))));
        arr_14 [i_2] [i_2] = (!-1442932146);
    }
    #pragma endscop
}
