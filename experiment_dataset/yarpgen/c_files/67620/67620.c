/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_0] [i_0] [i_1 - 2] [i_2]);
                    var_17 -= (arr_5 [i_0 - 1] [i_1 - 1] [i_2]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = var_6;
        arr_11 [i_3] [i_3] = ((var_13 ? (((((var_8 || (arr_7 [i_3]))) ? (arr_7 [i_3]) : (arr_9 [i_3])))) : ((((min((arr_8 [i_3]), 2097151))) ? var_1 : var_2))));
        var_18 = (((((var_3 / (arr_7 [i_3])))) || (!-7774013647011518673)));
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_15 [12] [12] = (((18446744073709551615 + var_11) ? var_1 : (min(var_5, var_0))));
        var_19 = (((((-192 ? var_14 : 63))) ? var_1 : (max(var_8, (arr_13 [6] [i_4 + 2])))));
    }
    #pragma endscop
}
