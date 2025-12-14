/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 & 3);
    var_20 ^= (((((var_11 + (var_14 - var_4)))) ? -var_6 : var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 - 1]);
        var_22 = (min(var_22, (arr_0 [i_0 - 1])));
    }
    #pragma endscop
}
