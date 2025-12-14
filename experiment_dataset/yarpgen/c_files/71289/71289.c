/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = -27221;
        var_18 += (max((min(146, var_0)), (107 || var_6)));
        arr_3 [i_0] = (min((!var_7), (!513438297)));
    }
    #pragma endscop
}
