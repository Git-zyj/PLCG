/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (max(var_21, var_7));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(var_22, ((min((((1591430671 ? 1591430671 : var_18))), var_1)))));
        var_23 = (((min(var_11, (arr_0 [i_0])))));
    }
    #pragma endscop
}
