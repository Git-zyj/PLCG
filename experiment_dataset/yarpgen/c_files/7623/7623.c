/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (max((var_4 + var_2), (((((var_12 ? var_7 : 0))) ? ((var_12 ? var_13 : var_4)) : 2097500977))));
    var_18 = (min(var_18, ((((((var_7 << (var_5 + 249024675)))) ? ((((-8202347747218855691 <= (((1659203322 ? var_13 : 57418))))))) : ((var_14 - (10 <= -317319299))))))));
    var_19 &= ((-((1125689581 + (var_1 != 2097500977)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = var_4;
        var_20 += 190;
        var_21 = (78 ^ (arr_1 [i_0]));
    }
    #pragma endscop
}
