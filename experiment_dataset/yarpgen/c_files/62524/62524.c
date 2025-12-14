/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 136));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = 4294967295;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 - 1]) ? (2147483647 / 1) : -0));
        var_19 ^= 2147483647;
    }
    var_20 = (((((15 ^ 65510) + (!65535))) < 65510));
    #pragma endscop
}
