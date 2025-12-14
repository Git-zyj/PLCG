/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 += 3574989920;
                arr_5 [i_1] [i_1] = (~-719977375);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 |= (((((!(arr_2 [i_0] [i_0])))) & ((min((arr_2 [i_1] [i_3]), (arr_2 [i_4] [i_4]))))));
                                arr_15 [i_0] [i_1] [i_2] = (((arr_7 [i_1]) <= (((((-(arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4])))) ? (arr_8 [i_0] [i_2] [i_3]) : 1556377603))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_12 &= (((arr_0 [i_5 - 3]) != ((~(arr_0 [i_5 - 3])))));
                                var_13 = 2147483647;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    arr_25 [i_0] = var_7;

                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        var_14 *= var_3;

                        for (int i_9 = 4; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_15 = ((13820 ? 7 : 1657959622));
                            var_16 = -6941320788337977754;
                            arr_32 [i_0] [i_9] [0] [i_7] [i_8 + 1] [i_9] &= 6941320788337977750;
                            arr_33 [11] [i_0] [i_1] [i_1] [i_7 + 1] [i_1] [i_8] = ((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (arr_2 [i_7 - 1] [i_7 + 1]));
                        }
                        for (int i_10 = 4; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((210376478 == (arr_14 [i_0] [i_1] [i_7 + 1] [i_8] [i_10])))) + (((!(arr_35 [i_8] [i_1] [i_7] [i_8] [i_8]))))));
                            arr_39 [i_0] [i_10] [20] [i_8] [i_10] &= ((!(arr_23 [i_1] [1] [i_1] [i_1])));
                            var_17 = (max(var_17, (((~(-210376478 > var_0))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_46 [i_1] [i_1] [18] [i_1] [i_1] = (~var_6);
                            arr_47 [i_0] [i_0] [i_1] [i_7] [i_0] [i_11] [i_12] = ((1018039715079167445 ? 1 : -36028797018963968));
                            arr_48 [10] [11] [i_7] = ((-6941320788337977741 ? ((((var_8 != (arr_22 [i_0] [i_0] [2] [i_11] [i_12]))))) : (13820 + -5251934765702678763)));
                        }

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_18 += (arr_27 [i_0] [i_1] [10] [i_11] [i_13]);
                            var_19 = (arr_27 [i_7 - 1] [i_11] [i_7 - 1] [i_7 - 1] [19]);
                            var_20 = (max(var_20, (((1556377601 + (arr_23 [i_0] [i_1] [i_0] [i_11]))))));
                            arr_51 [i_0] = (arr_45 [i_7 - 1] [i_7] [i_7] [i_7] [i_7]);
                            var_21 = (arr_31 [i_0] [i_1] [i_0] [17] [i_13]);
                        }
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_22 = (((arr_18 [i_7 - 1] [i_7 + 1]) * (arr_18 [i_7 + 1] [i_7 + 1])));
                        var_23 = (arr_27 [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 22;i_15 += 1)
    {
        for (int i_16 = 3; i_16 < 22;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 23;i_18 += 1)
                    {
                        {
                            arr_67 [i_15] = ((var_1 != (arr_54 [i_17])));
                            arr_68 [17] [i_15] = (arr_64 [i_15] [i_15] [i_17] [i_17] [i_17]);
                        }
                    }
                }
                arr_69 [1] |= ((+((var_3 ? (arr_54 [i_15]) : ((var_9 ? 3574989895 : (arr_63 [17] [i_16 - 1] [12] [i_16])))))));
                var_24 ^= ((!(arr_58 [10] [i_16] [i_16 + 1])));
                arr_70 [i_15] [i_16] [i_16 + 1] = ((((-((var_2 ? 14536799222476846323 : 16936632842520368826)))) == 65535));
                arr_71 [i_15] [i_15] [i_15] = ((!(arr_62 [i_16] [i_16] [i_16])));
            }
        }
    }
    var_25 = (min(var_2, (((((min(var_6, var_7))) != (!var_5))))));
    #pragma endscop
}
