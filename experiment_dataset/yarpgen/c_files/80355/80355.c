/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_3);
    var_16 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((((arr_0 [i_0]) % var_10)) + 9223372036854775807)) >> (3256915454 && 50)));
        var_18 ^= var_3;
        var_19 = (((2102625855 * -1438) ? -1 : ((254 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [2])))));
        var_20 -= (var_4 & var_14);
    }
    #pragma endscop
}
