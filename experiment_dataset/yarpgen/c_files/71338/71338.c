/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(5, var_4));
    var_21 = (max((((((max(-6, 7)))) + var_8)), var_12));
    var_22 = ((var_4 & ((var_4 ? ((max(-14, var_3))) : (var_10 & var_14)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(var_4, var_1))) & ((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_11 [i_2] [i_1] [i_1] [i_0] = ((((max((arr_8 [i_1]), (arr_8 [i_1])))) ? ((max((arr_2 [i_1]), var_14))) : ((-89132441 ? var_19 : ((max(var_1, var_10)))))));
                var_23 = ((((((((arr_2 [i_0]) ? -23 : var_7))) ? var_4 : ((var_2 ? (arr_4 [i_0] [i_1]) : -22314)))) - (max(15, (arr_1 [1])))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_24 = (arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]);
                            arr_18 [i_2] = (arr_9 [i_0] [15] [i_3]);
                            arr_19 [i_0] [i_2] = 8;
                            var_25 ^= var_10;
                            var_26 = (max((((!(arr_0 [i_0])))), (((((max((arr_6 [i_3] [i_0]), var_10)))) & (max(var_16, 22323))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_27 = (arr_20 [6] [6] [i_5] [i_6]);
                        var_28 ^= ((-(max((arr_17 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] [i_0]), ((var_3 ? 52 : var_8))))));
                        var_29 = (((((arr_22 [i_6] [i_5] [i_1] [i_0]) ? (arr_22 [i_6] [3] [i_1] [i_0]) : (arr_24 [i_0] [i_1] [i_5] [i_5] [i_6] [i_6]))) - ((-(arr_22 [i_6] [i_5] [i_1] [i_0])))));
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_30 = (arr_15 [i_0] [i_0] [i_0] [i_1] [13]);
                var_31 &= (arr_12 [i_0] [8] [i_1] [1]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_32 = ((((var_8 ? (arr_28 [i_8]) : var_8)) >> (((~var_11) + 148))));
                arr_30 [i_8] [i_8] [i_8] [i_0] = var_12;
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_9] = (max(-8, (max((((arr_34 [8] [i_10] [i_1] [i_0]) ? var_14 : var_11)), var_2))));
                        arr_38 [i_11] [i_10] [i_9] [i_1] [i_0] = (arr_22 [i_0] [i_1] [i_0] [i_0]);
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_33 &= (((max(var_13, (arr_0 [i_9])))) ? ((var_12 >> (((arr_34 [i_1] [i_9] [i_10 - 2] [i_12]) + 95)))) : (((arr_34 [3] [i_1] [i_1] [i_12]) + var_2)));
                        var_34 = (max((max(227, (((((arr_15 [i_0] [i_1] [i_9] [i_1] [i_12]) + 9223372036854775807)) >> (((arr_39 [8] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) + 2267)))))), ((max((!var_17), (!-101))))));
                        var_35 = ((((arr_32 [i_10 + 2] [i_9] [i_1]) << (((((arr_10 [i_1] [i_10 + 3]) ? (arr_25 [11] [i_1] [i_9] [1]) : 255)) - 38701651)))));
                        var_36 = (28594 ? -9223372036854775807 : 3297175601);
                        arr_41 [i_0] [i_1] [i_9] [i_9] [i_12] = (max(var_6, 35264));
                    }
                    var_37 = var_17;
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_38 = var_4;
                    arr_46 [i_0] [i_0] [i_0] [i_9] = 997791679;
                    arr_47 [i_0] [i_0] [9] [i_9] [i_0] [i_0] = var_14;

                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        arr_51 [i_9] [i_1] [i_9] [i_13] [i_14 - 1] [i_14] = (((((-10 && (arr_14 [i_0] [i_1] [i_9] [i_1] [i_14 - 1])))) - 4261412864));
                        var_39 ^= (((!var_14) ? var_4 : var_17));
                    }
                }
                for (int i_15 = 3; i_15 < 13;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        arr_56 [i_0] [i_1] [i_9] [i_15] [i_16] = (((((~var_18) != var_15)) || ((((-(arr_27 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_57 [i_9] = (arr_44 [i_9] [i_1] [i_9]);
                        arr_58 [i_0] [i_1] [i_1] [i_9] [i_0] [i_16] &= (arr_31 [2] [i_1] [i_16]);
                    }
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        var_40 = -6;
                        var_41 = ((-(((arr_33 [i_9] [i_15 - 3] [i_15 - 2] [i_17] [15]) ? var_3 : (arr_27 [i_1] [i_15 - 3] [i_15 - 2] [i_15 - 3])))));
                    }
                    var_42 ^= (arr_49 [2] [0] [i_0] [i_15] [i_15 + 2]);
                    arr_63 [i_9] = (-var_2 == var_14);
                    arr_64 [12] [i_0] [i_15 - 2] &= var_4;
                }
                arr_65 [i_9] [3] [i_9] = (((((var_6 * (arr_31 [8] [i_1] [i_9])))) ? ((var_13 ? (max(var_1, var_8)) : -22314)) : ((max(var_19, 17592185782272)))));
                var_43 = -var_15;
                var_44 = (arr_26 [i_0]);
            }
            arr_66 [i_0] [i_0] [i_1] = ((var_17 ? ((-(arr_22 [i_1] [i_0] [i_0] [i_0]))) : (((arr_22 [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_22 [12] [i_1] [i_1] [i_1])))));
        }
        for (int i_18 = 1; i_18 < 15;i_18 += 1)
        {

            /* vectorizable */
            for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
            {
                var_45 ^= (arr_28 [i_0]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        {
                            var_46 = (65535 + var_14);
                            var_47 = (!(arr_43 [i_19] [i_18 + 1] [i_18] [i_18] [i_18 - 1] [14]));
                            var_48 = var_1;
                        }
                    }
                }
                var_49 ^= var_12;
            }
            for (int i_22 = 0; i_22 < 16;i_22 += 1) /* same iter space */
            {

                for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
                {
                    arr_79 [i_23] = (arr_14 [i_0] [i_18] [i_22] [i_22] [i_22]);
                    var_50 = ((!((((((max(1, var_4)))) | (var_6 * var_14))))));
                    arr_80 [i_0] [i_18] [i_22] [i_23] = (!-8);
                    var_51 = max((arr_34 [i_18 - 1] [i_18] [i_18] [i_23]), (arr_48 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]));
                    var_52 = (((max((max(9223372036854775807, var_15)), ((((arr_45 [i_23] [i_0]) ? (arr_72 [i_23] [i_22] [12] [i_0] [i_0]) : var_19))))) / ((max((((arr_71 [i_22] [14] [11] [i_23]) ? var_17 : var_18)), (var_14 >= var_0))))));
                }
                for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                {
                    arr_83 [i_24] [11] [i_18] [11] = 39;

                    for (int i_25 = 0; i_25 < 16;i_25 += 1)
                    {
                        var_53 ^= ((((((16 ^ (arr_26 [i_22])))))) ^ (arr_35 [14] [i_24] [i_18 + 1] [i_24] [i_0]));
                        var_54 &= ((((((var_15 ? (arr_40 [i_0] [i_0]) : (arr_42 [i_0] [i_18] [i_24] [i_25])))) ? 29 : ((16 ? (arr_21 [i_25] [i_24] [i_18]) : 46)))) > var_9);
                    }
                    var_55 = (max((max((var_14 * var_8), ((((arr_26 [i_0]) / var_16))))), (arr_15 [i_0] [i_18] [i_18 - 1] [i_0] [i_24])));
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        {
                            var_56 ^= var_17;
                            arr_90 [i_0] [i_0] [i_22] [i_27] [i_27] = (max((((+((((arr_72 [i_0] [i_0] [0] [i_0] [i_0]) > var_19)))))), (((((var_0 ? 28601 : var_2))) ? (max(var_8, -14)) : (arr_0 [i_22])))));
                        }
                    }
                }
            }
            for (int i_28 = 0; i_28 < 16;i_28 += 1) /* same iter space */
            {
                var_57 = ((var_19 ? (((arr_48 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 1]) ? (arr_48 [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]) : (arr_48 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1]))) : (arr_48 [i_18 + 1] [i_18 + 1] [i_18] [i_18 - 1])));
                var_58 = (max((arr_82 [i_0]), 6036063653529731787));
            }
            var_59 &= (((!14) ? ((((((-2147483640 + 2147483647) << (48 - 48))) < (arr_24 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1] [i_18 - 1])))) : 1));
        }
    }
    #pragma endscop
}
