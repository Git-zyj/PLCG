/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += (arr_0 [0] [0]);
        var_15 += (arr_1 [4]);
        var_16 *= (arr_0 [4] [4]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 |= var_8;
        arr_4 [i_1] = var_1;
        arr_5 [5] [i_1] = (arr_2 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = var_8;
        arr_11 [i_2] = (((arr_2 [i_2]) ? var_6 : (arr_8 [i_2] [i_2])));
    }
    var_18 = (min(var_18, ((var_5 ? ((var_4 ? ((var_0 ? var_0 : var_7)) : var_3)) : var_0))));
    #pragma endscop
}
