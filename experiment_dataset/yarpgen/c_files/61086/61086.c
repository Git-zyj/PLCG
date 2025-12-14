/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [8] = arr_0 [i_0] [11];
        var_12 = ((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0]));
    }
    var_13 = var_10;
    #pragma endscop
}
