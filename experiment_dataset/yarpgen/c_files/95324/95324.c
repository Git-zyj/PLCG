/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 ^= ((0 >> (35 - 28)));
        arr_2 [i_0] = 247;
    }
    var_15 = (max(var_15, 200));
    #pragma endscop
}
