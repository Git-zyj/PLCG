/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 += (~0);
        arr_2 [i_0] = (0 * 14);
    }
    var_11 = (max(var_6, (var_5 / var_2)));
    #pragma endscop
}
