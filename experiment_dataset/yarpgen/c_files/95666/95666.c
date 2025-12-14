/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = 15;
                                var_13 = (((96 ? -121 : -93)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((-(((arr_6 [i_1 - 1] [i_1]) ? 96 : -96))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_2] [i_5] [i_2] [i_1] [i_0] = var_6;
                                arr_22 [i_1] [i_1] [i_6] [i_2] [i_6] [i_5] [i_6] = ((~(max(var_6, ((16777214 << (121 - 102)))))));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_14 = (((((~var_2) > ((var_0 ? 3758096384 : 0)))) ? (((arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1]) ? var_8 : 255)) : var_0));
                    arr_25 [i_7] [i_1] = var_9;

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_7] [i_1] [i_0] = 4192256;
                        arr_30 [i_0] [i_1] [i_7] [i_8] = var_2;
                        arr_31 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_12 [i_0] [i_1] [i_7] [i_7] [i_8])))) == var_5));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_36 [i_1] [i_7] [i_9] = ((~(arr_16 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1])));
                            arr_37 [i_10] [i_10] [i_9] [i_7] [i_1] [i_0] = ((-(arr_34 [i_0] [i_0])));
                            var_15 = var_7;
                            var_16 = ((-95 ? ((var_4 ? var_5 : var_8)) : (-32767 - 1)));
                            arr_38 [i_1] = ((((arr_27 [i_10] [i_7] [i_7] [i_10] [i_1]) > var_4)) ? (2340143718 | 3831798191805996381) : var_9);
                        }
                        for (int i_11 = 3; i_11 < 8;i_11 += 1)
                        {
                            var_17 = ((~(arr_34 [i_1] [i_1 + 1])));
                            var_18 = ((var_9 ? var_2 : 0));
                            arr_42 [i_1] [i_9] = (!var_8);
                            arr_43 [i_0] [i_1] [i_7] [i_9] [i_11] [i_11] = ((var_9 >> (((arr_12 [i_9] [i_1] [i_7 + 1] [i_9] [i_11 + 2]) - 119))));
                        }
                        for (int i_12 = 4; i_12 < 10;i_12 += 1)
                        {
                            arr_46 [i_0] [i_12] [i_7] [i_12] = (var_10 / (arr_16 [i_0] [i_1] [i_7] [i_9 - 1] [i_9] [i_12]));
                            arr_47 [i_12] [i_1] [i_7] [i_9] [i_12] = -var_6;
                        }
                        var_19 = ((~(arr_24 [i_0] [i_1 + 2])));
                        var_20 = (!141);
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_21 = ((((min((arr_33 [i_0] [i_1] [i_7] [i_7] [i_13]), var_0)))) ^ 2703099014453993053);
                        arr_50 [i_13] [i_7] [i_1] [i_0] = ((~((min(90, var_7)))));
                    }
                    arr_51 [i_0] [i_1] [i_1] [i_7] = var_5;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 8;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 8;i_16 += 1)
                        {
                            {
                                arr_61 [i_0] [i_14] = var_5;
                                var_22 = ((arr_55 [i_1] [i_16] [i_1] [i_16 - 2]) ? (arr_55 [i_0] [i_15] [i_14] [i_16 - 2]) : var_10);
                                var_23 = (var_7 % var_9);
                            }
                        }
                    }
                    var_24 = 29803423;
                    var_25 = ((-(arr_4 [i_1 + 2] [i_1 + 2])));
                    arr_62 [i_0] [i_1] [i_14] = ((-(166 ^ var_5)));
                    var_26 = (((((var_5 != (arr_41 [i_0] [i_1] [i_1] [i_14] [i_14])))) & (((15743645059255558547 <= (arr_32 [i_0] [i_0] [i_1] [i_14]))))));
                }
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    arr_66 [i_1] [i_1] [i_17] = var_8;
                    arr_67 [i_0] = var_0;
                    arr_68 [i_0] [i_1] [i_17] [i_17] = (arr_49 [i_0] [i_1] [i_17] [i_1] [i_17] [i_17]);
                }
                var_27 = var_7;

                for (int i_18 = 2; i_18 < 8;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            {
                                arr_76 [i_0] [i_1] [i_18] [i_18] [i_19] [i_19] [i_20] = ((~((var_0 ? (arr_8 [i_0] [i_0] [i_0] [i_1 - 2]) : (arr_53 [i_18 + 1] [i_18 + 3] [i_18] [i_18])))));
                                var_28 = -var_2;
                                arr_77 [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                            }
                        }
                    }

                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_22 = 2; i_22 < 10;i_22 += 1)
                        {
                            var_29 = ((var_9 ? (!64) : 2765575582));
                            var_30 = var_9;
                        }
                        var_31 = var_8;
                    }
                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {

                        for (int i_24 = 2; i_24 < 9;i_24 += 1)
                        {
                            var_32 = ((49625 ? 4192238 : 107));
                            var_33 = (((arr_58 [i_0] [i_1] [i_23]) ? ((var_3 ? (arr_79 [i_1] [i_18] [i_23] [i_24]) : var_2)) : var_0));
                        }
                        var_34 = (((!var_9) ? (!54660) : var_2));
                        var_35 = ((var_8 <= (arr_13 [i_1 + 2] [i_1] [i_1] [i_1] [i_18 + 3] [i_23])));
                        arr_90 [i_23] [i_18] [i_18] [i_1] [i_0] = ((4294967295 << (((arr_72 [i_1 - 2] [i_1 - 1] [i_1 - 2]) + 652110566))));
                    }
                    arr_91 [i_0] [i_18] [i_1] = var_5;
                    var_36 = ((((min((arr_71 [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_71 [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1])))) ^ (arr_87 [i_0] [i_1] [i_18] [i_1])));
                }
                for (int i_25 = 1; i_25 < 10;i_25 += 1)
                {
                    arr_95 [i_0] [i_1] [i_25] [i_25] = (arr_86 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 + 1] [i_25]);
                    var_37 = ((var_6 >= (4475073371021543216 && var_1)));
                }
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    var_38 = (max(-var_9, ((((var_6 ^ var_3) >= ((min((arr_7 [i_26]), var_2))))))));
                    var_39 = (min(0, 7));
                    var_40 = var_0;
                }
            }
        }
    }
    var_41 = (~1);
    #pragma endscop
}
