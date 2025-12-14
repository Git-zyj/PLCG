/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 -= ((var_2 << (var_9 + 4850978616211582420)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_2 [i_0 - 2] [i_0 - 1]);
        var_17 = (arr_0 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0 + 1] = ((((((arr_2 [i_0 - 2] [i_0]) ^ (arr_2 [i_0 - 1] [i_0])))) ? (min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 - 1]))) : (arr_0 [i_0] [i_0])));
        var_18 = (arr_1 [i_0]);
    }
    #pragma endscop
}
