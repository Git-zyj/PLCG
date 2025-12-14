/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = 1;
        arr_3 [i_0] = min(1, (((1 ? var_7 : -1195471862))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = var_8;
        var_11 = (min(1, ((var_2 ? var_0 : 1))));
    }
    var_12 = 97038784;
    var_13 = (max(var_13, (((859337606 ? 1 : ((var_6 ? 1 : var_3)))))));
    var_14 = 1195471871;
    #pragma endscop
}
