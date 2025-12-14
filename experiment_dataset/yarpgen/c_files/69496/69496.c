/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_3 ? ((4083598026610442033 ? (((287948901175001088 ? var_9 : 135135958))) : (min(6336, var_4)))) : (!6336))))));
    var_16 = ((((-255661034 ? (6336 / var_5) : var_14))) ? var_3 : var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_1;
        var_18 += ((var_9 ? (4 && var_6) : -5982401500477022919));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] &= (((((-(!2147483647)))) ? ((((!(((127 ? var_3 : var_1))))))) : 287948901175001059));
        arr_7 [i_1] = (min(-123, (arr_3 [i_1] [i_1])));
    }
    #pragma endscop
}
