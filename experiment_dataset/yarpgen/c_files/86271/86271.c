/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86271
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
                var_15 = (((min(var_8, ((var_2 ? var_3 : var_1)))) > (((var_5 && ((min(var_11, var_2))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 -= var_1;
                    var_17 |= (max((max(var_1, var_7)), (((var_1 != var_1) & ((var_6 ? var_7 : var_6))))));
                    var_18 += (((((((var_5 ? var_10 : var_5))) ? var_14 : ((var_14 ? var_3 : var_6)))) - ((((max(var_9, var_7))) ? var_8 : var_3))));
                    var_19 -= (((min(var_2, var_7)) + (((var_8 ? var_14 : var_1)))));
                    var_20 += (((var_8 || var_12) ? ((((min(var_11, var_13))) ? (max(var_7, var_1)) : ((max(var_3, var_8))))) : ((var_1 ? var_7 : var_0))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_21 = (max(var_21, ((min(((((var_8 ? var_3 : var_1)) | ((var_10 ? var_5 : var_10)))), (1 && 2147483647))))));
                    arr_11 [i_1] [i_1] [i_1] = (((((var_10 >> ((((var_5 ? var_0 : var_2)) - 18446744073419695059))))) ? ((((((var_5 ? var_4 : var_14))) ? ((var_6 ? var_7 : var_10)) : (var_6 + var_13)))) : ((((max(var_8, var_6))) ? (((min(var_1, var_6)))) : (min(var_6, var_9))))));
                    var_22 -= (max((var_3 >= var_8), (min(((var_9 ? var_10 : var_4)), (((var_0 ? var_11 : var_9)))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((max(var_2, var_3)) != var_6)))));
                        arr_14 [i_0] [i_1] [i_3 - 1] [i_4] = (((1 ^ 2147483647) ? ((var_5 ? var_6 : var_2)) : (((((var_5 ? var_6 : var_10)) / var_6)))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = (((((((-2147483647 - 1) >= 128)))) == (min(var_3, var_9))));
                        var_25 = ((((((min(var_10, var_9))) ? ((var_12 ? var_2 : var_0)) : (var_2 + var_13))) - (((var_0 ? (((var_2 ? var_14 : var_5))) : var_9)))));
                        arr_19 [i_1] = (((min(((2147483647 ? 15 : -2120826572897948264)), ((max(1, 1030)))))) - (max(var_2, var_7)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] = (var_9 | var_14);

                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_26 = ((var_9 ? var_0 : var_4));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] = (var_14 ^ var_3);
                            arr_26 [i_1] [i_6] [i_0] [i_1] [i_1] = (var_10 ? var_6 : var_0);
                            var_27 = (var_0 / var_13);
                            var_28 += (((var_3 + 2147483647) << (var_4 - 4562686952478311172)));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_30 [i_1] = ((var_7 ? var_7 : var_10));
                            var_29 = (max(var_29, (((var_9 >> (var_5 + 11065))))));
                            arr_31 [i_6] &= ((var_2 ? var_7 : var_5));
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            arr_35 [i_1] [i_1] [i_1] [19] [i_1] = ((var_7 ? var_5 : var_1));
                            arr_36 [i_0] [i_1] [i_3 - 1] [i_1] [i_9] = ((((var_4 ? var_7 : var_7))) ? (var_11 * var_12) : ((var_4 ? var_4 : var_8)));
                            var_30 *= var_8;
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_31 |= ((var_3 ? var_2 : var_13));
                            var_32 = (var_2 && var_11);
                        }
                        arr_39 [i_1] [i_1] = ((var_7 ? var_4 : var_4));
                        arr_40 [i_0] [i_1] [i_3] [i_1] = (var_13 ^ var_3);
                        arr_41 [i_1] = ((var_8 ? var_2 : var_2));
                    }
                    var_33 = (min(var_33, (((((max(((var_13 ? var_6 : var_2)), (((var_4 ? var_9 : var_6)))))) || ((((((var_8 << (var_12 - 1673745099)))) ? (((max(var_10, var_14)))) : ((var_13 ? var_11 : var_12))))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_34 = ((var_6 ? var_13 : var_5));
                    arr_46 [i_11] &= ((var_12 ? (var_12 * var_5) : var_12));
                    arr_47 [i_1] = ((var_14 ? ((var_9 ? var_11 : var_8)) : var_0));

                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        var_35 = ((var_10 + var_7) || var_6);
                        var_36 = ((var_6 >> (var_10 % var_10)));
                        arr_52 [i_11] [14] [i_11] [i_12 - 1] &= ((var_6 >> (var_11 - 158906927)));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_37 = (var_13 % var_11);
                        arr_55 [i_13] [i_13] [i_1] [i_0] [i_0] = ((var_12 | (var_3 - var_3)));

                        for (int i_14 = 3; i_14 < 21;i_14 += 1)
                        {
                            arr_59 [i_1] [i_11] [i_13] [i_14 + 1] = ((var_13 ? var_5 : var_0));
                            var_38 = ((14 ? 2147483647 : 1));
                            arr_60 [i_0] [i_1] [i_11] [i_1] [i_14] = (var_8 - var_8);
                            arr_61 [i_0] [i_0] [4] [i_11] [i_11] [6] [i_0] &= var_11;
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            arr_66 [11] [i_1] [i_1] [i_13] [i_15] = var_12;
                            arr_67 [i_0] [i_1] [i_1] [i_1] [i_0] = (var_2 / var_0);
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            arr_72 [0] [i_11] [i_0] &= ((var_6 ? var_8 : var_9));
                            var_39 += (var_13 != var_3);
                            var_40 += var_6;
                            arr_73 [i_0] [i_1] [i_11] [i_1] [i_1] [i_0] = var_8;
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            var_41 = (var_6 ? var_13 : var_13);
                            var_42 = ((-2147483642 ? (((254 ? 1 : -32766))) : 0));
                        }
                        var_43 ^= (62 >= 0);
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            arr_81 [i_19] [i_1] [i_19] [i_18] [i_1] = (var_13 != var_13);
                            arr_82 [i_19] [6] [i_1] [1] [i_0] = (var_7 - var_1);
                            var_44 &= ((var_8 ? var_10 : var_3));
                        }
                        arr_83 [i_1] [0] [i_1] [i_0] [i_1] = ((var_4 ? var_7 : var_12));
                        var_45 = ((1030 ? (1 - 83) : 3177927674));
                        var_46 = ((var_6 >> (var_10 - 130)));
                        var_47 = ((((122 ? 122 : 15925645317883772104)) >> ((((var_14 ? var_4 : var_6)) - 4562686952478311135))));
                    }
                    for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                    {
                        arr_86 [i_1] [i_11] [i_1] = (var_12 || var_4);
                        var_48 ^= (var_11 + var_12);
                    }
                    arr_87 [i_1] [i_1] [i_0] [i_11] = ((var_13 ? var_11 : var_14));
                }
                arr_88 [i_1] [i_1] = max((max(((var_12 ? var_11 : var_13)), (var_6 - var_1))), (max(var_0, var_11)));
                arr_89 [i_1] [i_1] = (((((var_5 ? var_7 : var_2))) ? ((((min(var_6, var_13))) ? var_0 : var_0)) : ((var_1 >> (var_10 - 125)))));
                var_49 *= ((((((((var_13 >> (var_0 + 289856554)))) ? var_2 : (max(var_7, var_4))))) ? ((var_4 ? var_3 : var_11)) : ((var_0 ? var_13 : ((var_9 ? var_11 : var_13))))));
            }
        }
    }
    var_50 = ((((min(var_14, var_3))) | var_13));
    #pragma endscop
}
