/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = var_16;
    var_22 = -11964;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_23 = ((-16384 ? 22709 : var_6));
        var_24 = (min(var_24, (((-((-(arr_0 [i_0] [i_0]))))))));
        arr_3 [6] = (((-(arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_25 = ((((((4247610590 ? var_18 : (arr_5 [i_1]))))) ? 2963 : (max(var_1, ((22693 ? var_13 : (arr_0 [i_1] [i_1])))))));
        var_26 = ((((((min(var_4, 22709))) ? ((((arr_0 [i_1] [i_1]) ? var_18 : var_9))) : 32361)) <= var_12));
    }
    #pragma endscop
}
