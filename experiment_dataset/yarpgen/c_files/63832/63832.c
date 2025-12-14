/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_3;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 += -120;
        arr_2 [i_0] [i_0 + 1] = var_0;
    }
    var_13 = 0;
    var_14 = var_4;
    #pragma endscop
}
