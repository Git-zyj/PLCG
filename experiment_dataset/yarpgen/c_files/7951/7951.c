/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!var_12), (max(var_1, (max(1065353216, var_8))))));
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((-(arr_0 [i_0] [i_0])));
        arr_5 [i_0] = ((((((1065353221 ? (arr_2 [i_0] [i_0]) : var_12)) * 0)) / var_0));
    }
    var_17 = var_13;
    #pragma endscop
}
