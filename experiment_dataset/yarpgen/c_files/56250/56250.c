/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 &= ((((2428624896092897484 ? -2428624896092897485 : -1)) ^ (arr_1 [i_0])));
        arr_3 [i_0] = ((0 ? -127 : (arr_0 [i_0])));
    }
    var_11 = (((!141) ? (((((-55 ? 24078 : 50))) ? -55 : 4294967283)) : 62));
    var_12 = 8700994792296430825;
    #pragma endscop
}
