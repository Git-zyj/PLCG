/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = arr_0 [i_0];
        var_21 = (arr_1 [i_0]);
        var_22 = 2147483647;
        arr_3 [i_0] = var_4;
    }
    var_23 = ((!((!(var_6 || 1)))));
    var_24 = 1;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_25 = ((~((var_1 ? (arr_4 [i_1]) : var_3))));
        var_26 = (max(var_26, var_16));
        arr_8 [i_1] [i_1] = ((96 ? (arr_5 [i_1]) : 1));
        arr_9 [i_1] = (arr_4 [0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_27 ^= ((-(!var_6)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_28 = (!var_5);

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_5] [i_5] = var_0;
                        var_29 = 19721;
                    }
                    var_30 -= (arr_20 [i_3] [i_2]);
                }
            }
        }
        arr_23 [i_2] [10] = -97;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_31 *= ((-84 ? (!97) : ((1 ? var_13 : var_0))));
        var_32 = (((((var_5 ? (arr_1 [8]) : var_16))) ? var_6 : var_19));
        arr_26 [i_6] = 19720;
    }
    var_33 = ((((16383 % 60) ? (((-45 ? var_7 : 1))) : (var_3 ^ 18446744073709551610))));
    #pragma endscop
}
