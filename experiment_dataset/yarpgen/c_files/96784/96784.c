/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [17] [7]) ? (((arr_0 [i_0]) ? 5714224869762703673 : var_16)) : ((var_10 ? (arr_0 [i_0]) : 1780850160)))) | (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((~((((((arr_0 [i_0]) ? var_8 : var_13))) ? (!var_1) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_20 = 18;
                    arr_13 [6] [i_3] |= var_12;
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 = (min(var_21, var_3));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] = (arr_19 [i_1]);
                            arr_24 [i_1] [i_4] [i_1] &= ((var_15 ? ((((!((max(var_10, (arr_12 [i_1] [9] [i_6 + 1] [9])))))))) : (((arr_20 [i_7] [i_6 - 2] [i_1] [i_1] [i_1]) >> (((((arr_17 [i_6] [4]) << (((arr_11 [i_4] [i_4]) - 786366394)))) - 17293822569102704592))))));
                            var_22 = (arr_22 [i_7] [i_4] [i_5] [i_6] [i_4] [i_1]);
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] &= (((((((((arr_4 [i_8]) ? (arr_26 [i_8]) : (arr_28 [i_8] [i_8])))) ? (-1408122637 / 18446744073709551613) : var_15))) ? (((arr_25 [i_8] [i_8]) ? (arr_25 [i_8] [i_8]) : var_11)) : (arr_10 [16] [i_8] [16])));
        arr_30 [i_8] |= (~(arr_6 [i_8]));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_33 [i_9] |= (~var_3);

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            arr_36 [i_9] [i_9] = (max((arr_32 [18]), (arr_35 [i_9])));
            var_23 += (((((~(((arr_35 [i_10]) << (((arr_35 [2]) - 90))))))) || (arr_34 [i_9])));
            var_24 &= ((((var_2 ^ (arr_34 [i_9]))) - (arr_31 [18])));
            arr_37 [i_9] [i_10 - 1] = (((((-(arr_35 [i_10 + 1])))) ? (((~9) ? ((var_15 ? (arr_35 [i_9]) : (arr_32 [i_9]))) : (min(var_11, (arr_31 [i_10]))))) : 54086));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_25 ^= (arr_31 [i_12]);

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_47 [i_9] [i_9] [i_12] [i_12] [i_13] = var_7;
                        arr_48 [i_11] [i_12] = (((((~(arr_39 [18] [i_11])))) ? ((-var_2 ? (16318 - var_12) : var_7)) : var_2));
                        var_26 |= (arr_39 [i_13] [i_12]);
                    }
                    arr_49 [i_9] [i_12] [i_12] = (arr_34 [i_9]);

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_55 [i_12] [i_11] [11] [i_11] [i_11] [i_11] = var_16;
                            arr_56 [i_9] [i_11] [i_12] [i_15] = (i_12 % 2 == zero) ? (((arr_45 [i_14] [i_12] [i_11] [i_9]) ? (((var_7 + var_16) >> (((arr_46 [i_12] [i_12] [i_14] [i_15]) + 584373086)))) : (min(var_18, var_18)))) : (((arr_45 [i_14] [i_12] [i_11] [i_9]) ? (((var_7 + var_16) >> (((((arr_46 [i_12] [i_12] [i_14] [i_15]) + 584373086)) - 76711748)))) : (min(var_18, var_18))));
                            var_27 |= max((min((((arr_35 [i_15]) ? var_3 : (arr_32 [i_9]))), (arr_52 [i_11] [i_11] [i_11] [i_11]))), (((~(arr_54 [20] [i_15] [i_15] [i_12] [i_12] [i_11] [16])))));
                            var_28 = (min(var_28, (arr_32 [i_9])));
                            var_29 *= (((arr_40 [9] [i_9] [i_9]) ? (((arr_39 [4] [4]) ^ var_15)) : ((((((arr_32 [i_9]) << (((arr_50 [i_15] [i_12]) - 33962873))))) ? (!var_14) : var_17))));
                        }
                        arr_57 [i_9] [i_9] [i_11] [i_11] [i_14] [i_14] &= (((((max(3280998473, var_0)) <= (((((arr_32 [i_11]) != var_4)))))) ? ((((!((!(arr_39 [i_9] [i_11]))))))) : ((~((var_5 ? 137436856320 : (arr_35 [i_14])))))));
                    }
                }
            }
        }
    }
    var_30 = ((!((-var_12 > ((var_6 ? var_4 : var_0))))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {
                arr_64 [i_16] [i_17] = (((((-(arr_40 [i_16] [i_16] [i_16])))) ? (arr_52 [i_17] [i_17] [i_17] [i_17]) : (arr_16 [i_17] [i_17])));
                arr_65 [i_17] [i_16] [i_16] = (((((((var_14 <= (arr_14 [i_17] [i_16])))) > (arr_10 [8] [i_17] [i_17]))) ? ((var_16 ? (arr_50 [i_17] [18]) : var_2)) : (((((var_17 ? (arr_14 [i_16] [i_17]) : var_0)) & (~var_0))))));
            }
        }
    }
    var_31 = var_17;
    #pragma endscop
}
