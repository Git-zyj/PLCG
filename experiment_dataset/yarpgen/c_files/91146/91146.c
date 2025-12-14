/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((~((~(~var_2)))));
    var_13 = 3236625087090200159;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 = (~var_1);
        var_15 = ((-(arr_0 [i_0])));
        var_16 = ((-(!1532022501)));
        var_17 = (min(var_17, -45));
        var_18 = (~303966116);
    }
    #pragma endscop
}
