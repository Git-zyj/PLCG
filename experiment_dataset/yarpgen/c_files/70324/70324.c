/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((-(max(1360547335, var_12)))), var_10));
    var_17 &= var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (!0));
        var_18 = ((((max((min((arr_0 [3]), 32767)), (arr_0 [i_0])))) * (arr_1 [i_0] [i_0])));
        var_19 = (arr_0 [i_0]);
    }
    #pragma endscop
}
