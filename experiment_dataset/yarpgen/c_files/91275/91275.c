/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) + -var_11));
        var_21 = (((arr_1 [2]) ? ((min(-31609, 1))) : (arr_0 [i_0])));
    }
    var_22 = var_5;
    var_23 -= ((~((0 ? ((21318 ? 0 : var_0)) : var_10))));
    #pragma endscop
}
