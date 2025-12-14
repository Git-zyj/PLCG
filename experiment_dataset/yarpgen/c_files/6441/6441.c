/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (min(var_11, ((((((((arr_2 [i_0] [1]) ? (arr_2 [7] [7]) : var_8))) ? var_3 : (~var_0)))))));
        var_12 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min((arr_1 [3]), var_5));
                    arr_9 [i_0] [i_1] [i_2] = arr_2 [i_1 - 2] [11];
                    arr_10 [6] [2] [8] [i_1] = (((((min(var_5, var_3)) / (var_9 * var_2))) & (min(((var_10 ? var_3 : var_10)), (((var_3 || (arr_1 [i_0]))))))));
                }
            }
        }
        var_14 |= (!var_10);
        arr_11 [i_0] = ((var_10 / ((var_2 ? var_0 : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_15 += ((arr_16 [i_3] [i_4] [i_4]) && (arr_16 [i_4] [i_4] [i_3]));
            var_16 = (var_5 & var_3);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_25 [i_7 + 4] [4] [i_7] [i_7 + 1] [i_7 + 2] [i_5] = ((~(arr_15 [i_7 - 3] [i_7 + 2])));
                            var_17 = (min(var_17, (((!(-5449396488801205608 <= 6))))));
                        }
                    }
                }
            }
            var_18 = (max(var_18, ((((arr_16 [i_3] [i_4] [i_3]) ? (arr_24 [22] [i_4] [i_4] [i_4] [i_4] [i_3]) : (!var_1))))));
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            var_19 = (arr_24 [i_3] [10] [i_8] [i_8] [i_3] [i_8]);
            var_20 = (min(var_20, var_6));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_21 *= (~var_5);
                            var_22 += (arr_29 [i_12 + 1] [i_11 + 4] [i_10 - 1]);
                            var_23 = (max(var_23, var_4));
                            var_24 = ((arr_20 [i_11 + 4]) ? (arr_20 [i_11 + 2]) : (arr_20 [i_11 + 3]));
                        }
                    }
                }
                var_25 += (0 ? 0 : 255);
                var_26 = var_1;
                arr_38 [i_10] = (((arr_19 [i_10 - 1] [i_10 + 3] [i_10 + 3] [i_9]) * (((arr_28 [1]) / var_7))));
                arr_39 [i_3] [i_9] [i_9] = var_6;
            }
            for (int i_13 = 2; i_13 < 20;i_13 += 1)
            {

                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    arr_47 [1] [1] [i_13] [i_9] = ((var_8 ? var_8 : (var_6 + var_3)));
                    arr_48 [i_14] = var_9;

                    for (int i_15 = 3; i_15 < 22;i_15 += 1)
                    {
                        arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] [i_15] = var_4;
                        arr_52 [i_15] = (~var_1);
                        var_27 = (min(var_27, (((var_1 ? 150 : (((var_5 ? var_4 : (arr_34 [i_14])))))))));
                        arr_53 [i_15] [20] [i_13 + 1] [i_15] [i_3] [i_3] [i_3] = (((arr_22 [i_15] [i_14] [i_9] [15] [i_9] [i_3]) ? var_4 : (var_10 % var_0)));
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_28 = ((-(arr_46 [i_13] [i_13] [i_13] [i_13 - 1])));
                        arr_56 [i_16] [i_14] [i_13 - 1] [22] [22] = (arr_37 [i_13] [10] [i_13] [i_13 - 2] [i_13]);
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        arr_59 [i_17] = var_6;
                        arr_60 [i_3] [i_17] [i_13] [i_14] [i_14] [i_17] = (((var_10 && var_7) ? (~var_7) : var_2));
                    }
                    var_29 = ((((((arr_33 [i_14 - 1] [22] [i_3] [i_3]) ? var_7 : var_10))) & (arr_40 [i_3])));
                }
                arr_61 [i_3] [i_3] [i_3] [i_3] = (((((0 && (arr_30 [i_3] [i_13 - 2])))) & (arr_54 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 3])));
            }
            /* LoopNest 3 */
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 4; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_30 = ((arr_12 [i_3]) ? (arr_30 [i_3] [i_9]) : (arr_12 [i_18 - 1]));
                            arr_69 [i_3] [i_3] [8] [0] [i_3] [i_3] [i_3] = (arr_19 [i_19] [i_20 - 3] [4] [i_9]);
                            var_31 = (((arr_22 [16] [i_20 - 4] [8] [i_20 - 3] [i_20 - 4] [i_20]) * var_10));
                            var_32 = (arr_31 [i_18 + 1] [i_18] [i_18]);
                        }
                    }
                }
            }
        }
        arr_70 [i_3] = ((var_7 ? (arr_21 [i_3] [i_3] [i_3] [i_3]) : var_6));
    }
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        var_33 = (max(var_33, ((max(-var_9, ((((!var_2) || ((max(var_1, var_7)))))))))));
        arr_73 [i_21] = ((var_1 ? var_2 : -var_4));
        var_34 = (max((arr_45 [i_21]), ((((max(-1492466407, 255))) ? (max((arr_26 [12] [i_21] [i_21]), var_2)) : (!var_3)))));
        arr_74 [i_21] [i_21] = ((min((((var_10 ? var_10 : (arr_72 [10])))), var_6)));
    }
    var_35 = (min(var_35, var_9));

    for (int i_22 = 1; i_22 < 12;i_22 += 1)
    {
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    {
                        var_36 = var_7;
                        var_37 = (max(var_37, var_3));
                        arr_86 [i_22] [10] [i_24] [i_25] = (((var_9 ? var_3 : (arr_46 [i_22 + 1] [i_22] [i_22 + 2] [i_24 + 3]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_26 = 4; i_26 < 13;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 14;i_27 += 1)
            {
                {
                    arr_94 [3] [i_26] [i_26] [i_26] = ((~((~(arr_85 [i_27] [i_27] [i_26 - 4] [i_26 + 1] [i_22 + 1])))));
                    var_38 = (max(var_38, ((((((var_4 <= var_7) ? ((((arr_36 [i_22] [i_26 - 2] [i_27]) >= var_0))) : (arr_66 [i_22 - 1] [i_22] [i_22 - 1] [i_22 + 1]))) << ((var_5 ? var_8 : var_2)))))));
                }
            }
        }
        arr_95 [11] [i_22 + 2] = (((var_7 || var_6) & 100));
    }
    #pragma endscop
}
