/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((251 ? (arr_0 [i_0] [i_0]) : (1618745678 ^ 1)));
        arr_2 [i_0] = (max(((-(((arr_1 [i_0] [i_0]) ? 59 : (arr_1 [i_0] [i_0]))))), 6228));
    }
    var_15 = var_10;
    var_16 = (~(min(var_10, (min(var_4, var_2)))));
    var_17 = (min((var_1 ^ var_7), var_8));
    #pragma endscop
}
