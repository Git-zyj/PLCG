/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0 - 2] = 1173750402;
    }
    var_11 = ((var_6 / (max((0 - 1), (~285017093)))));
    #pragma endscop
}
