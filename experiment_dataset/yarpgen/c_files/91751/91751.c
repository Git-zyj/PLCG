/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_16, var_2));
        var_17 = (-(((-7414574179957175488 / var_7) ? (var_10 / var_3) : (17430049091990568305 / var_2))));
        var_18 = (((--1016694981718983294) % (((((0 > var_2) <= (1 > var_2)))))));
        var_19 = var_7;
        var_20 = ((18446744073709551615 * ((((((5772 ? var_1 : (-9223372036854775807 - 1)))) == (min(var_7, 1016694981718983326)))))));
    }
    var_21 = (max((5 / 1), (((~(!var_12))))));
    #pragma endscop
}
