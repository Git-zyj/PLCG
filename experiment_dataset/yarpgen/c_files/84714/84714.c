/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max((max(var_11, var_8)), ((var_5 ? var_11 : var_11))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [16] |= (((arr_0 [i_0]) >> (((arr_1 [2]) + 494591722))));
    }
    var_15 = ((var_10 - (min((((1 ? var_9 : -1))), var_13))));
    #pragma endscop
}
