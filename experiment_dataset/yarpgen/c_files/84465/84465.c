/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((max(var_2, var_1)) / var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_11 -= ((8471963354790528082 << (((arr_1 [i_0] [i_0]) + 1804371573))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (85 + var_1);
        var_13 &= var_5;
    }
    #pragma endscop
}
