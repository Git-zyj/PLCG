/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((((max(var_11, var_6))) >> (!var_11)))) ? (arr_1 [i_0]) : var_4));
        arr_3 [i_0 + 2] [i_0] = (((!var_11) % (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_1] = ((-((min(var_1, (min(var_9, var_9)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 = -var_0;
                        arr_13 [i_1] [i_2] = ((~(arr_12 [i_0 + 2] [i_0 + 2])));
                        var_18 = var_16;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_1] [i_4] = ((((var_12 | (arr_9 [2] [i_0] [i_0]))) * ((var_1 ? var_12 : var_9))));
                        var_19 = (min(var_19, -var_16));
                        var_20 = -var_2;
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 &= (((!var_6) ? ((var_12 ? (arr_9 [i_2] [i_2] [i_2]) : (arr_0 [i_2]))) : ((~(arr_14 [i_5] [i_2] [i_1] [i_0])))));
                        var_22 = ((((arr_17 [i_0] [i_0] [i_5] [i_0] [i_2]) ? var_13 : var_4)) <= ((~(arr_14 [i_5] [i_5] [i_5] [i_5]))));
                        arr_21 [i_0] = var_15;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 -= ((var_15 | (arr_6 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_35 [1] [i_6] [i_7] [i_8] [i_8] [i_9] = -var_1;
                                arr_36 [i_7] [i_6] [i_6] [i_6] = (((-(arr_27 [0] [i_7] [0]))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_24 &= ((((arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (var_3 - var_2) : ((var_13 ? var_15 : var_11)))));
                        var_25 = ((-55 * (0 == -115)));
                        var_26 = (((arr_8 [i_7] [i_6]) <= (var_3 * var_3)));
                    }
                    var_27 ^= ((((!(arr_27 [i_7] [i_7 - 1] [i_7 - 1]))) ? (((arr_6 [i_0 + 1]) ? (((((arr_30 [i_6] [i_6]) && var_14)))) : var_10)) : (arr_6 [i_7])));
                    arr_41 [i_6] [i_6] = ((((!((((arr_25 [17] [i_0] [17]) ? var_5 : var_16))))) && ((((var_7 ? var_5 : var_6)) >= var_12))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_28 += (((arr_4 [i_11]) || (arr_25 [i_11] [i_11] [i_11])));
        arr_44 [i_11] = var_3;
        var_29 = (arr_32 [i_11] [3] [i_11] [i_11] [9] [3]);
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_30 = (((var_2 || var_7) - (arr_8 [i_13] [i_12])));
                    var_31 = var_7;
                }
            }
        }
        arr_53 [i_12] = ((-(~var_1)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    {
                        var_32 = (arr_26 [i_16] [i_16]);
                        arr_62 [i_16] [i_16] [i_12] [i_15] [i_16] = var_13;
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 0;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 20;i_21 += 1)
                {
                    {
                        var_33 = arr_72 [i_18] [1] [i_19] [i_21];
                        arr_73 [i_18] [i_19] [i_20] [i_21 - 1] = var_14;
                        arr_74 [i_18] [i_18] [i_18] [i_19] [i_19] [i_21] = var_6;
                    }
                }
            }
        }
        var_34 = (min(-9766, 1));
        var_35 = (min(var_35, (arr_65 [i_18] [i_18])));
        var_36 = var_3;
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
    {
        var_37 *= (((arr_68 [i_22]) * (arr_68 [i_22])));
        arr_77 [i_22] = var_8;
        var_38 = (min(var_38, ((((((arr_68 [i_22]) + 2147483647)) >> (var_8 - 9999490718516496888))))));
    }
    var_39 = ((((~((min(var_6, var_12))))) * var_3));
    #pragma endscop
}
