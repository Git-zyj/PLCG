/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] |= ((!((min(56176, -1355461534)))));
                            var_17 = (var_15 & 1136734167);
                        }
                    }
                }
                var_18 = (max(var_18, (((max(var_0, (arr_0 [i_1])))))));
                var_19 = (min(var_19, (((var_6 * ((0 ? -64 : ((65529 ? 58 : 5044513105142575477)))))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_20 = (arr_4 [i_4] [i_4]);
        var_21 *= ((var_1 * ((-((9180055825029767954 ? var_6 : var_1))))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_22 = 1406686186;
            var_23 = 2728056091;
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_24 = (245 ? 27884 : 0);
            arr_20 [i_4] = (arr_11 [i_6] [i_6]);
            var_25 = (arr_17 [i_4] [i_4]);
            var_26 += (((arr_9 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6]) % (arr_17 [i_6] [i_6])));
            var_27 = var_9;
        }
        for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {
                arr_27 [i_8] = (((var_3 ? (arr_16 [i_8] [i_7 - 2]) : (((arr_1 [i_4]) / 104)))));
                var_28 = ((-17906245450676721359 ? ((540498623032830257 ? 65 : 35289)) : -66));
                var_29 += (min(14, (max(((var_8 % (arr_14 [1]))), (~87)))));
                arr_28 [i_4] [i_8] [i_8] = ((((-var_15 ? (arr_19 [1]) : (var_6 < 0)))) % (arr_21 [i_4] [18]));
                var_30 ^= ((((var_7 == var_5) ? var_14 : ((-15418 ? 0 : var_14)))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                arr_31 [i_4] [i_4] [i_9] [i_9] = ((-(arr_7 [i_9] [i_9] [i_9] [i_7 - 4])));
                arr_32 [i_4] [i_7] [i_9] [i_9] = (((((((max(var_15, var_16))) ? (((var_1 - (arr_15 [i_4])))) : ((var_16 ? (arr_4 [i_4] [i_7]) : (arr_14 [i_4])))))) - var_2));
                arr_33 [i_7 - 2] [i_9] [i_9] [i_7 - 2] = (arr_29 [i_7] [i_9] [i_4]);
            }
            var_31 = arr_7 [i_7] [i_4] [i_7] [i_7];
        }
        /* vectorizable */
        for (int i_10 = 4; i_10 < 19;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                arr_40 [i_10] [i_10] [1] [i_10] |= 3046760546;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_32 = (((arr_39 [i_10 - 4] [i_11] [i_11]) ? (arr_39 [i_10 - 4] [i_11] [i_10]) : var_9));
                            arr_47 [i_12] [i_11] = ((((((var_6 ? var_3 : 35289)) + 2147483647)) << (((((arr_17 [i_13] [i_4]) % 35264)) - 10060))));
                            arr_48 [i_4] [i_10] [i_11] [i_12] [i_4] [i_11] = ((var_2 % (1 + -580101719)));
                            arr_49 [i_4] [3] [i_11] [i_11] [i_13] = var_14;
                            arr_50 [i_13] [i_10] [i_13] &= var_10;
                        }
                    }
                }
                arr_51 [i_4] [i_11] [i_4] [i_11] = 0;
                arr_52 [i_11] [i_10] [i_11] = (!(((17906245450676721359 ? 9548432572184404885 : 65))));
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_33 = (arr_41 [i_16 + 1] [i_16] [i_10 - 1] [i_10 + 1] [i_10] [6]);
                            var_34 -= -1926389406;
                            var_35 = (min(var_35, var_10));
                        }
                    }
                }
                var_36 = (!var_1);
                arr_60 [i_14] = var_3;
            }
            arr_61 [i_4] [20] [i_4] = (((var_6 - 66) ? -16085690 : ((var_2 ? var_10 : (arr_30 [i_10])))));
        }
    }
    for (int i_17 = 2; i_17 < 14;i_17 += 1)
    {
        var_37 ^= ((!((min((arr_55 [i_17 - 1] [i_17 - 1] [i_17 - 1]), 34787)))));
        var_38 = (arr_54 [i_17] [i_17]);
    }
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_80 [0] [i_18] [i_19] [i_20] [i_21] [0] = (((((~(arr_25 [i_18] [i_19] [i_20] [i_22])))) % (((arr_54 [i_20] [i_21]) ? ((var_11 >> (var_9 - 1174490556464570009))) : (arr_45 [i_19] [i_19] [i_20] [i_20] [i_22])))));
                                var_39 ^= ((((((arr_70 [i_18] [i_18] [i_18] [i_18]) + 2147483647)) >> (((arr_43 [i_21] [i_21] [i_22] [i_22] [i_22]) - 1077426846)))) / ((min(var_10, var_4))));
                                var_40 |= ((((max(17906245450676721359, -11))) ? ((min((arr_64 [i_18] [i_19]), (arr_64 [i_18] [i_21])))) : (arr_64 [i_19] [i_20])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 21;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 20;i_24 += 1)
                        {
                            {
                                arr_86 [i_18] [i_18] [i_18] [i_19] [i_18] [i_18] [i_18] = ((((((arr_0 [i_19]) ? 0 : (arr_0 [i_19])))) ? (((arr_0 [i_19]) ? (arr_0 [i_19]) : var_12)) : ((min((arr_0 [i_19]), (arr_0 [i_19]))))));
                                arr_87 [i_19] [i_19] = ((min((((var_9 ? var_14 : 1))), (max((arr_41 [i_24 - 1] [20] [i_18] [i_20] [i_19] [i_18]), var_1)))));
                                arr_88 [i_20] [i_20] [i_19] = ((((var_16 ? (arr_67 [i_23 - 1] [i_23 - 1]) : var_2)) + (max((arr_38 [i_23 - 1] [i_19] [i_23 - 2] [i_24 - 1]), var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
