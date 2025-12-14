/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((((-(max(var_4, var_4)))) > (arr_10 [i_0]))))));
                                arr_15 [i_0] = (max((min((arr_1 [i_2]), -var_9)), var_0));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_12 ^= var_0;
                                arr_24 [i_6] [i_1] [i_5 - 1] [i_6] &= (min((((arr_14 [i_6] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_6]) ? (arr_14 [i_6] [i_7] [i_5 + 2] [i_6] [i_5 + 2] [i_6]) : (arr_14 [i_6] [i_7] [i_5 + 3] [i_0] [i_6] [i_6]))), (((((arr_19 [i_6] [i_5 + 2] [i_1] [i_0]) - (arr_4 [i_6]))) * ((var_4 ? (arr_3 [i_0] [i_0]) : (arr_13 [i_5 + 3] [i_1] [i_5 + 3])))))));
                                var_13 = (i_0 % 2 == zero) ? ((((((arr_9 [i_0] [i_5 + 2] [i_0]) ? var_3 : (arr_9 [i_0] [i_5 - 1] [i_0]))) << (((max(var_9, (arr_9 [i_0] [i_5 + 1] [i_0]))) - 4954625130749979813))))) : ((((((arr_9 [i_0] [i_5 + 2] [i_0]) ? var_3 : (arr_9 [i_0] [i_5 - 1] [i_0]))) << (((((max(var_9, (arr_9 [i_0] [i_5 + 1] [i_0]))) - 4954625130749979813)) - 13492118941298205907)))));
                                arr_25 [i_0] [i_5 + 3] [i_0] = min((-125 + 653086783), ((((max(var_4, var_1))) ? ((var_0 * (arr_1 [i_5 + 1]))) : ((var_2 ? var_9 : var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((8 ? 2 : ((max((18446744073709551603 != 13204884397682876808), 1913025354)))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                {
                    var_15 = (min(var_15, (((((arr_21 [i_10 - 3] [i_9 + 1] [i_9 + 1] [i_9]) == (arr_21 [i_10 - 3] [i_9 - 1] [i_9 - 1] [i_8]))) ? (((arr_26 [i_9 - 1]) ? (max((arr_18 [i_8] [i_8]), var_8)) : (max(var_3, var_8)))) : (((arr_2 [i_9 + 1] [12]) ? ((var_9 ? var_8 : var_2)) : (18446744073709551615 && 8905973732529934915)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_16 = (((-92 ? -67 : 125)));
                                arr_42 [i_12] [i_12] = ((var_3 == (max(var_1, (max(var_8, var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            {
                arr_47 [i_13] = (((min((max(var_7, (arr_43 [i_13 + 1]))), ((((arr_44 [i_13]) && (arr_16 [i_13 - 3] [i_14 + 2] [i_13 - 2] [i_14 - 2]))))))) ? (((2147483641 * 13204884397682876808) / ((var_2 ? (arr_2 [i_13 - 2] [i_13]) : (arr_3 [i_14 - 1] [i_14 - 1]))))) : (((((arr_44 [i_13]) > var_9)))));
                arr_48 [i_14 + 2] [i_13] = ((var_4 ? ((((arr_4 [i_13]) ? (arr_22 [i_13 - 1] [i_14 - 1] [i_13] [i_14 - 1] [i_14 - 1]) : (arr_17 [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_13 + 1])))) : (((-(arr_17 [i_13] [i_13 - 2] [i_13 - 3] [i_14 + 1]))))));
                arr_49 [i_13] [i_14 + 2] [i_14 - 1] = min((((var_3 - var_3) ? (((arr_5 [i_13]) ? (arr_13 [i_13 - 1] [i_13 - 2] [i_13 - 3]) : var_0)) : (((var_10 ? var_2 : var_2))))), (var_2 > var_2));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                arr_59 [i_13] [i_13 - 1] [i_15] [i_16 - 1] [i_17] = ((((var_1 ? var_8 : (arr_45 [i_13] [i_13] [i_13])))) ? (min(((max(var_10, var_1))), (min(var_7, (arr_1 [i_15]))))) : (((((min(var_6, var_1))) * ((var_4 ? var_10 : (arr_20 [i_13 - 3] [i_13 - 3] [i_13 - 2] [i_13 - 1])))))));
                                var_17 = (max(((((((arr_7 [i_13 + 1] [i_13 + 1] [i_13 + 1]) ? var_8 : (arr_58 [i_17] [i_16 - 1] [i_15] [i_14 - 1] [i_13 - 3])))) ? (var_2 % var_8) : (arr_8 [i_13 + 1] [i_15]))), ((var_4 ? var_9 : var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
