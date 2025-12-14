/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((((max(-1647536180, 18446744073709551615))) ? -var_9 : var_6))) ? (max(var_9, var_10)) : var_12)))));
    var_14 = ((max(var_11, ((var_2 ? 65535 : 672158338)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_8;
        arr_4 [i_0] [i_0] = ((-(max(var_5, (min((arr_0 [9]), var_7))))));
        arr_5 [i_0] = (max((arr_0 [i_0]), (((arr_0 [i_0]) + (arr_1 [i_0])))));
        var_15 &= 1;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_16 [i_3] [i_2] [i_2] [i_1] = 3622808957;
                    var_16 = (max(var_16, (((((var_6 ? (!var_1) : (arr_6 [i_3]))) ^ -var_2)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_23 [i_1] [i_2] [4] [i_4] [0] &= (((arr_20 [i_1 - 2] [6] [i_3] [i_5 + 2] [i_2] [i_1 + 1]) <= ((-(arr_20 [i_1 + 2] [i_1 + 2] [i_3] [i_5 - 1] [i_5 + 2] [i_2])))));
                                var_17 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((max((arr_0 [13]), 9571153484668025572))) ? var_0 : (arr_2 [i_1])))))));
                                var_19 = (max(var_19, (arr_11 [i_7])));
                            }
                        }
                    }
                }
            }
        }
        var_20 -= var_4;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_21 = (arr_1 [i_8]);
        var_22 = ((~(((arr_32 [i_8]) | var_11))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        var_23 = (min(var_23, var_6));
                        arr_41 [i_8] [i_8] [i_9] [i_8] &= ((var_2 ? var_8 : var_1));
                        var_24 = (((arr_2 [i_11]) & (arr_2 [i_8])));
                    }
                }
            }
        }
        var_25 = (min(var_25, (arr_38 [i_8] [3] [i_8])));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_26 = (~-var_7);
        var_27 = 2147483647;
    }
    #pragma endscop
}
