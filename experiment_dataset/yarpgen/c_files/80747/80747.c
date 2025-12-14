/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [5] = (((arr_0 [6]) && 10694));
        var_10 = (5169975107484780106 ? 1 : (arr_2 [10] [8]));
    }
    var_11 = (max(var_11, var_5));
    #pragma endscop
}
