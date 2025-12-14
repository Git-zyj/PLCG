/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 2698081436;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0 + 1] = ((((!(var_2 > -640249245))) ? (max(((var_8 ? var_1 : 1)), 10)) : (-6500 | 15)));
        var_14 &= 91;
    }
    var_15 = (min(var_15, -41));
    #pragma endscop
}
