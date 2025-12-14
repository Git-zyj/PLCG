/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((max(var_4, var_11))) ? (((var_8 ? var_9 : var_2))) : var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] = (max(((((((arr_4 [i_1] [i_2]) ? var_9 : -62))) ? (!65) : (arr_7 [i_0] [i_1] [13] [i_3 + 2]))), (min((arr_7 [i_0] [i_1] [i_2] [i_3]), (((arr_0 [i_0] [i_3]) - (arr_7 [i_0] [i_0] [i_2] [i_3 + 3])))))));
                                arr_13 [i_0] [i_0] [i_0] [1] [i_0] = (((arr_7 [i_0] [i_3 + 3] [i_0] [0]) >= (arr_7 [i_0] [i_3 + 1] [i_2] [i_3])));
                                arr_14 [i_4] [i_0] [i_3 + 4] [i_2] [12] [i_0] [i_0] = arr_5 [5];
                                arr_15 [i_0] [13] [i_2] [i_1] [i_0] = ((-(((max((arr_1 [i_1] [i_1]), (arr_10 [1])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_8 [i_1]), (arr_1 [i_0] [i_1])))) ? (((((((arr_10 [i_0]) ? (arr_1 [i_0] [i_3]) : (arr_10 [9]))) > (min((arr_7 [i_0] [i_1] [i_2] [i_4]), (arr_3 [i_0] [13] [i_0]))))))) : (arr_9 [i_0] [i_1] [i_2] [i_4])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_15 = (min(((min((arr_4 [i_5] [8]), (arr_4 [i_0] [i_1])))), var_0));
                        arr_20 [5] [2] [i_0] [2] = (max(var_4, (((!(arr_3 [10] [i_1] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_25 [i_2] [i_2] [i_0] = (((max((((arr_18 [i_0] [11] [13] [i_0]) ? (arr_5 [i_2]) : var_13)), (arr_3 [i_0] [i_0] [i_0]))) ^ (((~(arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_26 [i_0] [i_2] [i_6] [i_6] &= (min((((arr_8 [i_0]) + (arr_6 [i_0] [4] [i_2] [i_6]))), (arr_8 [i_0])));
                        var_16 = (max((max((((arr_2 [i_6]) ? (arr_3 [3] [i_1] [13]) : (arr_10 [i_0]))), ((max((arr_18 [i_0] [i_1] [i_1] [i_6]), 112))))), (((arr_18 [i_0] [i_1] [i_2] [i_6]) ? (arr_23 [i_0] [i_1]) : (arr_18 [i_0] [4] [i_0] [i_6])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = (max(var_17, (((var_4 | (arr_3 [8] [i_2] [i_0]))))));
                            var_18 *= (arr_27 [i_2] [i_2] [i_2] [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_8] [i_8] [i_0] [i_0] [5] [i_0] = (((!(arr_23 [i_0] [i_0]))));
                            arr_32 [i_0] [i_0] [11] [i_0] [i_8] = (var_6 > var_7);
                            arr_33 [i_1] [i_1] [i_1] [i_0] [i_1] = ((~(max((arr_2 [i_8]), (max((arr_22 [i_0] [i_0] [i_2] [i_6] [5]), (arr_27 [i_1] [i_2] [i_6] [i_8])))))));
                            var_19 = max(((~(arr_7 [i_8] [i_6] [9] [i_1]))), ((((max((arr_21 [i_0] [i_0] [i_2] [i_0] [i_8]), (arr_0 [i_0] [i_8])))) ? (arr_4 [0] [0]) : (((31467 && (arr_23 [i_0] [i_1])))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_6] [i_0] = ((~(arr_30 [i_9] [i_6] [i_2])));
                            var_20 ^= ((-113 <= (arr_5 [i_1])));
                        }
                        arr_37 [i_0] [i_2] [i_1] [i_0] [i_0] = (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_45 [i_2] [i_0] [i_2] = (min(((112 ? (arr_0 [i_0] [i_1]) : ((max((arr_18 [i_11] [i_10] [i_1] [i_1]), 0))))), (arr_29 [i_2] [i_0] [i_2] [i_10] [i_11] [i_10])));
                            var_21 = (min(((var_13 * (arr_10 [i_0]))), (((!(arr_21 [i_0] [i_1] [i_2] [i_1] [i_0]))))));
                        }
                        arr_46 [i_10] [12] [i_1] [i_10] [i_0] [i_1] = ((max((arr_10 [i_10]), 126)));
                        arr_47 [i_0] [8] [i_10] [i_2] [i_1] [i_0] = (min((max((((arr_30 [i_0] [i_0] [1]) & 0)), 476909551)), (arr_41 [i_0] [i_0] [4] [4])));
                    }
                    var_22 = ((((max((arr_10 [i_1]), (((arr_3 [2] [10] [i_2]) ? var_9 : (arr_43 [i_0] [i_1] [i_1] [i_2] [i_2])))))) ? (arr_5 [i_1]) : (((((arr_44 [i_1]) ? 476909523 : (arr_9 [i_0] [i_0] [i_1] [i_0])))))));
                    var_23 = (min(var_23, (((((((arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) ? (((arr_30 [i_0] [i_1] [12]) % 1)) : (-234661383 ^ 0)))) ? (((min(609500837, var_12)) - (max((arr_42 [10] [10] [i_2] [i_2] [i_2] [0] [i_2]), var_6)))) : (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
