/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = (-(arr_1 [i_0]));
        arr_3 [3] = (((((var_5 ? (arr_0 [i_0] [i_0]) : var_4))) ? ((var_2 ? var_18 : var_19)) : var_3));
        arr_4 [i_0 - 1] = ((-(!var_18)));
        arr_5 [i_0] = 990198356;
    }
    var_21 = ((var_4 << (((-var_10 + 20584) - 55))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = (((var_1 ? var_11 : (arr_1 [i_1]))));
        var_23 = (((var_6 < var_0) ? (((arr_7 [i_1]) + var_13)) : 2974864716));
        var_24 = ((var_5 * (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (((((arr_0 [i_2] [i_2]) ? var_9 : (arr_0 [i_2] [i_2]))) + ((var_14 ? (arr_0 [i_2] [i_2]) : var_19))));

        for (int i_3 = 2; i_3 < 6;i_3 += 1)
        {
            arr_14 [i_3] [i_2] [i_2] = ((!(arr_2 [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_25 = ((((((~var_16) & var_17))) & (((~var_11) | (arr_19 [i_5] [i_3 + 1])))));
                            arr_24 [i_5] [4] [i_2] [i_5] [i_6] [i_6] = (((!(var_8 || var_13))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_27 [i_2] [2] [i_3] [i_4] [i_5] [i_5] = ((var_17 ? var_7 : (arr_13 [i_3 + 3] [i_3] [i_4 + 1])));
                            arr_28 [i_2] [i_3] [i_4] [i_3] [i_3] [i_2] [i_7] |= (arr_21 [i_7]);
                            var_26 = ((var_9 ? (arr_12 [i_3 - 2] [i_4] [i_4]) : (arr_12 [i_3 + 3] [i_3] [i_5])));
                        }
                        arr_29 [i_5] = ((!(((var_18 ? -var_5 : var_16)))));
                        var_27 = (min(var_27, (((~((var_19 ? var_14 : (arr_8 [i_3 - 2]))))))));
                        arr_30 [i_2] [i_3] [i_5] = var_4;

                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_5] [9] [i_5] = (var_1 | var_1);
                            arr_35 [i_8] [i_5] [i_5] [i_2] [i_2] = var_19;
                            var_28 = ((((var_18 ? var_1 : var_13) & (arr_26 [i_4 - 3] [i_3] [i_3 - 2] [i_3 - 2] [i_8]))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_29 = (((arr_21 [i_3 + 2]) ? (arr_21 [i_3 - 2]) : var_13));
                            arr_40 [i_5] [i_2] [i_3 - 2] [1] [i_4] [i_5] [9] = var_4;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_44 [i_2] [i_3 + 4] [i_4] [i_5] [i_10] = (((((((-990198357 ? 990198356 : 0))) ? (arr_13 [i_3 + 3] [i_3 - 1] [i_3 - 2]) : var_8)) - ((((((14099 ? -9 : 1))) ? -3211034630246307539 : (arr_15 [i_2] [i_4 - 3] [i_3 + 2] [i_5]))))));
                            arr_45 [i_2] [i_3] [i_4 + 1] [i_4 - 3] [7] [i_5] = var_4;
                        }
                    }
                }
            }
            var_30 = arr_6 [i_3 + 1];
        }
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    var_31 = (((var_18 ? var_9 : var_3)));
                    var_32 = (((((var_6 ? 11169 : var_7))) ? ((((var_17 ? var_8 : (arr_48 [i_11] [i_13]))) << (var_8 - 8892122041877581001))) : ((var_12 ? var_13 : var_1))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {

                        for (int i_17 = 2; i_17 < 8;i_17 += 1) /* same iter space */
                        {
                            var_33 = var_11;
                            arr_64 [i_11] [i_15] [1] [i_14] [i_15] = (arr_37 [i_15]);
                            var_34 = (((((1590058568 ? var_8 : 63))) ? var_2 : (!var_18)));
                            arr_65 [i_11] [i_15] [i_16] [i_17] = (((var_17 ? (arr_2 [i_11]) : var_1)));
                            arr_66 [i_11] [i_15] [i_15] [i_16] = ((18014398509481983 ? -71 : 25));
                        }
                        for (int i_18 = 2; i_18 < 8;i_18 += 1) /* same iter space */
                        {
                            var_35 = ((((((arr_32 [i_11] [5] [i_15]) ? var_15 : 9223372036854775807))) ? var_3 : (arr_50 [i_11] [i_14] [i_15])));
                            arr_70 [i_15] = ((((-990198357 ? -21521 : 9223372036854775807))) ? ((var_15 ? (arr_46 [i_16] [i_11]) : var_10)) : 1);
                            arr_71 [i_11] [i_14] [i_18 - 1] [i_14] [i_11] [i_15] [i_15] = (((~var_18) ? var_6 : (arr_49 [i_16] [i_11] [i_15])));
                            var_36 += ((-var_19 ? var_12 : (arr_67 [i_11] [i_18 + 1] [i_11])));
                        }
                        arr_72 [i_11] [i_15] [i_15] [i_11] = (((9 ? var_5 : var_2)));
                    }
                    arr_73 [i_11] [i_15] [i_15] = (((arr_8 [i_11]) ? (17 & -80) : ((var_6 ? var_10 : (arr_8 [i_11])))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 8;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 8;i_20 += 1)
                        {
                            {
                                arr_78 [9] [i_14] [i_15] [i_14] [i_15] = ((-30260 ? (((0 >> (((~var_16) + 28))))) : (arr_69 [i_11] [i_14] [i_20 - 1] [i_19] [i_15])));
                                var_37 = (arr_22 [i_11] [i_14] [i_15] [i_19] [i_15] [i_20]);
                                var_38 = (((var_5 ? var_14 : (~var_0))));
                            }
                        }
                    }
                    arr_79 [i_15] [i_15] [i_15] [i_11] = ((!((((((17 ? var_6 : var_5))) ? (((var_1 ? var_9 : var_17))) : ((var_18 ? var_11 : var_9)))))));
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 8;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            {
                                arr_86 [i_11] [i_14] [i_14] [i_15] [i_21] [i_22] = ((((((arr_83 [i_11] [i_15] [i_15] [i_15] [i_22]) ? -var_7 : var_7))) ? var_14 : ((-(var_14 | var_17)))));
                                arr_87 [i_11] [2] [8] [i_21 + 2] [0] |= -990198357;
                                var_39 = (((((18014398509481983 ? 63 : -9))) ? (arr_43 [i_14] [i_21 + 1] [i_21 - 1] [i_21 + 1]) : (((arr_43 [i_14] [i_21 - 1] [i_21] [i_21 - 1]) ? -64 : var_11))));
                                arr_88 [i_11] [i_11] [i_15] [i_15] [i_22] = -var_16;
                            }
                        }
                    }
                }
            }
        }
        var_40 = ((-((var_2 ? var_6 : (arr_55 [i_11])))));
    }
    #pragma endscop
}
