/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_1;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_13 += (arr_2 [i_0 - 4]);
        arr_3 [0] = (min(12, var_10));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_14 = (min(((13 & (arr_5 [i_1 - 3]))), (((~(arr_6 [i_1]))))));
        var_15 = 4294967284;
    }
    #pragma endscop
}
