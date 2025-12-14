/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 += (min((((231 || (((1 << (((arr_2 [i_0]) - 34)))))))), var_13));
        arr_3 [i_0] = ((var_13 ? (((min((arr_1 [i_0]), (arr_1 [i_0]))))) : (((min(var_0, (arr_0 [i_0] [i_0]))) & ((((arr_2 [i_0]) << (13885558127281181515 - 13885558127281181508))))))));
    }
    var_17 = ((!(((var_3 ? ((max(0, -32))) : var_11)))));
    var_18 = (!(((13885558127281181519 ? ((var_2 ? var_2 : var_15)) : var_10))));
    #pragma endscop
}
