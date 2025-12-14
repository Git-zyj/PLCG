/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = ((!(arr_12 [i_3] [i_1] [i_2] [i_3])));
                                arr_15 [i_0] [i_4] [i_0] [10] [i_0] &= var_9;
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((var_13 ? (min(161, -5063989373470868961)) : var_6));
                            }
                        }
                    }
                    arr_17 [i_2] [16] [16] [i_0] |= ((((arr_9 [4]) ? (arr_14 [i_0] [i_1] [18] [18]) : 2111248855)));
                }
            }
        }
    }
    var_15 = min(((((((var_6 ? var_12 : var_10))) ? -var_7 : var_13))), -var_0);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_16 = (arr_30 [i_5] [i_6] [i_6] [i_8] [i_8] [i_9]);
                                var_17 = 7373506133682639308;
                                var_18 += var_11;
                            }
                        }
                    }
                    var_19 = (arr_30 [i_6 + 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                    arr_32 [i_5] [i_6] [i_5] = (((~-5063989373470868978) ? (5017614854384970469 && 0) : ((~(arr_22 [i_5] [i_5] [i_5])))));
                    arr_33 [i_7] [i_6] |= (arr_21 [i_6 + 1] [i_7 + 1]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_5] = (arr_35 [12] [i_10] [4]);
                        arr_44 [i_5] = (~var_12);
                    }
                }
            }
        }
        var_20 = (min(var_20, ((((~2113254537660922559) >> (8618054404294975606 - 8618054404294975543))))));
        var_21 = (arr_35 [i_5] [i_5] [i_5]);
        var_22 = arr_23 [i_5] [i_5];
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (arr_24 [i_13])));
        var_24 = (max(var_24, ((((arr_40 [4] [8]) / (max((arr_40 [i_13] [6]), (arr_45 [i_13] [i_13]))))))));
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] = ((((~(arr_19 [i_14] [i_14])))) ? (max((((var_7 ? (arr_24 [i_14]) : (arr_49 [i_14])))), (max(var_9, var_6)))) : (arr_42 [i_14] [i_14] [4] [i_14] [i_14]));
        var_25 = 7168;
    }
    #pragma endscop
}
