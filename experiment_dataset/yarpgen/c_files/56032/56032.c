/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [i_0]) ^ (((arr_1 [i_0] [i_0]) & (arr_0 [i_0] [14])))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_14 = var_4;
    var_15 = 1874141585;
    var_16 = -4294967295;
    #pragma endscop
}
