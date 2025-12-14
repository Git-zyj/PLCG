/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_17 = (max(var_17, (!2889163032)));
        var_18 = (arr_1 [i_0]);
        arr_4 [4] [i_0] = (((arr_0 [i_0]) * (arr_0 [i_0])));
    }
    var_19 = (!var_4);
    var_20 = -23;
    #pragma endscop
}
