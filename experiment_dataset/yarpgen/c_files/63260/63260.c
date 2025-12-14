/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 52602;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) != 1));
        arr_3 [i_0] = (-(!var_5));
        var_15 ^= ((((((((var_8 ? var_0 : var_8))) ? ((min((arr_0 [0] [0]), 1))) : (arr_0 [16] [16])))) != (max((!var_7), (max(438511337, var_3))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((!(arr_5 [i_1])));
        arr_6 [i_1] = max((((var_13 ? (arr_1 [i_1]) : var_1))), ((((3285 ^ var_6) ? (~1) : (min(1, var_1))))));
    }
    #pragma endscop
}
