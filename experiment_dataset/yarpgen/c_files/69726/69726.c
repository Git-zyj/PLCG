/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((166 ? 35809 : 893958769282852153));
    var_15 = (max(var_15, var_1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((3 ^ (arr_0 [i_0 + 1] [i_0])))) ? ((1185041538 ? var_6 : 3109925757)) : var_2));
        var_16 -= ((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : var_8);
    }
    var_17 = ((((((var_8 + var_10) ? ((var_7 ? var_2 : 0)) : var_2))) ? (min(((var_10 ? var_3 : var_9)), var_3)) : (((!(!var_13))))));
    #pragma endscop
}
