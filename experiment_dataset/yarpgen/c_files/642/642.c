/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (((((var_8 ? var_4 : (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_11 |= var_8;
    }
    var_12 *= (((min((!var_1), var_6))) || (((var_7 || var_3) && 4642)));
    var_13 = ((var_0 ? (((var_3 / var_6) + var_3)) : var_0));
    var_14 = ((((((63574 < ((1961 << (((((-9223372036854775807 - 1) - -9223372036854775803)) + 25)))))))) > (var_1 | var_2)));
    #pragma endscop
}
