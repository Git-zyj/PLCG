/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 -= ((var_3 ? (arr_0 [i_0 + 1] [i_0 - 1]) : ((0 * (1 * 1)))));
                var_12 = ((!var_1) && ((!(arr_1 [i_0] [i_0 - 1]))));
                var_13 = (((~var_8) ? (arr_3 [i_0] [i_1]) : ((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_14 = var_4;

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_15 = var_7;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_16 [i_2] [i_3] [23] [21] [i_5] [1] = var_5;
                                var_16 = var_4;
                            }
                        }
                    }
                    var_17 = ((-(arr_13 [i_2] [i_2] [i_2 - 1] [i_2])));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_18 = ((((((arr_5 [i_2]) ? (arr_14 [i_2] [i_2] [i_4] [i_7] [i_2] [1] [i_2 - 1]) : (arr_17 [i_2] [i_3] [i_3] [i_7] [i_3])))) && (((var_6 ? (arr_7 [i_2 - 1]) : var_4)))));
                        arr_20 [i_2 - 1] [i_3] [i_4] [i_7] = (max(((var_10 ? var_0 : (arr_19 [i_2] [i_3] [13] [i_7]))), (arr_19 [i_2] [11] [i_4] [i_7])));
                        var_19 = var_0;
                    }
                }
            }
        }
        var_20 = min((arr_5 [i_2 - 1]), (((arr_5 [i_2 - 1]) ? var_10 : (arr_5 [i_2 - 1]))));
    }
    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_21 += (arr_24 [i_8 - 1]);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_22 = var_3;
                    var_23 = -1;
                }
            }
        }
        var_24 = var_0;
        var_25 = (max(var_25, var_3));
    }
    for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_26 = (((((3068416058 < (arr_29 [1] [8])))) - var_6));
        arr_33 [23] = (~var_4);
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_27 = ((+(((arr_7 [i_12]) ? var_1 : (arr_7 [i_12])))));
        var_28 = (arr_30 [i_12] [i_12]);
        var_29 += (arr_6 [i_12]);
    }
    #pragma endscop
}
