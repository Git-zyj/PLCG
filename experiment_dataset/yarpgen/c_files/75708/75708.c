/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (((((arr_2 [i_0 - 1]) | 64)) / (147 && 4707532027241279599)));
        arr_3 [i_0 - 1] [i_0] = (min(108, 1));
    }
    var_16 = var_1;
    #pragma endscop
}
