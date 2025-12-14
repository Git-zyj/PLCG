/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_11 = var_4;
        var_12 = (((((3334 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 3])))) ? ((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3])))) : (((var_3 > 1) ? ((max(-18, 898090635))) : (min((arr_1 [i_0 + 1]), var_3))))));
    }
    var_13 |= ((var_5 ? var_9 : ((var_1 ? ((1 ? var_10 : 46583)) : var_8))));
    var_14 = (min((((((0 ? 7113877164955181548 : var_7))) && (((var_0 ? var_2 : var_0))))), var_4));
    #pragma endscop
}
