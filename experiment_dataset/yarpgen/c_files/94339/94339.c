/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-6480995926435125070);

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_21 = (max((max((max(var_19, var_9)), (((!(arr_0 [7] [7])))))), (((!(var_14 - -1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((((!(1 != -1))) || (((((var_17 | (arr_5 [i_2] [i_1] [i_0] [i_0]))) << (min((arr_2 [i_1]), (arr_4 [i_2] [i_0 - 1])))))))))));
                    var_23 = (((((((!var_12) && (!var_4))))) & (~18446744073709551615)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [8] [i_1] [8] = (min((max(((var_4 ? var_13 : -6)), (((arr_6 [7] [i_2] [i_2]) ? 5 : var_18)))), -4292013465200038056));
                                arr_12 [i_0] [4] [4] [4] [4] [i_0] = (min(-5, -3622));
                                arr_13 [2] [i_0 + 1] [i_0] [i_0] [i_0] [1] [i_0] = (((arr_2 [i_2]) << ((((-(arr_10 [i_3] [i_3] [i_3]))) - 599941909))));
                                arr_14 [i_1] [i_3] [i_4] = var_7;
                            }
                        }
                    }
                    arr_15 [i_0 + 2] [i_1] [i_1] [i_2] = ((~(((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : var_6))));
                }
            }
        }
        arr_16 [i_0 + 1] = ((~(-18717 - 241)));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_24 = var_19;
                        arr_28 [i_6] [7] [i_6] [i_6] = (((1610612736 / var_10) && 2120688456));
                        var_25 = (((1 >= (arr_10 [i_5] [i_5] [1]))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_35 [i_6] = ((arr_26 [i_6] [i_6] [i_7] [7] [i_10]) != (arr_17 [i_5] [9]));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_6] = (2174278840 > -1610612736);
                            var_26 -= ((0 == (var_4 / 16190590247475159668)));
                        }
                        var_27 = ((var_17 / (arr_17 [i_5] [i_5])));
                        var_28 = (((arr_3 [i_7] [i_7]) && -1610612725));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_29 = (min(var_29, 1));
                                var_30 = var_2;
                                var_31 = (arr_17 [i_12] [i_6]);
                                arr_42 [i_6] = (((-1610612725 ? var_0 : (arr_21 [i_6] [i_7]))));
                                arr_43 [i_6] [i_6] [7] [i_6] = -23547;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 7;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            {
                                var_32 = (((((-(arr_3 [i_5] [i_13 + 2])))) ? (var_5 > var_19) : ((var_17 ? var_13 : var_18))));
                                var_33 = ((arr_38 [i_5] [i_6] [i_7] [4]) ? var_18 : ((((!(arr_20 [i_6] [i_7] [i_14]))))));
                                arr_50 [i_5] [i_6] = var_7;
                            }
                        }
                    }
                    arr_51 [i_7] [i_6] = ((3763105385 ? (1843 || var_7) : var_14));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_60 [i_15] [0] [i_16] [i_17] = var_3;
                        var_34 *= var_16;
                        var_35 = arr_32 [i_5] [i_5] [i_5] [i_5] [9] [i_5] [8];
                    }
                }
            }
        }
        arr_61 [i_5] [i_5] &= -0;
        var_36 = (((var_12 / (arr_52 [i_5] [i_5] [i_5]))));
    }
    #pragma endscop
}
