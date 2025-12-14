/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((~(max(255, -var_4))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [i_0 - 1]) ? var_11 : (arr_0 [i_0] [i_0 - 1])));
        var_14 = (((((((arr_1 [i_0]) || (arr_2 [i_0]))))) != (arr_1 [i_0 - 1])));
        arr_3 [22] &= (arr_2 [14]);
        var_15 *= 65274;
    }
    var_16 |= (max((max(65281, (var_7 ^ var_4))), ((min(65280, var_4)))));
    #pragma endscop
}
