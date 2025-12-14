/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((max(var_4, var_0))) != (min((((arr_0 [i_0]) ? -9 : var_14)), ((((arr_2 [i_0]) ? var_3 : (arr_2 [i_0]))))))));
        arr_3 [i_0 + 1] |= (var_11 && -20);
        var_18 |= (min((arr_1 [i_0 - 1]), (arr_2 [i_0 + 1])));
    }
    var_19 = (((((2 ? 23 : 23869))) ? 1696 : (max(((min(var_10, var_12))), (max(var_11, var_3))))));
    var_20 = 72338402;
    #pragma endscop
}
