/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [7] = (((1221009838 ? var_1 : var_8)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] = ((var_5 * (arr_4 [i_1] [9] [9])));
            arr_6 [i_1] [5] [i_0] &= (arr_4 [i_0] [i_1] [i_0]);
            var_10 ^= (arr_0 [i_0]);
        }
        var_11 = (((var_2 ? 59300 : (arr_1 [i_0]))));
    }
    var_12 &= var_2;
    var_13 &= (((((var_7 ? var_4 : var_1))) & -var_0));
    var_14 = ((~((-15874267316592305924 & (var_3 * var_2)))));
    #pragma endscop
}
