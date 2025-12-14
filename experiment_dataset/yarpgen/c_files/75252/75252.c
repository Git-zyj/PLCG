/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, -8192));
        arr_3 [i_0] [i_0 - 3] = ((var_2 ? var_9 : (min(1438127980, -8176))));
        var_17 = ((4 ? 0 : 1));
        var_18 = -var_0;
    }
    var_19 = ((-8217 ? (((var_0 >> (var_11 - 12130)))) : ((((min(var_0, 9567170517302577140)))))));
    #pragma endscop
}
