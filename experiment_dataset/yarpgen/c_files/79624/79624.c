/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~48);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [4] = (arr_3 [i_0]);
        arr_5 [i_0] = (((48 || 32407) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10)) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_1))));
        arr_6 [i_0] = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_7 [i_0] = var_1;
    }
    var_12 = (min(30, (((~33141) - var_10))));
    #pragma endscop
}
