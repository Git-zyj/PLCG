/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] = (((arr_2 [5]) % var_3));
                                arr_13 [i_4] [12] [i_2] [i_0] [i_0] [i_0] [i_0] = (min(((((arr_2 [10]) ? 32757 : (arr_0 [i_0])))), (((((var_18 ? (arr_6 [0] [10] [i_2]) : (arr_8 [i_1] [i_1] [i_3] [i_4]))) != (~32757))))));
                                var_20 |= (((~(arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 3]))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] |= ((!(max(0, 1))));
                                arr_15 [i_0] [i_0] [1] [i_2] [i_0] [i_3] [i_4] = 605507204095117059;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_7] [6] [i_6 + 1] [i_7] |= (min((arr_0 [i_7]), (min((~var_14), 0))));
                                arr_23 [i_0] [i_1] [i_0] [1] [1] [i_7] = (-2147483647 - 1);
                            }
                        }
                    }
                }
                var_21 = (max(((max((arr_10 [i_0] [i_1 - 2]), -1))), ((1 + (1 & 605507204095117059)))));
                arr_24 [i_0] [i_0] [i_0] = ((~((min(0, 1)))));
            }
        }
    }
    var_22 = var_16;
    var_23 -= var_19;

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_29 [i_8] = 0;
            arr_30 [i_8] [i_8] [i_9] |= 11992955606374603248;
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            arr_35 [i_8] = (((arr_27 [i_8] [i_8] [i_8]) ? ((~(arr_31 [i_8] [i_10]))) : (max(-1531745472, 576458553280167936))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_24 |= var_9;

                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 24;i_13 += 1)
                        {
                            arr_44 [i_8] [1] [i_8] [i_12] [i_12] = (!var_16);
                            var_25 = ((((1 ? var_17 : (arr_43 [i_8] [1] [19] [i_12] [i_13] [i_13]))) >= var_16));
                            arr_45 [i_10] = ((((arr_25 [i_8]) ? 1517568470 : -1)));
                            arr_46 [i_8] [0] = (((!1) ? -31710 : ((1531745465 ? 1 : var_17))));
                        }
                        arr_47 [i_8] [i_10] [i_11 - 3] = ((-1 && (min((arr_28 [i_8] [i_10]), (arr_28 [i_8] [i_8])))));
                    }
                }
            }
            arr_48 [1] [i_8] [1] = (arr_25 [i_10]);
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    {
                        arr_56 [i_8] [14] [i_15] [i_8] = ((((~(arr_54 [i_15 - 1] [i_15] [i_16] [i_16]))) << (var_12 - 557117978)));
                        arr_57 [i_16] [i_16] [i_14] [i_8] [i_14] [i_8] = ((15841795128764975006 ? 18446744073709551615 : 1));
                    }
                }
            }
            arr_58 [i_8] [i_14] [i_8] = var_15;
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
        {
            arr_62 [i_17] |= ((arr_59 [i_8] [i_8] [1]) ? (min((min(2147483647, var_5)), (arr_36 [i_8] [i_17]))) : ((min(((1999672146 != (arr_40 [23] [7] [7] [23]))), (min(1, 1))))));
            arr_63 [i_8] [i_8] [i_8] = ((!(((((max((arr_59 [i_8] [i_17] [i_8]), (arr_25 [i_8])))) - (min(33554431, (arr_53 [i_17] [i_17] [i_8] [13] [5]))))))));
        }
        arr_64 [i_8] = var_12;
        var_26 = (((arr_59 [i_8] [i_8] [i_8]) && (arr_59 [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 17;i_18 += 1)
    {
        arr_69 [i_18] [i_18] = 1166909162;
        arr_70 [2] [i_18] = arr_55 [i_18] [i_18] [1] [i_18] [i_18];
        arr_71 [i_18] |= ((arr_52 [i_18] [i_18] [i_18 - 1]) && (arr_52 [i_18] [i_18 - 2] [i_18 - 1]));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        arr_74 [i_19] [5] = (~0);
        arr_75 [i_19] = (var_15 / 209);
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        arr_78 [i_20] [i_20] = ((max((arr_43 [10] [10] [i_20] [i_20] [i_20] [9]), ((-(arr_26 [i_20] [i_20]))))));
        arr_79 [i_20] = (min((((((var_17 ? (arr_59 [i_20] [i_20] [i_20]) : var_4))) ? ((var_10 ? 1 : var_12)) : (arr_37 [i_20] [i_20] [i_20] [i_20]))), (((!(((arr_49 [11] [11]) < (arr_55 [i_20] [2] [i_20] [i_20] [i_20]))))))));
        arr_80 [i_20] = (arr_41 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    #pragma endscop
}
