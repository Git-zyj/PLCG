/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [1] [i_0] [i_0] [1] = (((arr_0 [0]) ? ((((arr_2 [i_4]) ? (arr_10 [i_0] [i_1]) : var_8))) : (((-6422712316881057707 ? 1 : 1)))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] = (((((arr_1 [i_0 + 2] [i_0]) ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0 + 1] [i_0 - 1]))) + 1));
                                arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [6] [i_0] |= var_8;
                                arr_19 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 2] = ((((1 <= (arr_1 [i_0 + 3] [i_4]))) ? 1 : ((((1 ? (arr_5 [i_0] [i_1] [i_2]) : 1)) | var_17))));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] [11] = 1;
                arr_21 [i_1] [i_0] = (var_1 ? ((((!(arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0 + 1]))))) : (max((1 || 1), (max(337, var_15)))));
                arr_22 [i_0 + 2] [i_0 + 2] [i_1] = (((arr_10 [i_0 - 1] [i_1]) ? ((((var_12 ^ (arr_2 [i_1]))))) : (((arr_2 [i_0 + 3]) ? 1 : var_11))));
            }
        }
    }
    var_18 = ((((((var_5 ? 0 : var_17))) ? var_8 : var_3)));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_29 [i_5] [i_6] = ((!(((~((1 ? 582480254 : 10441887566019348060)))))));
                arr_30 [i_6] [i_6] [i_5] = var_4;

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_33 [i_6] [i_5 + 1] [i_7] = var_17;
                    arr_34 [i_6] [i_5 - 3] [i_7] [i_5 + 2] = var_5;
                }

                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    arr_37 [i_6] = var_13;
                    arr_38 [i_8] [i_6] [i_6] [i_5] = var_4;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_43 [i_5 - 4] [i_6] [i_6] [i_9] = (10441887566019348060 & 10441887566019348060);
                    arr_44 [i_6] = (max((((!(~1)))), (var_17 <= var_17)));
                    arr_45 [i_6] = var_9;
                }
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    arr_49 [i_5] [i_6] = (arr_48 [i_6] [i_6] [i_10 + 1] [i_10]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_57 [i_5] [i_5] [i_6] [0] [i_5] [i_6] [i_5] = ((1 % ((((((arr_26 [i_10 + 1] [i_6]) || var_3))) * var_5))));
                                arr_58 [i_5] [i_5] [6] [i_11] [i_6] = (((min((((arr_3 [i_11]) ? (arr_41 [7] [i_6] [i_6]) : (arr_32 [i_5] [i_5] [i_5]))), ((var_2 ? 1 : (arr_53 [1] [i_11] [i_11] [i_6] [i_11])))))) ? (~1) : 8004856507690203556);
                                arr_59 [i_6] [i_6] [i_6] [1] [i_6] [i_6] = (((arr_40 [i_6] [i_10] [i_12]) && var_9));
                            }
                        }
                    }
                    arr_60 [i_6] [i_6] = var_10;
                }
                arr_61 [i_5] [i_6] = ((1 - (((((var_1 ? var_1 : (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5])))) ? ((1 ? 224516583 : 1)) : -1837856330))));
            }
        }
    }
    #pragma endscop
}
