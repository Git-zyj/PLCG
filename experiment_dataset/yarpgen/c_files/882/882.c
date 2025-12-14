/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 &= 316099687;
        arr_3 [i_0] [5] = ((1405686469 ? (-9223372036854775807 - 1) : (var_6 | var_2)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = -316099689;
        var_17 |= (max((((-(((arr_1 [i_1] [i_1]) ? 1405686459 : 1))))), (min((arr_0 [3] [5]), (min(-1937172245327893574, var_4))))));
        var_18 = (((632919146 % -27199) % (((247 % var_6) ? (arr_5 [i_1]) : (((var_10 ? var_11 : -18739)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((arr_6 [i_2]) || var_3)))));
        var_20 = ((var_12 ? (arr_7 [i_2]) : var_8));
        var_21 = (~(arr_2 [i_2]));
        var_22 = (-316099661 % 6993027481732024895);
    }
    var_23 = (min((min(var_4, (min(5676, 1920)))), var_3));
    #pragma endscop
}
