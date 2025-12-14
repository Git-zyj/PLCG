/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 += (min(((var_15 ? (arr_0 [i_0 - 2] [i_0 - 1]) : (arr_1 [i_0]))), (((((var_4 ? 114 : 0))) - (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((var_10 ? 1 : (arr_6 [i_0 + 2] [i_2])));
                        var_21 += ((((arr_1 [i_1 + 1]) ? (arr_4 [i_3]) : var_15)));
                        var_22 = (min(var_22, var_12));
                        var_23 = ((((((16341421962867433258 > (arr_5 [i_3]))))) < (~var_7)));
                        arr_10 [i_0] = ((var_4 ? 137438953471 : (((-15038 ? var_5 : var_3)))));
                    }
                    arr_11 [i_0] = (((((arr_4 [i_0]) >> (63384 > var_8))) >> (var_3 - 4294967173)));
                    var_24 += 12;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (((((36 ^ (arr_1 [i_4])))) && (arr_4 [i_4])));
        var_25 = (((arr_12 [i_4]) - (max((arr_12 [i_4]), (arr_12 [i_4])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_26 = ((((!(arr_8 [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]))) ? (-2147483647 - 1) : ((36 ? 63387 : (-2147483647 - 1)))));
                            var_27 = var_10;

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                arr_29 [i_7] [2] [i_7] [2] [i_9] = (((((max(var_0, (arr_16 [i_9]))))) == (arr_2 [i_7 - 1] [i_5 - 1])));
                                var_28 ^= var_8;
                            }
                            for (int i_10 = 0; i_10 < 0;i_10 += 1)
                            {
                                arr_33 [i_5] [i_7] [i_10 + 1] [i_8] [i_10 + 1] = (max(((~((-512329420 ? (arr_17 [i_6] [i_8]) : var_6)))), -16));
                                var_29 = (2923380643 & -16);
                            }
                            for (int i_11 = 0; i_11 < 16;i_11 += 1)
                            {
                                var_30 = ((((arr_3 [i_7] [i_7 - 1] [3]) && 65)));
                                var_31 = (max(var_31, (((-(4169216233 && var_2))))));
                                arr_36 [i_5] [i_5] [i_7] [i_7] = (((((arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) > var_19)) ? (((((arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) > 1681600941)))) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            }
                            for (int i_12 = 0; i_12 < 16;i_12 += 1)
                            {
                                var_32 = (min(var_32, 18446744073709551615));
                                var_33 |= (((((((arr_39 [i_5] [4] [i_7] [i_8] [0]) ? (arr_20 [i_5] [i_6]) : 2147483647)) / var_8)) >> (((((arr_21 [i_5 - 1] [i_6 + 3] [i_7 - 1] [0]) ? ((1 ? (arr_2 [i_5] [i_6]) : (arr_26 [2] [i_6] [i_6] [i_6]))) : ((max((arr_3 [12] [i_8] [i_5]), -943795438))))) - 69))));
                            }
                        }
                    }
                }
                var_34 = ((((((var_3 ? (arr_17 [i_5] [i_5]) : 9506))) ? ((93 ? 2105322110842118358 : (arr_24 [12] [i_5] [i_5] [i_6 + 1]))) : 90)));
                var_35 = (max(var_35, (((((((var_9 ? 63449 : var_5))) ? ((17307 ? -512329430 : 696567417981349202)) : (~-87)))))));
            }
        }
    }
    #pragma endscop
}
