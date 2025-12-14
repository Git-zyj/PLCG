/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_2, ((max(84, 2053189492)))));
        var_18 = (max(var_18, (arr_0 [i_0] [i_0])));
    }
    var_19 = ((var_14 ? (((!(((var_10 ? var_1 : var_5)))))) : var_7));
    #pragma endscop
}
