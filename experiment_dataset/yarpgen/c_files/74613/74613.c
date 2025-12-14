/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (var_1 / var_3);
        arr_3 [i_0] = (((5566978541765785630 ^ (arr_0 [i_0]))));
    }
    var_13 = var_7;
    #pragma endscop
}
