/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (((1731429670 & 1) ? ((var_5 ? 12662991912974571066 : var_2)) : (var_6 & var_8)));
        var_13 ^= ((var_3 - (arr_0 [i_0] [i_0])));
        var_14 = (((1 ? (arr_1 [i_0] [i_0]) : -1528764747)));
        arr_2 [i_0] = ((arr_0 [i_0] [i_0]) <= -1528764752);
    }
    #pragma endscop
}
