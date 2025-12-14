/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) > (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 |= ((((((((arr_1 [4]) == (arr_9 [i_0] [i_1] [i_3] [i_1])))) - (arr_0 [i_1] [i_2]))) == (~-6925)));
                        arr_10 [11] [i_0] = (arr_4 [i_0] [14] [i_0] [i_3]);
                        var_15 = (arr_6 [i_0] [0] [i_0] [i_0]);
                        var_16 = ((arr_5 [i_0]) && (arr_9 [i_0] [i_1] [9] [i_3]));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_17 |= (arr_3 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_6] [i_5] [i_4] [i_0] = ((((((arr_20 [i_7] [i_0] [i_5] [i_0] [i_0]) % (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((((((arr_8 [6] [i_0] [i_0] [i_4]) ? (arr_5 [i_0]) : (arr_19 [i_0] [i_4] [14] [i_7])))) && (arr_21 [i_0] [i_4] [i_5] [i_6] [i_7] [i_0])))));
                                var_18 += (arr_3 [5]);
                            }
                        }
                    }
                    arr_24 [i_5] &= (9348363348287807601 + -27193);
                }
            }
        }

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            arr_29 [i_0] [i_8] = arr_11 [i_0];
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    {
                        var_19 ^= (((((((((arr_34 [i_9]) || (arr_1 [i_8]))))) & (arr_21 [i_0] [12] [12] [i_8 - 1] [i_9] [i_9]))) + (((((((((arr_26 [i_9] [i_8]) + 2147483647)) << (((arr_20 [16] [i_8] [22] [i_9] [i_10]) - 1))))) ? ((((arr_5 [i_9]) > (arr_16 [6])))) : ((-(arr_26 [i_9] [i_9]))))))));
                        arr_36 [i_0] [i_10] [i_0] [0] = (arr_14 [i_0] [i_8] [i_0]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_20 = (max(var_20, ((((arr_26 [12] [i_11]) && ((((arr_4 [i_11] [13] [18] [18]) ? (arr_33 [i_11] [i_11] [10] [i_11] [12]) : (arr_38 [10])))))))));
        var_21 = (((~(arr_26 [i_11] [i_11]))));
        var_22 = (arr_7 [i_11]);
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 24;i_14 += 1)
            {
                {
                    arr_47 [i_12] [i_12] = (((arr_18 [i_12] [i_13] [i_14]) * (((arr_43 [i_12] [i_12] [i_14]) + (((arr_25 [i_12]) | (arr_12 [i_14])))))));
                    arr_48 [i_12] [i_13] [i_12] [i_12] = arr_22 [i_12] [i_13] [i_12] [i_12] [i_12];
                }
            }
        }
        var_23 = (((((((arr_30 [i_12] [i_12] [i_12]) <= (arr_11 [i_12]))))) * ((~(arr_30 [i_12] [i_12] [13])))));
        var_24 = (arr_46 [i_12] [i_12] [i_12] [i_12]);
    }

    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        var_25 = (arr_31 [i_15] [i_15] [i_15]);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_26 = (((arr_57 [i_15] [i_18]) ? ((((arr_1 [i_18]) >> ((((~(arr_22 [i_16] [i_16] [i_16] [17] [i_16]))) - 2089471906))))) : (((arr_5 [i_16]) ? (arr_5 [i_16]) : (arr_16 [i_17])))));
                        var_27 = (arr_50 [i_18]);
                    }
                }
            }
        }
    }
    var_28 = (((((var_11 && var_11) ^ var_7)) % ((~(!var_12)))));
    var_29 *= (((!var_9) && (((var_8 ? (var_8 > var_12) : var_7)))));
    #pragma endscop
}
