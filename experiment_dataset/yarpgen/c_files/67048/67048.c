/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = ((var_1 ? (-9223372036854775807 - 1) : var_6));
        arr_3 [i_0] = -0;
        var_12 = (min(var_12, (((((var_7 ? 70 : 1203080948)) << ((((-6827 ? (arr_1 [i_0]) : -2990)) - 114)))))));
    }
    var_13 = (((max((~var_8), ((var_8 ? var_1 : var_0))))) ? var_7 : ((-5542019923439374894 ? 170 : -2691472121567531065)));
    var_14 -= ((!302407171559937555) ? 1 : (min(8409665485542230129, 1393573440)));
    #pragma endscop
}
