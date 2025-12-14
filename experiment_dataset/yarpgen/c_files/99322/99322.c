/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max((((1 && 1985618048) + ((max(var_8, -126))))), var_6));
    var_18 = (max(var_18, ((max((max(var_13, var_13)), var_6)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = arr_0 [i_0] [i_0];
        var_20 = (max((((arr_0 [i_0] [i_0 - 1]) | (arr_1 [i_0 - 1] [i_0]))), 123));
    }
    var_21 = 4020406061;
    #pragma endscop
}
