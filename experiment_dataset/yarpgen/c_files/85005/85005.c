/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 -= ((min(((~(arr_0 [i_0] [i_0]))), -0)));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_16 = var_7;
    var_17 = (max(var_17, (((((~(~var_10))) | var_5)))));
    #pragma endscop
}
