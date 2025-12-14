/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_3;

                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = (arr_7 [i_0] [i_0]);
                    arr_10 [i_0] = (~((max(208, 255))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_8 || (((var_13 ? var_1 : var_0)))));
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] = (arr_8 [i_1]);
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = ((var_3 ? (var_12 ^ var_0) : 109));
                        arr_18 [i_0] [i_0] [i_1] [1] [i_3] [i_4] = 14;
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = (((arr_1 [i_3]) % (var_5 <= var_12)));
                        arr_22 [i_5] [i_3] [i_3] [i_0] [i_0] = (max((min((min(var_5, 137430564864)), (((!(arr_0 [9])))))), (arr_20 [i_0] [i_3] [i_1] [i_0])));
                    }
                    arr_23 [i_0] [i_1] [i_1] [1] = (!-83081739);
                }
                arr_24 [i_1] [i_0] = (arr_3 [i_0] [i_0]);
                arr_25 [i_1] = var_10;
            }
        }
    }
    var_14 &= (!var_10);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                arr_30 [i_6] = var_13;
                arr_31 [i_6 - 1] [i_6] = (((arr_13 [i_6] [i_6 - 1] [i_6] [7]) ? (((arr_13 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_7]) * 1)) : (arr_13 [i_6 - 1] [i_6 + 1] [2] [i_6 - 1])));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_40 [i_6] [i_9] [i_9] [i_9] [i_9] = ((-(var_11 - 65535)));
                                arr_41 [i_6] = ((var_7 ? (((arr_20 [10] [i_9] [i_8] [i_7 - 1]) & var_2)) : (((((arr_1 [i_6]) >> (var_1 - 214))) << (((~var_11) + 22898))))));
                                arr_42 [i_6] = (((-1 ? ((var_7 ? (arr_39 [1] [i_9] [i_8] [i_7]) : 29064)) : 62)));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_46 [i_6] [i_6] [i_6 + 1] = ((-(((arr_45 [i_6] [i_6] [i_6] [i_6]) ? (arr_27 [i_6 - 1]) : ((min(118, var_7)))))));
                        arr_47 [i_11] = (((((-((var_3 ? var_11 : var_4))))) || (-137430564864 / -137430564864)));
                        arr_48 [i_6] [i_6] [i_6] [i_6] = ((!(((-1 ? 137430564864 : 56626)))));

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            arr_51 [i_6] [i_7] = ((107 ? ((var_0 ? (arr_49 [i_6 + 1] [i_7] [i_8]) : (arr_33 [i_6]))) : (arr_38 [i_6] [i_6 - 1] [2] [i_6] [i_6])));
                            arr_52 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8] [i_11] [i_12] = (!(arr_38 [i_12 + 1] [i_12] [i_12 + 1] [i_6] [i_12 + 1]));
                            arr_53 [i_6] = (arr_6 [6] [i_8] [i_11]);
                        }
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            arr_58 [i_6] [i_11] [i_8] [i_11] [i_6] = (((2 / 1) ? (((arr_3 [i_13 - 1] [i_7 - 1]) ? var_5 : (arr_28 [i_6] [i_11]))) : var_5));
                            arr_59 [i_8] [i_6] = arr_57 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1];
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            arr_63 [i_6] [i_6] [i_6] [i_6] [i_11] [i_14] = ((((-(arr_19 [i_6] [i_6 - 1] [i_6 - 1]))) / (arr_49 [i_14] [i_11] [i_7])));
                            arr_64 [i_6] [i_6] [i_6] [i_11] [i_8] = (((((arr_36 [i_7] [4]) + 9223372036854775807)) << (!var_5)));
                            arr_65 [i_6] [16] [i_6] = (-1 * -114);
                            arr_66 [i_11] [i_8] [i_8] = (((var_7 + 2147483647) >> (arr_1 [i_6])));
                        }
                        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            arr_70 [i_6] = (min((~var_11), (max((var_9 | 1), ((max(var_3, (arr_33 [i_6]))))))));
                            arr_71 [i_11] = (11 || -34885);
                        }
                        arr_72 [i_6] [i_6] [i_8] = ((((arr_7 [i_6 + 1] [8]) || -82)) || 1);
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_78 [6] = (arr_50 [0] [i_7] [0] [5]);
                                arr_79 [i_6] [i_16] [i_7] [i_6] = var_0;
                                arr_80 [i_8] [i_8] [i_6] [i_8] = (i_6 % 2 == zero) ? (((2116 ^ (((arr_61 [i_6] [i_7 - 1] [7] [7] [i_6]) << (((arr_62 [16]) - 1))))))) : (((2116 ^ (((((arr_61 [i_6] [i_7 - 1] [7] [7] [i_6]) + 2147483647)) << (((arr_62 [16]) - 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
