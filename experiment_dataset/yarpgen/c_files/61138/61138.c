/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1941171361 ? 0 : (-127 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, (((var_0 - (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_2)))))));
        var_22 = ((~(~1)));
    }
    #pragma endscop
}
