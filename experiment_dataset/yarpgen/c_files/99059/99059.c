/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (max(var_1, var_8));
    var_13 = ((var_7 ? ((((100 ? 2292066051363138355 : 13709583040886861282)) | ((var_1 ? var_4 : var_8)))) : (((((!var_5) && var_5))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(1, -18));
        var_15 = var_2;
    }
    #pragma endscop
}
