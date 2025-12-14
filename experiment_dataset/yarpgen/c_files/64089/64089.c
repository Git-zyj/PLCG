/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((var_9 ? 0 : var_7)) & ((((~var_6) ? var_11 : var_10))));
    var_13 += (min((var_6 != -var_1), (~var_4)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = (((arr_2 [i_0]) != (~2199099188499919845)));
        var_16 = ((!(~var_10)));
        var_17 = (min(var_17, (((!(arr_1 [i_0 + 1]))))));
        var_18 = ((var_2 ? (((!(arr_2 [i_0])))) : ((((arr_0 [1]) > var_3)))));
    }
    var_19 = (-((var_4 ? ((var_5 ? var_10 : var_6)) : (max(var_8, var_0)))));
    #pragma endscop
}
