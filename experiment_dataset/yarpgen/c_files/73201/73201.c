/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = var_13;
        arr_4 [8] [i_0] = var_3;
    }
    var_19 = (8128 != var_17);
    #pragma endscop
}
