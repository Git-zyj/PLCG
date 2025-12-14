/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (!var_1);
        var_12 = (((arr_1 [i_0 - 1]) != (arr_1 [i_0 - 1])));
        arr_2 [i_0] [i_0] = var_1;
    }
    var_13 = (max(var_13, var_5));
    var_14 = (min(var_14, var_1));
    var_15 = var_9;
    #pragma endscop
}
