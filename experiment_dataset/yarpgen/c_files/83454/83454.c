/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        var_12 = 65525;
    }
    var_13 = (max(var_13, (((((((((var_8 ? var_1 : -6502078976172874960))) ? ((63 ? 6502078976172874945 : var_6)) : 0))) ? var_0 : ((var_6 ? ((112 ? var_10 : var_2)) : (((134086656 ? 6502078976172874960 : 63))))))))));
    var_14 = (((((-8934 ? ((3 ? var_7 : var_8)) : 511))) ? ((max(((-1 ? 768 : 1131376611)), 1))) : ((-8 ? (0 % 480) : 120))));
    #pragma endscop
}
