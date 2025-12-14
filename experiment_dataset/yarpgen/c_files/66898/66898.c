/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_13;
    var_15 = (((((var_3 ? var_5 : 1)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = (((((207 ? 0 : 0))) ? (((((1 ? 248 : var_3))))) : ((var_12 ? (arr_0 [i_0 - 2]) : ((min(var_12, (arr_1 [i_0]))))))));
        arr_3 [i_0] = var_12;
    }
    #pragma endscop
}
