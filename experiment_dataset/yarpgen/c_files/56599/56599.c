/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_11 = var_10;
        arr_4 [i_0 - 1] [i_0 - 1] = ((((((arr_1 [i_0 - 1]) | var_9))) ? ((var_1 ? (arr_1 [i_0]) : var_1)) : (arr_3 [i_0])));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_3 [i_1]);
        var_13 = (max(var_13, ((min(-var_1, ((~(~9223372036854775807))))))));
    }
    var_14 = ((+(((!0) ^ var_8))));
    #pragma endscop
}
