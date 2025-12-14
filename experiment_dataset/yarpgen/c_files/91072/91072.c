/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_10));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min((-2147483647 - 1), (var_10 + -1893071731)));
        var_14 = ((((min((arr_1 [i_0]), -1893071731))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((15 ? -2147483639 : 1)))));
    }
    var_15 = (((1893071737 && 1) || var_3));
    #pragma endscop
}
