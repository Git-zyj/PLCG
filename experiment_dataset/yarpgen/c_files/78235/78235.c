/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = ((-((1839256088 ? 6178078725194946391 : 33))));
                            var_21 = ((((min(0, (arr_0 [i_3 + 3])))) ? (((-(arr_0 [i_3 - 1])))) : (max(var_5, -2543))));
                            var_22 ^= (((((var_7 ? (arr_7 [4]) : 0))) ? 14984 : (~38058)));
                            arr_9 [i_0] [18] [i_0] [i_0] = ((var_2 ? var_12 : (((-((38058 + (arr_0 [i_1]))))))));
                        }
                    }
                }
                arr_10 [i_0] [18] [i_0] = 15367;
            }
        }
    }
    var_23 = (max(var_23, ((max(var_3, (((var_2 + 53) ? var_7 : var_16)))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_24 ^= (max(((max(1, 511))), ((~(min(33, var_18))))));
                arr_16 [i_5] = var_16;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_22 [i_5] [i_5] = -1969522908;
                            arr_23 [i_4] [i_5] [i_5] [1] = (((~var_18) ? var_8 : var_15));
                            var_25 = ((((((arr_7 [i_5]) ? (arr_7 [i_5]) : 1969522907))) + ((-24 ? 546813989 : 1076370360))));

                            /* vectorizable */
                            for (int i_8 = 2; i_8 < 15;i_8 += 1)
                            {
                                var_26 = arr_0 [i_4];
                                var_27 = (max(var_27, var_10));
                            }
                            for (int i_9 = 2; i_9 < 14;i_9 += 1)
                            {
                                var_28 = (arr_6 [i_5] [i_7] [1]);
                                var_29 = ((((min(15367, 0))) ? ((-59 ? ((min(0, 41623))) : 23913)) : ((((arr_21 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4]) < (var_16 / var_9))))));
                                var_30 = (max(238, (min(17569, 18446744073709551599))));
                                var_31 = (arr_13 [i_9]);
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                var_32 &= (min(7, 24014));
                                var_33 = ((min(((max(var_1, 1))), (((arr_20 [i_4] [i_5] [i_6] [i_10]) ? (arr_2 [i_5]) : (arr_18 [i_5]))))));
                            }
                            for (int i_11 = 0; i_11 < 16;i_11 += 1)
                            {
                                var_34 = (min(var_34, 7334392172655329039));
                                var_35 = ((max((arr_29 [i_11]), 4699)));
                            }
                            var_36 |= -var_0;
                        }
                    }
                }
                var_37 = (((min((arr_30 [i_5] [i_4 + 2] [i_5] [i_4 + 2] [i_5]), ((1 >> (4294967295 - 4294967289)))))) ? (((~(min(-459307111, var_4))))) : (((arr_8 [i_4] [i_4] [i_4 - 1] [i_4]) ? (min(var_6, var_15)) : -var_18)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_38 = (max(var_38, ((((((((max((arr_20 [i_4] [i_4] [i_4 + 2] [i_4]), (arr_36 [i_12] [i_4])))) ? -var_15 : (((arr_21 [i_4 - 1] [i_5] [i_5] [i_5] [i_12] [i_13]) ? var_10 : var_9))))) ? ((var_10 ? (arr_31 [i_4 - 2] [i_4 + 1]) : (arr_34 [i_4 + 2] [i_4 - 1] [i_4]))) : (((65535 % ((var_18 ? 22897 : (arr_12 [i_4] [i_12])))))))))));
                            var_39 = 56;
                            var_40 += (((((~(((arr_0 [i_5]) ? var_19 : var_15))))) ? ((~((~(arr_36 [i_4] [i_4]))))) : ((4717 ? (arr_21 [i_4] [i_4] [i_4 - 1] [i_5] [i_4] [i_13]) : (arr_36 [i_4] [i_4])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 8;i_17 += 1)
                    {
                        {
                            var_41 ^= ((((var_12 && ((((arr_18 [i_17]) ? var_11 : (arr_47 [i_17] [i_15] [i_15] [i_15] [i_14])))))) ? ((((0 >= 16777216) ? ((max(var_4, (arr_17 [i_17] [i_14])))) : var_16))) : ((((min(16315, (arr_45 [i_17 - 2] [i_17] [i_17] [i_14])))) ? var_7 : (((arr_47 [i_14] [i_14] [i_14] [i_14] [i_14]) & var_1))))));
                            arr_48 [i_14] [i_14] [i_14] [i_14] = ((((min(var_10, var_0))) ? (arr_21 [i_17] [i_16] [i_16] [i_16] [i_15] [i_14]) : ((min((arr_30 [i_14] [i_17 - 3] [i_17] [i_17 + 2] [i_14]), (((!(arr_47 [i_14] [i_14] [0] [i_14] [i_14])))))))));
                            var_42 = (min((arr_17 [i_14] [i_15]), var_3));
                        }
                    }
                }
                var_43 = (((((min((~var_14), ((max(32477, var_19))))) + 9223372036854775807)) << (var_8 - 14)));
                var_44 = (min((((-var_5 ? 50551 : ((((arr_28 [1] [i_14] [13] [i_14] [i_15]) < 65535)))))), var_6));
            }
        }
    }
    #pragma endscop
}
