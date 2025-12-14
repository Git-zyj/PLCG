/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 113;
        var_20 ^= (((arr_2 [i_0]) ? (arr_2 [15]) : var_17));
    }
    var_21 = (max(var_21, var_3));
    #pragma endscop
}
