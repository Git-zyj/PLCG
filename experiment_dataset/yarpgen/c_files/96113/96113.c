/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_9;
        var_12 = -30516;
        var_13 = 252;
        var_14 = ((!(arr_0 [11] [i_0])));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1 + 1] = ((-((-(30516 % 30516)))));
        var_15 -= (~var_6);
    }
    #pragma endscop
}
