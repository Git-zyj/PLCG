/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (-30145 | 960);
        arr_3 [i_0] |= (arr_1 [i_0]);
        var_16 ^= var_0;
    }
    var_17 += var_0;
    var_18 = ((!(938 && 135)));
    #pragma endscop
}
