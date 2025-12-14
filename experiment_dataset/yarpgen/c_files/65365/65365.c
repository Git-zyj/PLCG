/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(var_14, var_7))) ? var_10 : var_12))) ? var_11 : ((max(68, var_14)))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((-(arr_3 [i_0] [i_1 - 1])))) ? (3554376257145723590 & 3554376257145723590) : ((((var_5 && (arr_3 [i_1 - 1] [i_1 - 1])))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (((var_15 ? (min(var_1, var_7)) : (min((arr_4 [i_1]), (arr_2 [i_0]))))));
                                var_20 = (536870784 == 10762716535259135209);
                            }
                        }
                    }
                }
                arr_16 [i_1] = ((((min(var_8, (var_7 == var_12)))) > (max((((var_7 ? var_12 : (arr_10 [17] [i_0] [i_0] [23] [i_0])))), ((-1261035015 ? 1 : var_5))))));
            }
        }
    }

    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_7] [i_7] |= (min(((min(3554376257145723590, 14892367816563828025))), (((((15248961904180741258 ? -1043295146 : 312804738))) & (arr_6 [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [5] [i_7] [8] [i_7] [3] [i_5] = ((-(min(var_0, var_7))));
                                arr_30 [i_6] [i_7] [i_8] [i_9] = ((((!(arr_15 [i_6 - 1] [i_7] [i_5 + 3] [i_8] [i_8]))) || ((((arr_10 [i_5 + 4] [3] [i_5 + 4] [i_5 + 3] [i_5]) ? var_7 : var_11)))));
                                var_21 = ((((!(arr_19 [i_5 + 4] [i_6 - 2] [i_8 + 2]))) ? var_8 : (min((min(var_5, var_11)), ((min(var_4, var_11)))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 |= ((var_1 & ((max(((~(arr_15 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [5]))), var_16)))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 23;i_10 += 1)
    {
        arr_34 [15] = var_1;

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            arr_37 [19] = (var_10 <= var_6);
            var_23 = (max(var_23, var_12));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_24 = (var_14 < var_0);
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_44 [i_10] [i_13 + 2] [i_13] [i_12] = var_7;

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            arr_47 [i_12] = (arr_10 [i_10 - 2] [i_10] [i_10 + 1] [i_13 + 1] [i_10 - 2]);
                            var_25 = (min(var_25, (((-88 ? 15818369784855785117 : 4)))));
                            var_26 = (arr_45 [i_10] [i_10] [i_12] [i_13] [i_14] [0]);
                            var_27 = (max(var_27, ((((arr_9 [i_10 + 1] [i_13 + 1]) ? var_12 : var_7)))));
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            arr_50 [i_10] [i_12] [i_13] [i_14] [i_14] [4] = (((arr_14 [i_12] [i_12] [10] [i_13 + 2] [i_16] [i_16]) | var_2));
                            var_28 = var_3;
                            arr_51 [i_12] = (arr_32 [i_14]);
                            var_29 = (min(var_29, ((((((-420441528 ? -312804732 : -1340))) ? 14892367816563828026 : 44551)))));
                        }
                        arr_52 [i_12] [i_12] [i_13] [13] = var_0;
                        arr_53 [i_10] [20] [i_10] [12] [i_10 + 1] [i_10] &= var_13;
                    }
                }
            }
            arr_54 [i_10] [i_10] [i_12] |= (((arr_12 [i_10] [i_12] [18] [i_12] [i_12]) ? (arr_39 [i_10 + 1] [i_12] [i_12]) : var_3));
            var_30 = (max(var_30, ((((arr_49 [i_10 - 1]) || var_8)))));
        }
    }
    #pragma endscop
}
