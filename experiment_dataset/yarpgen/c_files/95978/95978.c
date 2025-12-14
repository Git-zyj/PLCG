/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 -= ((1 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_22 = (min(var_22, ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (((arr_0 [i_0] [i_0]) + 35)))))));
        arr_2 [i_0] [i_0] = ((!(((0 ? 7 : var_2)))));
    }
    var_23 += min(((min(0, 90))), 15);
    var_24 &= var_15;
    #pragma endscop
}
