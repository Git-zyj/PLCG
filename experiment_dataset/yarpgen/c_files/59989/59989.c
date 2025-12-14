/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= -var_13;
    var_19 = 0;
    var_20 = (max(1, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 += 0;
        var_22 = (((((arr_0 [i_0]) * (arr_1 [i_0])))) ? (~7867578968540179475) : ((((-9223372036854775807 - 1) ^ 250))));
        var_23 *= 250;
    }
    var_24 = (max((max(var_11, 0)), (((((var_5 ? 408740036 : var_7))) ? ((var_8 ? var_2 : var_5)) : var_9))));
    #pragma endscop
}
