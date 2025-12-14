/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (~(((~(arr_0 [i_0])))));
        arr_2 [0] = ((11280 ? (((arr_1 [i_0 - 2]) ? (arr_0 [i_0]) : ((max(var_3, var_12))))) : (((arr_0 [5]) ? (((arr_1 [i_0 + 1]) + var_0)) : var_11))));
        arr_3 [10] &= ((var_12 ? (arr_1 [i_0 - 1]) : var_5));
        arr_4 [i_0] = ((var_1 - ((((((~(arr_1 [i_0 + 1]))) <= (27181 * -32751)))))));
        var_20 = (max((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (((!(arr_1 [i_0 - 1]))))));
    }
    var_21 -= ((((max(var_3, var_16))) ? 0 : (((!var_12) ? (min(7605380130851208895, var_3)) : (((var_5 ? 1 : var_5)))))));
    #pragma endscop
}
