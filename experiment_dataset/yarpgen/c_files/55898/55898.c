/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [2] = (((((var_8 ? var_2 : var_2))) ? (max((arr_1 [i_0] [i_0]), -113088919850362880)) : (!239)));
        var_14 = (min(var_14, ((((var_3 | (arr_0 [i_0] [i_0]))) - 1))));
        arr_4 [0] &= (arr_2 [i_0] [i_0]);
    }
    var_15 = 6063;
    var_16 &= 3256053292;
    #pragma endscop
}
