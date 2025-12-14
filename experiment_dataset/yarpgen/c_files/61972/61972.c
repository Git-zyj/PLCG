/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(((var_7 ? var_3 : var_1)), var_12)) >> ((((var_5 ? (max(var_11, -25456)) : (var_6 - var_8))) + 25460))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_14 = (73 ^ 6291456);
        arr_3 [i_0] [i_0] = 27124;
        var_15 = ((arr_0 [i_0]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0]));
        arr_4 [i_0] [i_0] = 174;
    }
    var_16 ^= (~var_0);
    #pragma endscop
}
