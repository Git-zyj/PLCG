/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_4 [5] = ((2763295330475831173 || (arr_0 [i_0])));
        var_14 += (((arr_0 [i_0 - 1]) + (arr_0 [i_0 + 1])));
        var_15 = -4294967294;
    }
    #pragma endscop
}
