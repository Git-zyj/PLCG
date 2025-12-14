/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_3 | var_8) ? (((var_11 ? var_1 : var_14))) : var_6)));
    var_17 = (min(var_17, (((((max(var_7, var_8))) - (((((var_12 ? var_1 : 15876))) ? ((min(111, var_10))) : 23459)))))));
    var_18 |= ((((((~var_6) ? var_14 : (((var_10 ? var_10 : 42076)))))) ? var_11 : ((((max(var_7, var_13))) | var_15))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max(var_11, var_3)));
        arr_3 [i_0] = -126;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (!2073351124);
        arr_6 [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_20 = (max(-120, 16556527841233490917));
        arr_9 [i_2] = ((var_1 << ((((109 ? 29125 : (2147483648 / 1))) - 29111))));
        var_21 = (min(var_21, (-127 - 1)));
    }
    #pragma endscop
}
