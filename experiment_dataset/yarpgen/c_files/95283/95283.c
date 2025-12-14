/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (max(((max((min((arr_0 [i_0]), 1)), ((min(1, 0)))))), (!16143)));
        var_16 = (max(var_16, (((-((min((-32767 - 1), 1))))))));
        var_17 = -15239;
    }
    var_18 = (((var_0 & -94) ^ (((~var_1) ? 245760 : (14 | 6747279646609359101)))));
    #pragma endscop
}
