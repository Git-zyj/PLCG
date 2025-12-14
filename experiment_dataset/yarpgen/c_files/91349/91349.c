/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 ^= ((!(((8 ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : -22611))) : ((-13555 ? (arr_0 [i_0]) : -60)))))));
        var_19 = (((var_11 / (arr_1 [0]))));
    }
    var_20 &= var_2;
    var_21 ^= ((((min(var_4, var_2))) || 0));
    #pragma endscop
}
