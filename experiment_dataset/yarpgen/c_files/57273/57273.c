/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                var_18 = (min(((((arr_1 [i_0]) > (arr_1 [i_0])))), (min((arr_5 [i_1 + 1] [i_0] [i_1 + 3]), var_0))));
                var_19 = max((((arr_5 [i_0 - 1] [i_0] [i_0]) ? var_8 : var_3)), ((((4294967295 * 2147483136) * ((var_3 ? var_6 : var_10))))));
            }
            var_20 = (((((var_1 ? var_3 : var_15))) ? (((-127 ? -127 : -32755))) : (((arr_4 [i_1 + 2]) ? ((max(var_2, var_6))) : (max(var_1, var_15))))));
            var_21 = var_8;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_16 [i_3] [i_0] [i_0] = (max((arr_1 [i_0]), ((-(var_5 || var_0)))));
                            var_22 += (min((~var_0), (max((min(var_11, (arr_6 [10] [i_3]))), (var_6 < var_11)))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_3] = var_7;
            arr_18 [i_0] [i_0] [i_0] = (max(((((((arr_2 [i_0] [i_0]) >= (arr_1 [i_0])))) + 65512)), (((((arr_6 [i_0] [i_3]) << (var_2 - 1281845368))) - ((var_9 ? var_17 : (arr_3 [i_0] [i_0])))))));
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_21 [i_0] [i_0] = (((2147483647 != var_8) ? var_2 : ((var_1 ? var_7 : (arr_3 [i_0] [i_7])))));

            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                var_23 -= var_9;
                var_24 = var_16;
                var_25 = (arr_20 [i_0] [i_8 - 1]);
                arr_26 [i_0 + 1] [i_0] [i_7] [10] &= (~2147483643);
                var_26 = ((((((-9223372036854775807 - 1) ? 32765 : 65491))) ? 117 : ((((arr_15 [i_0] [i_7] [7] [5] [3] [i_0] [i_0]) ? 65473 : var_6)))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_27 = var_15;
            var_28 = ((var_13 ? var_17 : (arr_13 [i_0] [i_9] [i_9] [i_9])));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {

            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                var_29 = max(2031616, 37);
                arr_34 [i_0] [i_10] = var_13;
                var_30 += (((arr_33 [4] [i_10] [i_11]) ? (arr_20 [2] [i_11 - 3]) : var_14));
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_31 = ((10 ? (min((var_17 * var_13), (arr_33 [i_0] [7] [1]))) : (((~((var_15 ? (arr_6 [i_0] [4]) : (arr_1 [i_0]))))))));
                arr_38 [i_10] [i_10] [i_0] [i_10] = -99;
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_44 [i_0] [i_10] [i_12] [i_0] [i_0] = (max((-2147483647 - 1), ((var_11 ? -126 : 0))));
                            arr_45 [i_0] = ((((((var_7 / var_7) ? (arr_40 [i_0] [i_12] [3] [i_12]) : 4294967291))) ? ((var_17 / (var_1 / 8191))) : ((((min((arr_23 [i_0]), var_6))) ? (((arr_41 [i_13] [i_13] [i_13] [i_13] [i_13]) * (arr_22 [i_10] [i_0]))) : var_17))));
                            var_32 += ((+(((arr_37 [7]) ? (arr_10 [i_0 - 3] [0] [i_14]) : var_11))));
                            var_33 *= (min(((((((arr_9 [4] [4]) * (arr_43 [1] [8] [8] [i_13] [10] [i_14])))) ? var_11 : -2147483647)), ((min((arr_36 [0] [i_0 + 1] [i_13] [i_13 + 1]), var_5)))));
                        }
                    }
                }
            }
            for (int i_15 = 4; i_15 < 10;i_15 += 1)
            {
                arr_50 [i_0] = (((max(var_3, (arr_14 [i_0] [i_0 + 2] [i_0] [i_15 + 2] [8] [3]))) < ((var_0 ? (arr_14 [i_0] [i_0 + 1] [2] [i_15 - 4] [1] [i_10]) : (arr_19 [i_0])))));
                arr_51 [11] [i_0] [i_0] [i_0] = (!3);
            }
            arr_52 [i_0] [i_0] [i_0] = var_5;
            var_34 = var_16;
        }
    }
    for (int i_16 = 3; i_16 < 10;i_16 += 1) /* same iter space */
    {
        arr_55 [i_16] = var_9;
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_63 [i_18] [i_17] [i_18] = var_12;
                    var_35 = (max((((((var_16 ? var_1 : (arr_54 [i_17])))) ? var_16 : (min(var_4, (arr_31 [i_17] [i_18]))))), (((((arr_20 [i_18] [8]) ? var_14 : -2147483632)) >> ((((var_11 ? var_8 : var_2)) - 6476353022519572769))))));
                    var_36 = (~25);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 9;i_21 += 1)
                {
                    {
                        var_37 = ((~(((((2147483628 ? 1 : -2147483642))) ? (var_13 == var_5) : ((65492 ? (-127 - 1) : 57344))))));
                        arr_73 [i_21] = var_7;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 12;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                {
                    var_38 = (max((((((min((arr_0 [i_22]), 2040))) ? (-2147483647 - 1) : 12))), 5));
                    arr_82 [i_22] [1] [1] [i_22] = ((((var_1 || var_9) % (var_11 >= var_6))));
                    /* LoopNest 2 */
                    for (int i_25 = 2; i_25 < 11;i_25 += 1)
                    {
                        for (int i_26 = 2; i_26 < 11;i_26 += 1)
                        {
                            {
                                var_39 = ((-(((!((min(var_15, var_9))))))));
                                var_40 = (arr_59 [i_23]);
                            }
                        }
                    }
                    var_41 = (arr_43 [i_22] [4] [10] [i_22] [4] [i_22]);
                    arr_88 [i_23] = (((max(var_17, (arr_77 [i_22] [i_22]))) + (max((((arr_74 [5]) ? var_2 : 128)), var_5))));
                }
            }
        }
    }
    var_42 += var_4;
    #pragma endscop
}
