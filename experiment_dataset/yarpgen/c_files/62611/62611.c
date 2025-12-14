/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = var_6;
        var_15 = (max((max(var_13, -87)), (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_16 = (~87);
        var_17 = ((16840637401288569395 >> (-88 - 107)));
    }
    var_18 = var_9;
    #pragma endscop
}
