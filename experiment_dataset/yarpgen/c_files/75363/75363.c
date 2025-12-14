/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = ((var_8 != ((min(11374, var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = arr_2 [i_0];
        var_21 = (arr_0 [i_0]);
    }
    #pragma endscop
}
