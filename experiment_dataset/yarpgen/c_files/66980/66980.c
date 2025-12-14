/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_1;
    var_13 = (max(var_13, ((max(224, 2147483647)))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_14 = var_6;
        var_15 = var_9;
    }

    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_16 = ((var_10 << (251 == var_5)));
        arr_4 [i_1 + 1] = ((var_11 / ((var_4 ? (arr_3 [i_1 + 1] [i_1 - 1]) : var_7))));
    }
    #pragma endscop
}
