/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((var_5 ? var_3 : var_0))));
        var_19 += (~-var_3);
        var_20 = ((var_8 ? ((((((var_15 ? var_3 : var_0)) != (((var_5 ? 13801 : -710924485))))))) : (((~-118) ? var_2 : var_5))));
        var_21 = (max(var_21, (((((var_7 & var_0) ? ((var_6 << (var_13 - 1))) : (!var_6)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = var_5;
        var_23 = ((((var_10 ? var_9 : var_9)) / var_15));

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_24 = var_11;
            var_25 = var_2;
        }
        arr_10 [i_1] = var_4;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = var_3;
        arr_14 [i_3] = (~-69);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_26 = (min(var_26, (max(((1 ? var_11 : var_13)), (((var_4 != (((var_0 ? var_5 : var_1))))))))));
        arr_17 [i_4] = (((((2227013514 ? 0 : var_10))) ? (((((var_8 ? var_9 : var_7)) >= ((var_5 ? var_8 : 1))))) : ((((max(-4462701861351413299, var_11))) ? ((max(var_10, 47974))) : ((max(var_10, var_15)))))));
    }
    #pragma endscop
}
