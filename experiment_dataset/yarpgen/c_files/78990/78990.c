/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, 1));
        arr_2 [i_0] [i_0] = ((((min(var_13, 12))) || ((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_5)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = arr_4 [i_1] [i_1];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [1] = ((-(((arr_11 [i_2] [i_2] [i_2] [i_1]) ? (((arr_8 [i_1] [i_2] [i_1]) * 0)) : (~var_7)))));
                    var_18 = (max(var_18, var_11));
                    arr_15 [i_3] [i_2] [i_2] [i_1] = var_12;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_20 [i_4] = (arr_16 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((((var_8 ? var_7 : (arr_26 [i_4] [i_5] [i_6] [i_7] [i_7] [i_7])))) && (arr_24 [i_8] [i_7] [i_5] [i_4])))) / (((arr_19 [i_4]) ? ((min(34477, 1))) : ((min(1, 35))))))))));
                                arr_31 [i_4] [i_4] [i_4] [i_7] = (((min(((1 ? var_0 : var_6)), 65535)) + (((arr_29 [i_8] [i_7] [i_7] [i_5] [i_4]) ? (arr_16 [i_4]) : -1))));
                                arr_32 [1] [i_5] [i_7] [i_5] [i_5] = (max(-var_14, var_15));
                                var_20 = (min(var_20, (255 / 61116)));
                            }
                        }
                    }
                    arr_33 [i_6] = var_0;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_39 [i_4] [i_4] [i_4] [i_4] [i_9] = (((((var_0 ? ((min((arr_22 [i_6] [i_6]), 11738))) : (((arr_26 [i_4] [i_10 - 1] [i_9] [i_9] [1] [4]) ? (arr_16 [i_4]) : 6))))) ? (max((((arr_26 [i_4] [i_4] [i_9] [i_6] [i_4] [i_10]) ? 0 : var_1)), (arr_19 [i_10 - 1]))) : ((min((arr_17 [i_10 - 1]), 65281)))));
                                var_21 = ((((max(2730, 17303))) & (((1 + 1) << (arr_34 [i_5] [i_5])))));
                            }
                        }
                    }
                    arr_40 [i_6] [16] = (!0);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        var_22 = var_3;
        var_23 = (min(var_23, (arr_30 [i_11] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1])));
    }
    var_24 = 1;
    #pragma endscop
}
