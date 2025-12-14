/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [2] = (arr_1 [i_0] [i_0]);
        var_17 -= arr_1 [4] [4];
        var_18 = (arr_0 [i_0]);
    }
    #pragma endscop
}
