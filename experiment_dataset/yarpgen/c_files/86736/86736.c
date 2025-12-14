/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [0] = (arr_0 [i_0]);
        var_16 = (max(var_16, (arr_0 [4])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = var_3;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_18 = var_8;
            arr_9 [i_1] [i_1] = (max((arr_2 [i_1]), -var_13));
            var_19 = arr_7 [i_1];
            var_20 = arr_5 [i_1] [i_2];
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_21 = 28098;
            arr_12 [i_1] [i_3] = ((((min(32767, (min(var_13, var_1))))) ? ((~((max(var_4, (arr_7 [i_3])))))) : var_0));
        }
        var_22 = ((-6385 ? 28098 : var_2));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((arr_14 [i_4]) ? var_13 : (arr_14 [i_4])));
        arr_16 [i_4] = var_4;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] [i_5] &= ((!((max(var_10, (arr_8 [i_5] [i_5]))))));
        arr_20 [i_5] [i_5] = max(-var_11, ((max(var_8, var_12))));
    }
    var_23 -= max(var_5, -32255);
    #pragma endscop
}
