/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 -= ((((((arr_1 [i_0]) / (arr_1 [i_0])))) ? (((max(1, 10979)))) : (arr_0 [16] [12])));
        arr_2 [i_0] = ((1391167484540768743 ? 1 : (((~(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (!var_5);
        var_20 = (i_1 % 2 == zero) ? (((((var_1 & (arr_5 [i_1]))) << (((((arr_5 [i_1]) + 130)) - 21))))) : (((((var_1 & (arr_5 [i_1]))) << (((((((arr_5 [i_1]) + 130)) - 21)) - 18)))));
        var_21 = (min(var_21, (arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_22 = (min(var_22, (((-(arr_7 [i_2]))))));
        var_23 -= (((arr_5 [2]) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        arr_8 [i_2] = 1;
        arr_9 [i_2] [i_2] = ((-(arr_4 [i_2] [i_2])));
        var_24 = (((arr_5 [8]) ? (arr_5 [2]) : (arr_5 [10])));
    }
    var_25 = (max(var_25, var_15));
    #pragma endscop
}
