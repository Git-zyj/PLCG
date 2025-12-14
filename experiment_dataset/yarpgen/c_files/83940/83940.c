/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_4;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = (max(var_14, var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 += var_8;
                                arr_16 [i_0 + 1] [i_4] [i_4] [i_3] [i_4] [i_2] = (!var_1);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        var_16 = (((arr_19 [i_0] [i_1] [i_2] [i_5] [i_5]) ? (~var_5) : var_9));
                        var_17 = var_12;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] = ((-((var_2 ? var_9 : var_7))));
                            arr_25 [i_0] [i_1] &= ((~(arr_0 [i_0 - 2])));
                        }
                    }
                    var_18 = 125;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_19 ^= ((~((-(1 - 13624)))));
                    var_20 -= (~((~(min(var_7, var_6)))));
                    var_21 = var_3;

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_22 = ((var_7 ? var_10 : var_11));
                        arr_32 [i_7] = ((!(~9613)));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_23 = (((((-(arr_11 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 2])))) ? (((!(arr_11 [i_0] [i_1] [i_8] [i_9])))) : (arr_9 [i_9] [i_8] [i_7] [i_1] [i_1] [i_0 - 2])));
                            arr_35 [i_7] [i_0] [i_1] [i_8] [i_8] [i_9] [i_7] = ((((max(var_3, (-148808717 % 4294967288)))) ? ((var_6 ? (arr_3 [i_9] [i_9]) : (arr_34 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_7]))) : (((-(~var_11))))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_24 ^= 82827795;
                            arr_42 [i_11] [i_11] [i_7] [i_7] [i_1] [i_0] = (~var_11);
                        }
                        var_25 = 1;
                        var_26 = (arr_37 [i_7]);

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_46 [i_0 + 1] [i_7] [i_10] = ((var_10 ? 21 : var_0));
                            var_27 += ((~(arr_10 [i_12] [i_10] [i_10] [i_7] [i_1] [i_0 + 2])));
                        }
                        var_28 = ((!(-44 + 51924)));
                    }
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        arr_50 [i_0] [i_1] [i_7] [i_1] [i_7] [i_13] &= ((((((var_5 ? var_7 : var_12)))) ? 128 : ((~((~(arr_21 [i_0])))))));
                        var_29 = var_9;
                        arr_51 [i_0] [i_1] [i_7] [i_13] &= (1 || var_2);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_30 = ((var_10 ? 16875 : (arr_23 [i_0] [i_1] [i_0 + 2] [i_14])));
                                var_31 = (max((!var_7), -var_4));
                                var_32 = var_0;
                                var_33 = (((((169 ? 826260254 : (~var_0)))) ? (1 | 1) : var_9));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    arr_59 [i_16] [i_1] [i_0] = -76;
                    var_34 = var_12;
                    var_35 = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 8;i_18 += 1)
        {
            {
                arr_64 [i_17] = -var_2;
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        {

                            for (int i_21 = 0; i_21 < 1;i_21 += 1)
                            {
                                arr_74 [i_17] [i_20] [i_19 - 1] [i_20] [i_21] = var_5;
                                var_36 = (arr_66 [i_20] [i_19] [i_17]);
                                var_37 += ((((((arr_65 [i_20] [i_17]) * (arr_71 [i_21] [i_20] [i_19 + 1] [i_18] [i_17]))) * var_7)));
                                var_38 = (~1);
                                arr_75 [i_20] [i_18 + 2] [i_19] [i_20] [i_21] = ((((max(var_9, var_2))) ? ((-(arr_72 [i_17] [i_17] [i_19 - 1] [i_19 - 2] [i_20]))) : 1));
                            }
                            for (int i_22 = 0; i_22 < 12;i_22 += 1)
                            {
                                var_39 ^= (max(((((var_7 ? var_7 : (arr_62 [i_17]))))), (max(1, 5500))));
                                arr_78 [i_17] [i_20] [i_19 + 1] [i_20] [i_22] = ((~((var_2 % (arr_72 [i_19 + 1] [i_20] [i_20] [i_20] [i_22])))));
                                arr_79 [i_17] [i_18] [i_19] [i_20] [i_22] = (((((((max(5496, var_9))) ? var_10 : 5503))) ? var_10 : var_1));
                                var_40 &= var_11;
                            }
                            for (int i_23 = 2; i_23 < 10;i_23 += 1)
                            {
                                var_41 = var_4;
                                arr_82 [i_20] [i_17] [i_17] [i_17] [i_17] = 246;
                            }

                            for (int i_24 = 0; i_24 < 12;i_24 += 1)
                            {
                                var_42 = (-3348034632260475194 == var_11);
                                arr_85 [i_18] [i_18] [i_20] = 82827792;
                            }
                            /* vectorizable */
                            for (int i_25 = 1; i_25 < 8;i_25 += 1)
                            {
                                var_43 = var_1;
                                var_44 = (((var_5 % var_1) ? var_3 : ((var_0 ? (arr_69 [i_20] [i_19] [i_20] [i_25]) : 3288258442640021005))));
                                arr_88 [i_20] [i_19 + 1] [i_19] [i_20] [i_25] = (~1);
                            }

                            /* vectorizable */
                            for (int i_26 = 0; i_26 < 12;i_26 += 1)
                            {
                                var_45 = (((arr_63 [i_17] [i_17]) ? var_4 : var_3));
                                arr_93 [i_20] [i_19] [i_18 + 4] [i_20] = (!(arr_92 [i_18 - 2] [i_19] [i_19] [i_20] [i_26] [i_26] [i_26]));
                                var_46 = var_1;
                                var_47 = var_5;
                                var_48 = (var_11 ? var_4 : (arr_86 [i_18 + 2] [i_18 + 1] [i_19 - 2] [i_20] [i_26]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_49 = 1432773629;
    #pragma endscop
}
