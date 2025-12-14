/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [10] [i_0 + 3] = (~1);
        arr_3 [i_0] [i_0] = (((-2147483647 - 1) ? (((var_3 / (arr_1 [i_0 + 1])))) : (arr_0 [i_0] [i_0 - 2])));
    }
    var_19 = ((~((~(~var_6)))));
    #pragma endscop
}
