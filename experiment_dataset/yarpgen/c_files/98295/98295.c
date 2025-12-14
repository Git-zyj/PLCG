/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 0;
        var_12 = (min(var_12, (var_3 ^ 7)));
        arr_3 [i_0] [i_0] = ((var_2 - ((((max(17, 65518))) ? var_8 : (arr_0 [i_0])))));
        arr_4 [i_0] = 65519;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((!(((65518 >> (65532 - 65516))))));
        var_13 += (3 != 235);
        arr_8 [12] = (min((min(111, (arr_0 [i_1]))), -17));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_14 *= (((min(65532, 237))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_15 = min((!18), (!0));
            arr_13 [13] [i_3] [i_2] = (max(var_6, (max((-9223372036854775807 - 1), -25))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_16 -= 69;
                var_17 = (arr_0 [i_2 + 1]);
                var_18 += (((-9223372036854775807 - 1) ? 65512 : 6));
                arr_17 [i_2] [i_2] [i_2] &= ((var_1 ? (-2147483639 ^ -2147483639) : (~-927740162)));
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] = (((min(((var_1 << (((arr_19 [i_5] [i_2]) - 4460445083663413823)))), (~-2142191930))) / ((~((max(var_5, var_5)))))));
            arr_21 [i_2] [i_5] = var_4;
            var_19 += ((((~(arr_11 [i_2 + 4]))) != (17 > 19)));
            var_20 += ((4 ^ 0) * (~0));
        }
        arr_22 [16] [i_2] = ((!(((((max(31, -1064549398))) ? var_1 : var_10)))));
        var_21 = var_1;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            {
                var_22 += (min(0, 36495));
                var_23 -= (((1 ? -41 : ((~(arr_11 [i_6 + 1]))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_24 -= (((arr_28 [i_8]) ? (arr_28 [i_7]) : (arr_28 [i_6])));
                    arr_31 [i_6] = (((arr_16 [i_6 - 1] [i_7 - 1] [i_7] [i_8]) == (arr_16 [i_6] [i_7 - 1] [i_7] [1])));
                    var_25 = (min(var_25, 14210));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            {
                                arr_39 [i_6] [i_7] [i_6] [i_10] = (~var_3);
                                var_26 = (min(var_26, -36));
                                arr_40 [i_10] [i_10] [i_10] [i_9] [i_10] [i_10] [i_6] = (((var_10 >= var_0) < var_6));
                                var_27 = (min(var_27, (arr_19 [i_6] [i_7 - 1])));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_44 [i_6] [i_6] = ((var_2 ? ((3 ? 17087692512223289308 : (arr_36 [i_6 + 1]))) : var_2));

                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_28 = (!-16);
                        arr_48 [i_6] = ((var_5 << (65535 - 65530)));
                        arr_49 [i_11] [i_7] [i_11] &= (var_11 ^ 3);
                        var_29 = (24 ^ -15);
                        arr_50 [i_6] [i_7] [0] [i_11] [i_12] = ((((((127 == (arr_25 [i_6]))))) == (min((var_8 != var_6), ((255 ? 16352 : 3393902072924202778))))));
                    }
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 7;i_13 += 1) /* same iter space */
                {
                    arr_55 [2] [i_6] [i_6] [i_6] = (arr_36 [i_13 - 3]);
                    var_30 -= (arr_25 [4]);
                }
                for (int i_14 = 3; i_14 < 7;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_63 [i_15] [i_6] [i_7] [i_6] [i_6] = var_6;
                        var_31 = ((var_8 % (max(14, 1))));
                        arr_64 [i_6] [5] [i_14] [1] = (max((52992 != 3393902072924202778), (max((var_11 || 1), 210))));
                    }

                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {

                        for (int i_17 = 2; i_17 < 8;i_17 += 1) /* same iter space */
                        {
                            var_32 ^= ((((((1 - (arr_34 [i_6] [i_7] [i_6] [i_7 + 3]))))) * ((var_7 - (min((arr_46 [i_6] [i_7] [i_14 + 1] [i_14] [i_16] [i_7]), (arr_30 [i_7] [i_7] [i_7])))))));
                            var_33 = (min(var_33, var_3));
                            var_34 = var_6;
                            arr_73 [i_6] [i_6] [i_14 + 3] [i_16] [9] = -47;
                        }
                        for (int i_18 = 2; i_18 < 8;i_18 += 1) /* same iter space */
                        {
                            var_35 = (min(var_35, (((32 ? 3 : -15679)))));
                            var_36 = (max(var_9, var_3));
                        }
                        /* vectorizable */
                        for (int i_19 = 2; i_19 < 8;i_19 += 1) /* same iter space */
                        {
                            var_37 = 10;
                            var_38 = (min(var_38, ((130816 << (-1 + 11)))));
                        }
                        arr_78 [1] [i_7] [i_6] [i_16] = (((!503316480) - ((var_9 ? var_9 : 9223372036854775807))));
                    }
                    for (int i_20 = 4; i_20 < 7;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                        {
                            arr_84 [i_6] [i_6] [i_6] [i_6] [i_6] = -var_2;
                            var_39 = -278460451;
                        }
                        for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                        {
                            arr_87 [i_14] [i_7] [1] [i_20] [i_6] [i_6] = ((+(((arr_32 [i_14] [i_14] [i_14] [i_14 - 3] [i_14]) ? (arr_52 [i_7] [i_7 - 1] [i_6] [i_14]) : (!1763467404868998455)))));
                            arr_88 [i_6] [2] [2] [4] [i_20] [i_20] &= ((~(~var_2)));
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
                        {
                            arr_91 [i_6 - 1] [3] [i_14] [6] [i_6] = (max(((((arr_85 [8] [i_7 + 1] [i_14 + 2] [i_6] [i_20 - 2]) ? 0 : -1))), (min(23, (arr_52 [i_14 + 3] [i_14 + 2] [i_6] [2])))));
                            var_40 = ((min(3, 1056964608)));
                            arr_92 [i_6] [i_20] [i_6] [i_7] [5] [i_6] = (18446744073709551592 ? 1 : 18446744073709551613);
                        }
                        for (int i_24 = 3; i_24 < 7;i_24 += 1)
                        {
                            arr_95 [i_6] [9] [i_6] [i_6] [i_24 - 3] [6] [9] = ((-((-4531785678452986845 ? 1008367445 : var_4))));
                            var_41 ^= (max((((var_1 >= (arr_33 [i_7] [4] [i_7 - 1] [i_7])))), (((arr_51 [1] [i_20] [i_7]) * (127 / 35503)))));
                        }

                        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                        {
                            arr_98 [2] [i_6] [i_7] [i_14] [i_7] [i_6] [i_6] = (arr_81 [7] [i_7 + 1]);
                            arr_99 [i_6] [i_6] [i_6] [i_6] [i_6] = ((!((!(1 == var_3)))));
                            arr_100 [i_6] [i_6 + 1] [i_6] [i_6] [1] [i_6] [7] = var_5;
                        }
                        for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                        {
                            var_42 = (min(var_42, (arr_34 [i_6] [i_7 - 1] [i_20] [i_7 - 1])));
                            arr_103 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = 16;
                            arr_104 [i_6] [i_20] [i_6] [i_7 + 1] [i_6] = (((((arr_37 [i_20 + 2] [i_20] [i_20] [i_20 + 3] [0] [i_20] [i_7 + 2]) ? 88 : var_6)) % ((~(arr_34 [i_6 + 1] [i_7 + 1] [i_14 - 2] [i_20 - 3])))));
                        }
                        var_43 ^= (-2147483647 - 1);
                    }
                }
            }
        }
    }
    var_44 += (((var_10 <= var_9) - var_1));
    var_45 = -4531785678452986838;
    #pragma endscop
}
