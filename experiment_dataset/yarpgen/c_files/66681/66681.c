/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (~var_10)));
    var_19 = -398519663;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [16])));
        var_21 = 18446744073709551598;
        var_22 = ((~var_14) || 0);
    }
    #pragma endscop
}
