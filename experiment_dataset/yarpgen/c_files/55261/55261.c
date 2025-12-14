/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [8] [8] = (min((max((min(var_4, var_0)), var_4)), var_4));
        arr_4 [1] = (((max((min(var_4, var_1)), (var_2 && var_5)))) ? ((max(var_6, var_9))) : (((max(511, 13874880419860975995)) + ((max(var_4, var_8))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_4;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = var_9;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_14 [i_1] [4] [i_1] [i_1] = (((((var_1 ? var_6 : var_8))) ? var_9 : var_5));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_1] [i_1] [i_5] = ((var_6 ? var_9 : var_1));
                            arr_21 [i_4] [i_2] [1] [i_2] [i_4] = var_5;
                        }
                    }
                }
                arr_22 [i_1] = (!var_5);

                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_1] [i_2] [i_3] [i_6] = ((var_5 | ((var_0 ? var_4 : var_8))));
                    arr_26 [i_6] [1] [1] [i_6] = ((var_7 ? var_1 : var_7));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_1] [i_1] [i_6] [i_3] [i_6] [10] [6] = (((((var_6 ? var_8 : var_5))) ? var_8 : var_0));
                        arr_30 [i_1] [i_6] [i_3] [i_6] [i_6] [i_6] [i_7] = var_7;
                        arr_31 [i_6] = ((!(((var_8 ? var_7 : var_5)))));
                        arr_32 [i_7] [1] [i_6] [12] [i_6] [i_1] [i_1] = var_5;
                        arr_33 [i_1] [i_2] [i_6] [i_6] [i_7] = (var_3 - var_1);
                    }
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_3] [i_2] [3] [i_8] = ((!(!var_8)));
                    arr_37 [i_8] [i_2] [i_2] [i_1] = ((var_4 ? var_4 : var_3));
                    arr_38 [i_1] [i_8 - 1] [i_3] = var_0;

                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_42 [i_1] [0] [6] [i_8] [1] [1] = (var_7 & var_8);
                        arr_43 [i_1] [i_1] [i_1] [i_1] [9] = (266338304 - 13198);
                        arr_44 [i_8] [15] [i_8] [i_8 - 1] [i_8 - 1] = ((var_8 ? var_8 : var_6));
                        arr_45 [11] [i_2] [i_2] [i_2] [i_2] = (!var_9);
                        arr_46 [i_2] [14] [14] [15] [7] = (((((var_1 ? var_8 : var_4))) + var_7));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_51 [i_1] [10] [10] [i_8] [i_10] = var_8;
                        arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (18446744073709551615 & 1);
                        arr_53 [i_1] [i_2] [i_3] [i_3] = (((((var_3 ? var_9 : var_3))) ? var_8 : -var_7));
                        arr_54 [1] [i_1] [1] [i_3] [i_2] [i_1] = ((var_2 ? var_0 : var_5));
                    }
                    arr_55 [i_1] [4] [i_3] [i_3] [3] [i_8] = (var_2 | var_1);
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_58 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = var_8;
                    arr_59 [i_2] [2] [5] [12] [i_3] = (var_6 * var_6);
                    arr_60 [i_1] [12] [i_2] [i_3] [i_11] = (((var_9 ? var_4 : var_7)));
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    arr_64 [5] [i_2] [i_3] [i_12] = ((var_0 | ((var_1 ? var_6 : var_5))));
                    arr_65 [i_1] [i_1] [i_3] [16] = (((var_4 + var_1) ? var_5 : var_0));
                    arr_66 [i_3] [10] [10] [i_3] = ((var_9 ? var_0 : var_8));
                }
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_70 [i_1] [i_2] [i_1] = ((var_9 ? var_1 : var_9));
                arr_71 [i_1] = var_0;
            }
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_74 [i_1] = min((13198 || 18446744073709551615), (var_7 == var_9));
            arr_75 [i_1] = max(-var_0, (max(var_3, ((max(var_8, var_5))))));
            arr_76 [i_1] = var_7;
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            {
                                arr_89 [i_15] [i_15] = var_5;
                                arr_90 [i_15] [i_15] [16] [i_18] = ((((max((var_4 - var_7), (max(var_3, var_2))))) ? (max(var_4, (max(var_2, var_9)))) : (761614013 + -496394804)));
                                arr_91 [i_15] [i_18] = (((((((var_5 ? var_1 : var_6))) + var_3)) == (max((((var_1 ? var_4 : var_5))), (var_7 - var_6)))));
                            }
                        }
                    }
                }
                arr_92 [i_16] [i_15] = ((((min(var_9, var_3))) ? var_6 : ((var_8 ? var_6 : ((var_6 << (var_8 - 4842298078088028302)))))));
            }
        }
    }

    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        arr_95 [i_20] [i_20] = (min((min(((max(496394803, 138827584))), ((var_8 ? var_0 : var_7)))), (max(var_8, (max(var_7, var_3))))));
        arr_96 [i_20] = ((112 ? 102 : -496394804));

        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {

            /* vectorizable */
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                arr_102 [i_21] [i_21] [i_22] = (((((var_8 ? var_7 : var_5))) ? (var_3 != var_0) : var_6));
                arr_103 [i_21] [i_21] = ((var_2 ? var_4 : var_0));
                arr_104 [i_20] [i_21] = (var_2 * var_5);
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 17;i_24 += 1)
                    {
                        {
                            arr_111 [i_20] [i_20] [i_20] [i_21] [i_23] [i_24] = -var_7;
                            arr_112 [i_21] [i_23] [i_22] [18] [i_21] = var_3;
                        }
                    }
                }
            }
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                arr_117 [i_21] [i_21] [i_25] [i_25] = (((var_7 & var_9) / (((((max(var_2, var_7))) ? var_9 : (~var_5))))));
                arr_118 [i_20] [i_21] [i_21] [15] = ((((((min(16180, 87))) + var_1)) / ((max(var_1, var_2)))));
                arr_119 [i_25] [10] [i_21] [i_25] = (max(154, -214718346));
            }
            /* LoopNest 2 */
            for (int i_26 = 3; i_26 < 16;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    {
                        arr_125 [i_21] [i_21] [i_21] [i_21] = (max((max(-var_7, (((var_4 ? var_5 : var_0))))), (max(var_6, var_3))));
                        arr_126 [i_20] [i_20] [i_21] [i_20] [1] [i_20] = (255 ? ((3 ? 102 : 16383)) : -496394804);
                        arr_127 [i_21] = ((((((max(var_1, var_4)) / -var_4))) / ((((max(var_4, var_4))) | (var_0 * var_3)))));
                    }
                }
            }
            arr_128 [i_21] [i_21] = (((((var_1 ? var_9 : var_5))) + (max(((max(var_9, var_5))), ((var_4 ? var_3 : var_8))))));
        }
    }

    for (int i_28 = 0; i_28 < 20;i_28 += 1)
    {
        arr_131 [i_28] = (((((((var_4 ? var_2 : var_2))) <= var_4))) >> (((!(var_3 & var_6)))));
        arr_132 [i_28] [i_28] = ((var_3 - (max(var_3, var_3))));
        arr_133 [i_28] = ((((max(var_0, var_1))) ? (((min(var_2, var_2)))) : (min(var_6, var_4))));
        arr_134 [i_28] = var_1;
    }
    #pragma endscop
}
