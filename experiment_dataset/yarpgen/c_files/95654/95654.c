/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 ^= ((~((1088043445 ? 4294967295 : 2073123171))));
        arr_4 [i_0] = ((var_10 < (-10488 | var_9)));
    }
    var_18 += ((+(((1171221879 >= 977268119) ? (var_0 & var_2) : var_13))));
    #pragma endscop
}
