/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 && ((min((18446744073709551615 | var_0), var_15)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = -913540909;
        var_19 = ((!(((arr_0 [0]) > (arr_0 [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((18446744073709551615 ? (arr_2 [i_1]) : (arr_2 [i_1 - 1]))) >> (var_0 - 6819639848523206678)));
        var_20 *= var_12;
    }
    var_21 = 12623;
    var_22 = (min((min((var_12 >= var_1), (max(7242, var_13)))), var_11));
    #pragma endscop
}
