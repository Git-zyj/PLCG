/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((~((1 ? var_2 : var_7))));
        var_17 = (max(var_17, ((!((((arr_2 [2]) ? 0 : 0)))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1]);
        var_18 = ((18446744073709551601 ? (arr_4 [i_1]) : var_11));
        var_19 = ((~(((((5669 ? 0 : (arr_2 [i_1])))) ? (~80) : 1))));
    }
    var_20 = (min(var_20, ((min(((var_7 ? (~var_1) : ((min(var_0, 24576))))), 1)))));
    var_21 = var_13;
    var_22 = (min(1, var_12));
    #pragma endscop
}
