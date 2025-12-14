/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        var_21 = (arr_0 [i_0]);
        var_22 = (min(var_22, (((~(arr_1 [21] [i_0]))))));
    }
    var_23 = ((((((var_0 ? var_5 : var_19)))) >> (var_11 - 1106692585018174638)));
    #pragma endscop
}
