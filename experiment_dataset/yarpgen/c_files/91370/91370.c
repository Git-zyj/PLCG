/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? var_0 : var_14));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (-((var_18 ? (arr_2 [i_0 - 3]) : var_4)));
        var_21 = -61283;
        arr_3 [i_0] = ((((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2])))) ? (~1) : (arr_0 [i_0] [i_0 - 3])));
        var_22 &= ((((((-1 ? -2651570052708521172 : -28072))) ? (((-28045 ? (arr_2 [i_0]) : -2061014471))) : 2651570052708521161)));
        var_23 = (max(((max(var_4, var_4))), var_1));
    }
    var_24 = ((-((2651570052708521156 ? ((13870319203650553533 ? var_12 : 2093056)) : var_9))));
    #pragma endscop
}
