/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_16 / var_9) ? (min(var_11, var_8)) : -var_9))) ? ((((min(var_6, var_2))) ? ((var_10 ? var_8 : var_17)) : ((max(var_3, var_17))))) : -69));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_20 ^= (arr_0 [i_0] [i_0]);
        var_21 ^= ((~((-(arr_1 [i_0] [i_0])))));
    }
    var_22 = (((max(((var_9 ? var_16 : var_4)), (((var_6 << (var_3 - 20843)))))) << (min((min(var_18, var_6)), var_8))));
    #pragma endscop
}
