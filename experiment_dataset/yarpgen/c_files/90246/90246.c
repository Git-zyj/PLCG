/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((~24250) <= ((max(4230313944, 38809)))));
        var_14 = (arr_3 [i_0]);
        arr_4 [9] = (((((-(arr_3 [i_0]))) > (~58))));
    }
    #pragma endscop
}
