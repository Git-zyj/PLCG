/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 += max((((((var_7 ? var_1 : -121)) < 549754765312))), var_8);
        var_13 = 18473;
    }

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 = min(((13 << ((((var_8 ? 122 : var_3)) - 117)))), var_6);
        arr_4 [i_1] = 11;
    }
    #pragma endscop
}
