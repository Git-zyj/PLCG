/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 <= (!var_1)));
    var_18 = 0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_13;
        arr_4 [i_0] = (~((((min(7, (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : 65514)))));
        var_19 = (min(var_19, ((min((~var_2), (arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] = ((!(((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((var_14 ? var_13 : var_0)) : (arr_1 [i_0]))))));
    }
    #pragma endscop
}
