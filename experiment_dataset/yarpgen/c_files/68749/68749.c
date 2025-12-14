/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((126 ? var_16 : ((((min(var_13, (arr_1 [i_0] [19])))) ? var_14 : var_17))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_20 = (max(0, (arr_0 [i_0])));
        arr_3 [i_0] = (((-(arr_0 [i_0]))));
    }
    var_21 = ((((((((var_14 ? 8704255448820340414 : var_13))) ? -var_13 : (max(var_7, -1962851435603107859))))) ? ((min(var_17, var_16))) : -var_14));
    #pragma endscop
}
