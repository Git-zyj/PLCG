/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((~-var_10) ? var_10 : var_6))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 = ((var_14 ? -439544470034560580 : (min(439544470034560579, 0))));
        var_18 *= (((((var_5 << (((arr_1 [8] [8]) - 1941174297)))) > -439544470034560580)) ? (max(var_0, (max(0, 576460752034988032)))) : 18446744073709551596);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 -= (var_12 + var_11);
        var_20 += (min((((((-2 ? var_6 : (arr_1 [8] [i_1]))) < (arr_0 [12] [i_1])))), ((var_12 ? (min((arr_2 [i_1 + 2] [i_1]), 835130886)) : var_11))));
    }
    var_21 = (min(var_21, ((((((min(-439544470034560580, var_3))) ? var_2 : (~-5469254647030227692)))))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_22 = var_4;
        var_23 = var_1;
    }
    #pragma endscop
}
