/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((~var_2) + 2147483647)) >> (((min(var_6, var_3)) + 409732252)))), var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])));
        var_14 = var_6;
    }
    #pragma endscop
}
