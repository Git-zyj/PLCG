/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (62 ^ 193);
        arr_4 [i_0] = (((1 != 86) ? (arr_0 [i_0 - 1]) : ((var_6 ? 19 : 194))));
        arr_5 [i_0] = (((arr_2 [0] [i_0 + 1]) ? var_8 : (arr_2 [i_0 - 1] [i_0 - 1])));
        arr_6 [i_0] [i_0] = (arr_0 [i_0 - 1]);
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_4] = var_0;
                        arr_18 [i_1] [i_4] [i_2 + 2] [i_3] [i_4] [16] = (max((max((((1 / (arr_8 [i_3] [i_1 - 2])))), ((var_1 ? (arr_13 [i_2] [12] [12] [i_2]) : 0)))), (((-var_10 - (((arr_10 [i_1] [i_2] [i_4]) + var_9)))))));
                        arr_19 [i_1 + 2] [i_4] [i_4] [i_1 + 2] = (max(((((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1]) > var_5))), var_10));
                        arr_20 [i_1] [i_1] [i_4] [i_1] [0] = (max(((((arr_9 [i_1] [i_4 - 1]) ? (((127 ? (arr_10 [i_4 - 1] [i_3] [i_2]) : (arr_16 [i_1 + 2] [i_1])))) : (arr_8 [i_4 - 1] [i_2 - 1])))), ((var_5 ? ((var_8 ? var_6 : var_3)) : (max(10, 85))))));
                        arr_21 [5] [i_4] = ((!((((arr_7 [i_2] [i_2 + 2]) ? (arr_7 [i_2 + 1] [i_2 + 1]) : (arr_7 [i_3] [i_2 + 1]))))));
                    }
                    arr_22 [i_3] [i_2] [8] = ((var_9 ? (arr_10 [i_2 + 1] [i_1 + 1] [17]) : ((1 ? 808613760457079672 : (-127 - 1)))));
                    var_11 = (((((16083471296778227414 ? 9223372036854775807 : var_4))) - (arr_12 [i_1 - 2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                arr_28 [i_5 - 1] [i_5 - 1] [i_5] = ((max((!808613760457079672), (arr_7 [i_6 - 1] [i_5 - 2]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_12 = ((-(max((arr_24 [i_5 - 2]), ((var_2 ? (arr_23 [i_5]) : var_4))))));
                            arr_37 [i_5] [i_6] [i_7] = (((((((arr_10 [i_5] [i_6] [i_6]) ? (arr_9 [i_5] [i_5]) : (arr_16 [i_5 + 2] [i_6 - 1]))))) < (((arr_34 [i_5] [1] [2] [i_5 + 3] [i_5 - 2]) ? ((max(var_1, var_0))) : ((((arr_36 [1] [i_5]) >= (arr_10 [i_7] [i_6 + 1] [i_7]))))))));
                            arr_38 [i_5] [i_7] [i_6] [i_5] = ((((-(arr_10 [2] [i_6 - 1] [i_5 + 3]))) & (((arr_10 [i_8] [i_6 - 1] [i_5 - 1]) % (arr_10 [i_8] [i_6 - 1] [i_5 + 3])))));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_41 [i_5] [i_5] [i_6] [i_5] = (((808613760457079697 ? -583175481 : 73)));
                    arr_42 [17] [i_5] [i_6] [i_5] = ((max(((((arr_39 [i_5] [i_6 + 1] [i_6 + 1] [i_9]) / (arr_12 [i_9])))), -32)));
                    var_13 = (max(var_13, (((-(max((arr_8 [i_5] [i_6 - 1]), (arr_8 [i_6 + 1] [i_9]))))))));
                    var_14 ^= var_6;
                }
                arr_43 [i_5] [i_5] = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    arr_53 [i_10] [i_11] [5] = var_6;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_60 [i_14] [i_11] [i_10] [i_11] [0] = (arr_48 [i_10] [i_11]);
                                var_15 = (max(((max((1883075319 | -106), (((arr_39 [16] [2] [16] [i_14]) ? (arr_24 [i_12]) : (arr_8 [i_13] [i_10])))))), ((((((arr_34 [i_10] [i_10] [5] [i_10] [5]) ^ var_0))) ? ((var_1 ? var_5 : (arr_54 [i_11] [i_10] [i_10]))) : var_8))));
                            }
                        }
                    }
                    arr_61 [i_10] [i_10] = (arr_58 [i_10] [i_11] [1] [i_11] [i_11] [i_11] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
