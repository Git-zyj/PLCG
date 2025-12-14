/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (min(var_10, (((960 ? (max((arr_0 [i_0] [i_0]), var_9)) : (4294967295 - var_2))))));
        var_11 = (max(var_11, (arr_1 [i_0])));
        var_12 ^= ((((((((max(var_2, var_3))) && (arr_1 [i_0]))))) >= (max((1 * var_1), (((arr_0 [i_0] [i_0]) ? (arr_0 [1] [1]) : -42))))));
        var_13 += var_6;
        var_14 = 65535;
    }
    var_15 = ((!((!(((var_4 ? 4294967295 : var_0)))))));
    #pragma endscop
}
