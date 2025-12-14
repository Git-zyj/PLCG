/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 &= ((~((-((0 - (arr_1 [8])))))));
        var_13 = var_5;
        var_14 += (~(((max(62, (arr_1 [2]))) / (58 || var_7))));
    }
    var_15 = var_8;
    #pragma endscop
}
