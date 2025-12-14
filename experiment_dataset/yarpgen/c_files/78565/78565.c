/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((((((max(var_5, var_9))) ? (max(var_4, var_0)) : ((1 ? 1 : -22926))))) ? (min(((max(var_5, -18114))), -22918)) : (((182 ? 1 : (!var_4))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_12 = arr_0 [i_0 + 1];
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
