/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [4] [4] &= -32765;
        arr_3 [i_0] = 16113;
    }
    var_13 = ((var_11 / (max((-32766 - 1879021488), 242))));
    #pragma endscop
}
