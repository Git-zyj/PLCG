/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = ((var_9 ? ((max(var_11, 1))) : ((5501688364596772378 ? -1045063379 : 19428))));
        arr_4 [i_0 - 2] [i_0 - 2] = var_17;
        var_19 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 -= ((var_4 ? var_15 : var_8));
        arr_8 [i_1 - 1] = (((((var_4 ? var_7 : -19412))) ? ((var_16 ? var_16 : 1)) : 1));
    }
    var_21 = (var_9 ? ((((max(0, var_8))) ? 4094 : var_5)) : var_17);
    #pragma endscop
}
