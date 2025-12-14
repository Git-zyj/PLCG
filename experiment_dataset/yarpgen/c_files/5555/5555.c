/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 - 1] [i_0]);
        arr_3 [i_0] = 2854593019918295418;
        arr_4 [i_0] = ((var_13 + (arr_0 [i_0])));
        var_18 = (max(var_18, (arr_1 [i_0] [i_0 - 1])));
        arr_5 [i_0] [i_0] = (((8173 | var_4) / (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_19 = 7268;
        var_20 = ((((min(1160405848, 39528))) ? ((((~(arr_6 [i_1]))) | ((max(7247, 14088))))) : 31268));
    }
    var_21 = ((var_8 ? (((-15501 - var_10) ? var_12 : var_10)) : (((var_13 ? 111 : -14080)))));
    var_22 = 1658044499;
    var_23 = ((var_4 ^ var_5) - (min(var_5, var_11)));
    #pragma endscop
}
