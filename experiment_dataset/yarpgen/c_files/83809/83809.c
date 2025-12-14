/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_11 *= (((arr_1 [i_0]) ? -71 : (((1 ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_0 [i_0 - 3] [i_0 - 2]))))));
        var_12 *= (((((-(arr_0 [i_0 + 1] [i_0 - 2])))) ? (max((arr_0 [i_0 + 1] [i_0 - 3]), var_8)) : var_0));
        var_13 = var_9;
        var_14 = (var_2 - -2767799974853034013);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_15 = (((max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 + 2] [i_1]))) ? (((arr_2 [i_1 - 1] [i_1 - 1]) ? var_9 : var_1)) : (arr_2 [i_1 - 1] [i_1 + 1])));
        var_16 *= ((+((((arr_0 [i_1 - 1] [i_1 - 2]) != (arr_0 [i_1 + 1] [i_1 - 2]))))));
    }
    var_17 = (min(var_17, (((0 ? 111 : 0)))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = max((!2654167451641400463), ((var_0 | (arr_5 [i_2]))));
        var_19 = ((((var_4 ^ 5860) ? (max(-4682463099320630681, var_6)) : var_4)));
    }
    var_20 = ((var_9 ? var_7 : var_6));
    #pragma endscop
}
