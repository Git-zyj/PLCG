/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0 + 1] [i_0 + 1]);
        var_17 ^= ((((((~1350535005) < (arr_1 [i_0 - 4] [9])))) - var_3));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((var_11 | (arr_2 [i_1 + 2]))))));
        var_19 &= ((var_15 ? (arr_2 [i_1]) : var_8));
    }
    var_20 = (var_3 & var_12);
    #pragma endscop
}
