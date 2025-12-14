/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(((208 ? 353502561 : var_4)))))) * var_16));
    var_21 = (~var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_22 = (max(var_22, var_7));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_23 = -2147483646;
                    var_24 = var_2;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_25 = (min(var_25, (!-1023612754)));
        arr_12 [i_3] = (((arr_5 [i_3] [1]) / (arr_5 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_26 = (2147483646 - var_12);
        var_27 = (((~-4) ? ((var_16 ? var_12 : var_11)) : ((var_19 ? (arr_1 [2] [2]) : var_1))));
        arr_16 [i_4] = (~94);
        arr_17 [i_4] &= ((arr_5 [2] [i_4 - 1]) || (arr_5 [8] [8]));
        var_28 = -var_12;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        arr_20 [i_5 - 1] = var_11;
        var_29 = (max(var_29, (arr_5 [0] [0])));
        var_30 *= (!var_3);
    }
    #pragma endscop
}
