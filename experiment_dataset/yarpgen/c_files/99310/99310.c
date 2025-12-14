/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = ((((var_7 ? var_4 : var_9)) == var_4));
            var_19 = ((-((var_14 ? var_2 : var_1))));
            var_20 = (var_11 * var_0);
            var_21 = ((166 ? 3798050175647565225 : 75));
            var_22 = var_5;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((-var_13 - (!var_10)));
            var_23 = (var_10 & var_7);
            arr_10 [i_2] [i_2] [i_2] = (var_7 && var_3);
            var_24 = ((var_8 == (var_8 - var_10)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] = (var_0 * var_1);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_25 = (var_1 ? var_7 : (var_10 > var_6));
                var_26 = (var_13 - var_1);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_27 = (var_3 * var_0);
                    var_28 = ((var_2 ? var_2 : var_15));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_29 = (min(var_29, (var_9 > var_6)));
                        var_30 = (((var_0 | var_7) ? var_1 : (var_4 && var_14)));
                        arr_21 [i_0] [i_3] [i_5] [i_4] [i_5] [i_4] = (((((var_12 ? var_12 : var_0))) | var_6));
                    }
                    var_31 ^= (var_10 | var_0);
                }
            }
            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_9] [i_8 - 1] [i_8 - 2] [i_9] = ((var_15 << (var_7 - 21292)));
                            var_32 = (((var_3 & var_15) ? ((var_6 ? var_11 : var_11)) : var_2));
                        }
                    }
                }
                var_33 *= (var_13 - var_13);
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_34 = (var_13 && var_0);

                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    arr_33 [i_10] [i_10] [i_10] [i_10] = (var_14 && var_12);
                    var_35 = (var_1 & var_8);
                    var_36 = (((var_11 + 2147483647) << ((((var_0 ? var_2 : var_1)) - 6821))));
                    var_37 = (((var_5 != var_6) > var_9));
                }

                for (int i_12 = 3; i_12 < 8;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        arr_39 [i_0] [i_3] [1] [1] [i_12 + 1] [i_12] [i_10] = (var_15 * var_14);
                        arr_40 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_10] [i_12] [i_10] = (var_1 != var_1);
                        var_38 = (((var_13 / var_0) ? var_14 : ((var_0 ? var_10 : var_6))));
                    }
                    arr_41 [i_0 + 2] [i_10] [6] [i_12] = (var_3 > var_11);
                    var_39 = -var_6;
                    var_40 = (min(var_40, (var_2 + var_11)));
                }
                for (int i_14 = 3; i_14 < 9;i_14 += 1)
                {
                    arr_44 [0] [i_10] = ((var_15 ? var_10 : var_14));
                    var_41 = (max(var_41, (var_4 / var_12)));
                    var_42 = (var_3 & var_13);

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((var_14 * (var_7 && var_11)));
                        arr_49 [i_10] [i_3] [5] [i_3] [3] [i_3] [5] = (var_11 != var_15);
                        arr_50 [i_10] [i_3] [i_3] [i_10] [i_10] = var_4;
                        arr_51 [i_15] [i_14 + 1] [i_10] [i_10] [i_0] [i_0 - 2] = var_11;
                    }
                }
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    var_43 -= (((var_1 != var_11) ? var_5 : ((var_14 ? var_9 : var_3))));
                    arr_55 [i_10] [0] [0] [i_10] = var_8;
                    var_44 = (var_7 == var_15);
                    var_45 = var_2;
                }
                var_46 = (var_13 | var_2);
            }
        }

        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            arr_58 [7] [i_17] = var_1;
            var_47 = ((var_14 ? (var_15 / var_14) : var_14));
        }
        for (int i_18 = 1; i_18 < 8;i_18 += 1)
        {
            var_48 = ((1 ^ ((var_13 ? var_0 : var_11))));
            var_49 = (var_1 & var_3);
            var_50 *= (var_10 || var_11);
            var_51 = (var_10 || var_5);
            arr_61 [i_18] = (var_14 && var_7);
        }
        for (int i_19 = 1; i_19 < 8;i_19 += 1)
        {
            var_52 = var_3;
            var_53 += (((var_4 + 9223372036854775807) << (((var_1 + 28813) - 61))));
            var_54 = (var_9 & var_2);

            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_55 = (((var_1 == var_7) ? (var_2 / var_2) : ((var_10 ? var_10 : var_9))));
                var_56 = (var_0 / var_0);
                var_57 = ((var_10 ? var_14 : var_6));
                arr_66 [i_19] = (var_6 / var_13);
            }
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                var_58 = (-3798050175647565225 | (!var_9));
                var_59 = (var_14 + var_11);
                arr_70 [i_0] [i_0] [8] [i_19] = var_4;

                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    var_60 += (var_9 && var_15);
                    arr_74 [i_0 - 2] [i_0 - 2] [i_19] [i_22] = (var_13 | var_7);
                }
                for (int i_23 = 0; i_23 < 10;i_23 += 1)
                {
                    var_61 = (var_14 && var_2);
                    var_62 = (min(var_62, (((var_2 ? var_10 : var_0)))));
                    var_63 = (((var_1 && var_3) ^ var_4));
                    var_64 = (max(var_64, (var_3 * var_3)));
                }
            }
            for (int i_24 = 0; i_24 < 10;i_24 += 1)
            {

                for (int i_25 = 2; i_25 < 9;i_25 += 1)
                {
                    var_65 = var_2;
                    arr_83 [i_19] [4] [1] = var_11;
                }
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    arr_88 [i_19] [i_19 + 2] = ((var_3 * (var_3 > var_15)));
                    arr_89 [i_0 + 2] [i_19] [7] [i_24] [i_24] [i_26] = (var_13 >= var_7);

                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        arr_93 [i_0] [i_19] [i_19] [i_26] [i_27] [i_0 + 2] = (((var_6 > var_6) > var_3));
                        var_66 = var_0;
                        var_67 = var_0;
                        var_68 = ((var_3 ? var_9 : var_0));
                    }
                    arr_94 [4] [i_19] [i_19] [i_0] = ((var_6 + (var_13 != var_7)));
                }
                for (int i_28 = 3; i_28 < 8;i_28 += 1)
                {
                    var_69 *= var_1;
                    arr_97 [0] [6] [i_19] [0] [i_19] = var_7;
                }
                arr_98 [5] [i_19] [1] = var_4;
                arr_99 [i_19] = (var_5 >= var_11);
                var_70 = ((var_0 + (var_8 & var_10)));
            }
            for (int i_29 = 3; i_29 < 8;i_29 += 1)
            {
                var_71 = (min(var_71, (((var_8 ? var_15 : var_4)))));
                var_72 = (((var_2 * var_11) || var_12));
                var_73 = var_8;
            }
        }
        for (int i_30 = 1; i_30 < 7;i_30 += 1)
        {
            var_74 = (var_8 & var_5);
            var_75 = ((var_8 && (var_13 && var_1)));
        }
        var_76 = (((var_15 & var_7) != (var_15 != var_15)));
    }
    #pragma endscop
}
