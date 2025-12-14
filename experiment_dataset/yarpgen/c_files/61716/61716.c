/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_10 - (arr_0 [8]))) - 127);
        arr_3 [i_0] = ((var_0 ? ((((arr_0 [i_0]) >> (((arr_1 [1]) - 127))))) : var_19));
    }
    var_20 = var_4;
    var_21 = (((!1) ? (!var_10) : var_17));
    var_22 = (((((-(var_11 / var_13)))) - ((var_13 ? (((127 ? -127 : -16032))) : ((var_2 ? var_9 : 1))))));
    #pragma endscop
}
