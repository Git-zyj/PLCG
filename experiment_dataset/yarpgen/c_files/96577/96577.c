/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_12 ? ((max(var_15, var_8)) : (var_2 << var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((((max((((var_12 >= (arr_1 [i_0] [i_1])))), (((arr_4 [8]) ? var_15 : var_11))))) ? ((((min(var_14, var_14))) >> (var_6 < var_15))) : (((arr_3 [i_1 + 2]) - (arr_3 [i_1 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_18 = (var_2 || var_2);
                                var_19 = ((var_7 ? var_11 : ((((min((arr_1 [11] [i_1]), var_1)) < var_11)))));
                                var_20 = (max(var_20, (((!((max((((var_6 ? (arr_8 [i_0] [i_0] [i_1] [i_1] [i_3] [9]) : var_15))), (arr_8 [i_0 - 1] [i_0] [i_1] [i_2 + 2] [i_1] [i_4])))))))));
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_13 [12] [i_3] [i_5] [10] [i_5] |= ((!(arr_3 [i_3])));
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_1] [i_0] = ((var_2 ? (arr_3 [i_0 + 1]) : ((var_5 ? var_13 : var_2))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_21 = (min(var_21, (arr_1 [i_0] [i_0])));
                                var_22 = ((((((arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [17] [15]) ? (arr_1 [i_0] [i_0]) : var_15))) ? (((var_4 ? (arr_4 [i_3]) : (arr_0 [i_0] [i_1])))) : (arr_2 [i_6])));
                                var_23 = (min(var_23, ((((arr_11 [i_2] [i_1 + 3] [i_1] [i_1] [i_0 + 1] [i_0]) ? (arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6]) : (arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_6] [i_6]))))));
                            }
                            for (int i_7 = 1; i_7 < 19;i_7 += 1)
                            {
                                var_24 = (min(var_24, (((+((var_13 | (((arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_7]) ? var_12 : (arr_5 [i_3] [i_3] [i_2 - 1] [6]))))))))));
                                var_25 ^= ((arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [14]) ^ var_9);
                                var_26 = (arr_17 [i_0] [9] [i_0] [i_3] [i_7 + 2]);
                                var_27 = arr_7 [i_0] [i_0];
                                var_28 = (max(var_28, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_29 = ((((min((arr_27 [i_8 - 1] [i_9] [i_10]), (arr_3 [i_11 + 2]))) << var_13)) * (((((max(var_8, -4961870992433184359)) >= (((-7800133373078126134 ? var_12 : var_5))))))));
                            var_30 -= (min((((arr_12 [16] [i_10] [16]) ? var_8 : ((var_4 ? 1 : var_11)))), ((var_15 ? ((min(var_2, (arr_3 [i_10])))) : var_13))));

                            for (int i_12 = 0; i_12 < 16;i_12 += 1)
                            {
                                arr_34 [i_9] [i_11] = ((((max(((max(var_4, (arr_15 [i_8] [i_9] [i_8] [i_9] [i_12])))), (min(1073741823, var_2))))) ? ((max((arr_26 [i_12] [i_11 + 2] [i_9] [i_9]), ((var_15 ? (arr_4 [i_11]) : var_9))))) : (min(((var_14 | (arr_23 [i_9] [i_10] [7]))), ((((arr_15 [i_8] [i_9] [i_10] [i_11] [i_8]) > -1125005917)))))));
                                arr_35 [i_8] [i_9] [i_8] [0] [0] = ((((min((var_15 <= var_7), ((var_10 ? var_6 : (arr_31 [i_8] [i_9] [5] [i_11] [i_8] [i_11])))))) ? ((((max(4726, 2147483647)) > var_7))) : (min(((var_4 ? var_6 : var_15)), (((arr_19 [i_9]) ? var_6 : (arr_26 [i_8] [i_9] [i_10] [i_11])))))));
                                arr_36 [i_10] [i_11] [i_9] = (min(((((min(var_2, var_1))) ? ((min(var_11, var_14))) : var_6)), (((((var_14 ? -2147483647 : (arr_4 [i_8 - 1])))) ? ((var_7 + (-2147483647 - 1))) : var_10))));
                            }
                            for (int i_13 = 0; i_13 < 16;i_13 += 1)
                            {
                                arr_39 [i_8] [i_8] [0] [i_11] [i_13] [i_13] [i_8] &= var_1;
                                arr_40 [10] [10] [14] [i_10] [i_11 + 2] [i_9] = (min((max((arr_0 [i_10] [i_10]), (min((arr_6 [i_8] [i_10] [i_11] [i_13]), (arr_9 [4] [4] [i_11 + 1] [4] [i_9] [i_8] [4]))))), ((min((arr_19 [i_8 - 1]), (arr_24 [i_9]))))));
                                arr_41 [i_9] = (((arr_15 [i_8] [i_9] [i_10] [i_8] [i_8 - 1]) ? var_12 : ((((~var_2) != (((arr_20 [i_10]) & var_12)))))));
                            }
                            arr_42 [i_9] [i_11] = var_12;
                            arr_43 [i_9] [i_9] [i_10] [i_9] = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_52 [i_8] [i_8] [i_8] [i_9] = (max((max(var_0, (arr_33 [i_16] [i_9] [i_14] [i_9] [i_8]))), (((-(max(var_15, (arr_27 [i_9] [i_9] [i_15]))))))));
                                arr_53 [i_15] [i_9] [i_14] [i_14] &= (max((((arr_1 [i_8 - 1] [i_8 - 1]) ? var_3 : var_9)), ((min(var_6, var_2)))));
                                arr_54 [i_8] [i_8] [i_14] [i_15] [6] [i_15] [i_14] &= max((~var_14), (arr_28 [i_15]));
                                var_31 = (min(var_11, -1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_32 = (-var_3 << var_6);
                            arr_60 [i_8] [i_8] [i_8] [i_9] = (max(((min(var_2, var_15))), (((arr_22 [i_9]) ? (arr_55 [i_8 - 1] [i_18] [i_18] [i_9]) : (arr_12 [i_17] [i_18 + 1] [i_9])))));
                        }
                    }
                }
            }
        }
    }
    var_33 = (((((var_8 & var_9) ? -var_4 : (var_8 - var_12))) == var_3));
    #pragma endscop
}
