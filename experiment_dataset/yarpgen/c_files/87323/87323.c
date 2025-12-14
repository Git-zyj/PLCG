/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = var_1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((((-(var_0 * var_1))) % ((var_4 ? ((18446744073709551607 + (arr_3 [i_0]))) : 9223372036854775791))));
                                arr_16 [i_0] [3] [3] [i_0] [i_0] [i_4] = ((((-(var_10 != var_11))) & (arr_13 [i_4] [i_0] [i_2] [i_0] [i_0])));
                                arr_17 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = ((((min(((~(arr_12 [6] [6] [i_2] [i_2]))), var_2))) ? ((((!var_14) >= var_5))) : -0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_21 = (arr_5 [i_5] [i_5]);
                    arr_29 [i_5] [i_5] = (arr_15 [i_5] [i_6] [i_6] [i_7 - 2] [0]);

                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        var_22 = (((arr_15 [i_5] [i_7] [i_6] [i_5] [i_5]) / ((((((((1 < (arr_25 [i_5] [i_6] [i_7] [i_8 - 2]))))) <= (arr_21 [i_7 - 2])))))));
                        arr_34 [i_5] [8] [i_7] [i_7] [4] |= ((((((-1 * (arr_9 [i_5] [i_6] [i_7]))) <= (((arr_2 [i_5]) ? (arr_13 [i_5] [i_6] [i_7 + 1] [6] [i_7]) : var_13)))) ? var_1 : (arr_10 [14] [i_7 + 1] [i_6] [14])));
                        var_23 = ((-(((!((!(arr_2 [6]))))))));
                        var_24 |= (((arr_13 [i_8 - 2] [4] [18] [6] [i_8 - 3]) == ((var_1 ? (((arr_4 [1]) ? (arr_19 [i_5] [1]) : var_5)) : (arr_30 [1] [i_6] [1] [1])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_25 = (arr_35 [i_5] [15] [i_5] [17]);
                        arr_38 [i_5] [i_5] [16] [i_5] = (((arr_4 [i_5]) ? (arr_4 [i_5]) : (arr_12 [i_9 - 1] [i_7] [i_6] [i_5])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_26 = ((-(min((arr_40 [15] [i_10 + 3]), (~12)))));
                arr_44 [0] &= (arr_43 [i_10] [4]);

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_47 [i_11] [i_11] [i_11] [i_12] = 31;
                    var_27 = (min(28672, (((~(arr_39 [i_10] [i_11]))))));
                    var_28 = 21;
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_29 = ((!(var_0 < var_7)));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_30 = arr_54 [17] [6] [i_13];
                                arr_55 [i_10] [i_11] [i_11] [i_13] [4] [i_14] [i_11] = ((~(arr_48 [i_11] [i_11])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_31 -= (((arr_46 [15] [i_11] [i_16] [i_17]) > ((var_0 ? (arr_51 [i_11] [2] [i_16] [0]) : (arr_41 [10] [10] [i_17])))));
                                var_32 = (arr_39 [i_13] [i_13]);
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    var_33 = (arr_61 [i_10] [i_11]);
                    var_34 = ((var_13 ? (min(((var_17 ? var_7 : var_11)), -32766)) : (((max((arr_51 [i_10 + 3] [i_11] [i_10 + 2] [i_11]), (arr_53 [i_10] [i_10] [i_10] [i_10 + 1] [i_11] [i_10])))))));
                    var_35 = ((((max(-var_5, ((((arr_53 [i_18] [i_18] [i_11] [i_11] [i_10] [i_10]) / 21)))))) ? (((arr_59 [i_10]) * -var_9)) : (var_5 & var_9)));
                }
            }
        }
    }
    #pragma endscop
}
