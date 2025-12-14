/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 18444802465122338616;
    var_17 = (max(var_17, (-95 / -95)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (max(-95, -120));
        var_18 += ((((((var_4 ? var_9 : var_6))) ? (arr_3 [i_0]) : (~-90))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = var_3;
        var_20 = ((0 ? var_8 : (arr_6 [i_1] [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_16 [i_2] [i_3] = ((-90 ? 104 : 1739769963));
                    var_21 = var_4;
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_22 += 1691022092;
                                var_23 |= -472476969;
                                var_24 = (arr_7 [i_1 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_25 = ((-var_12 ? 7 : ((94 ? -1739769964 : 44973))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_26 = (max(var_26, (((((min(47281, (arr_22 [i_6 - 1] [i_7 - 1])))) / -1)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_37 [i_7] [12] [14] [9] = (((((arr_15 [i_6] [i_6 - 1]) ? ((var_4 ? (arr_21 [i_6] [i_7] [i_6] [i_6] [i_6]) : var_8)) : ((max(var_15, (arr_19 [i_6] [i_8] [i_9]))))))) ? ((min(54059, (arr_14 [i_7 - 1] [i_6 + 1] [7] [i_9])))) : -497127104);
                                var_27 = (max(((var_3 ? (arr_23 [i_6 - 2]) : 255)), ((91 ? 54069 : (arr_23 [i_6 + 1])))));
                                var_28 = (((44967 / 102) & (((arr_29 [i_7 + 1] [12] [i_7 + 1] [i_7]) | var_1))));
                                arr_38 [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_7] = ((var_10 && ((((arr_5 [i_6]) ? 20568 : var_11)))));
                            }
                        }
                    }
                    var_29 = (max(var_29, -727819700));
                }
            }
        }
        var_30 = (((var_8 / var_1) ? (-109 * 85) : (min(56061933, (arr_6 [i_6 - 4] [i_6])))));
    }
    var_31 = var_15;
    #pragma endscop
}
