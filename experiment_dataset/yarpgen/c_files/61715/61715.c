/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, ((min((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0] [i_0]) < ((var_5 ? (arr_0 [i_0] [i_0]) : var_8))))))))));
        var_21 = var_1;
        var_22 = (min(var_22, (((-(((((arr_0 [i_0] [i_0]) != var_3)) ? var_0 : ((var_10 ? var_19 : var_7)))))))));
        var_23 = (arr_1 [1] [i_0]);
    }
    var_24 = (((!1772258071) ? var_2 : (((var_10 - var_7) ^ (((var_0 ? var_13 : var_8)))))));
    #pragma endscop
}
