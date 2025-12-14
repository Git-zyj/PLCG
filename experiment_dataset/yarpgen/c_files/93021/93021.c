/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (((((var_11 ? ((max(var_13, var_5))) : var_0))) && 3223980397));
    var_17 = ((var_4 ? var_10 : ((((1 / var_9) ? var_1 : ((var_10 ? var_0 : 9190882812749710251)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_1;
        var_18 ^= var_1;
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_8 [i_1]) ? 1 : (3412161746 * var_13)));
        var_20 = ((-6844655778754490768 / (((var_8 ? 1 : (arr_7 [i_1] [i_1]))))));
    }
    #pragma endscop
}
