/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 = var_4;
        arr_3 [i_0] &= (arr_0 [i_0]);
    }
    var_21 = ((var_10 ^ var_13) * (max(239, -307095750)));
    var_22 = var_7;
    #pragma endscop
}
