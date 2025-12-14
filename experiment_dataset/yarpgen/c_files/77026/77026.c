/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = var_2;
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = ((1355037242 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_19 = (max((arr_1 [i_0]), 145));
        var_20 = (max((arr_0 [i_0]), var_13));
    }
    var_21 = (max(var_13, ((-((1065344168125457508 ? 2939930062 : var_11))))));
    #pragma endscop
}
