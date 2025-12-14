/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_10 >= var_18);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((var_6 ? 1472040062 : 28));
        var_21 = (((arr_2 [i_0]) + -1472040063));
    }
    #pragma endscop
}
