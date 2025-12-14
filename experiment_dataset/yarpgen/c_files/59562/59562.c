/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += ((var_6 - (((var_10 >= (var_11 >= var_4))))));
                arr_4 [i_0] [i_0] = -var_8;
            }
        }
    }

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_14 = (((((var_11 ^ var_3) < ((max(var_2, var_1))))) ? var_4 : var_9));
            arr_11 [i_2] = (!var_1);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_4] [i_4] = (((((min(-66, var_0)))) <= var_5));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_15 = (min(var_15, var_7));

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_16 *= var_8;
                    var_17 = ((var_10 != ((~((var_2 ? var_12 : var_12))))));
                    var_18 = (!(((var_7 | (var_5 < var_7)))));
                    var_19 = (((max(var_6, ((var_12 ? var_5 : var_8)))) < var_10));
                    var_20 = (max(((~(var_11 & var_2))), var_7));
                }

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_24 [i_2] [i_4] [i_2] [1] [1] [1] = (!var_2);
                    var_21 += var_3;
                    var_22 = (((((min(var_4, var_10))) / ((var_12 ? var_11 : var_6)))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_23 = var_4;

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_24 *= ((var_9 + (~15)));
                        arr_32 [i_2] [i_2] [i_4] = var_10;
                        var_25 = var_8;
                        var_26 = (max(var_26, ((min(5233367092614127987, -35)))));
                    }
                    var_27 = (40 % 3);
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_35 [i_2] [i_4] = (var_4 < ((var_2 | (!var_1))));
                var_28 += (var_7 | var_0);
                arr_36 [i_4] [i_4] = (max((var_0 / var_0), var_9));
            }
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
        {
            arr_39 [i_2] [i_2] [i_2] = (min(((min((!var_11), (!var_0)))), (max(var_7, var_4))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_47 [i_2] [i_11] [9] [i_13] [i_12] = ((-(var_7 & var_12)));
                            var_29 = var_9;
                            arr_48 [6] [i_12] [i_12] [i_12] [4] = (min((min(var_12, var_9)), (((var_8 << (var_11 / var_9))))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {

                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            var_30 += ((((((var_12 ? var_11 : var_10) <= (!var_1))))));
                            var_31 = var_3;
                        }
                        var_32 *= ((((var_2 > var_12) ? var_9 : (var_2 >= var_9))));
                        var_33 += ((((max(54, -98))) ^ var_1));
                    }
                }
            }
            var_34 = (min(var_34, var_1));

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_35 = (((~var_11) ? var_7 : (var_7 && var_11)));
                            arr_68 [i_20] [i_19] = (max(372, ((min(79, 48)))));
                            var_36 *= (((-56 / var_6) - var_9));
                            var_37 = (var_1 != var_3);
                            arr_69 [i_2] [2] [3] [3] [i_19] = (max(((5 ? (var_4 - var_10) : ((var_6 ? var_10 : var_7)))), var_12));
                        }
                    }
                }
                arr_70 [i_19] = (var_2 < var_3);

                for (int i_22 = 4; i_22 < 11;i_22 += 1) /* same iter space */
                {
                    var_38 = var_1;
                    var_39 = var_7;
                }
                for (int i_23 = 4; i_23 < 11;i_23 += 1) /* same iter space */
                {
                    var_40 = (min((min((-32752 + 18446744073709551610), var_10)), -1));
                    var_41 += var_6;
                }
                /* vectorizable */
                for (int i_24 = 0; i_24 < 13;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        var_42 |= var_2;
                        var_43 |= ((-74 ? var_7 : var_6));
                    }
                    for (int i_26 = 2; i_26 < 12;i_26 += 1)
                    {
                        arr_87 [i_19] [i_26] [i_24] [i_2] [i_2] [i_2] [i_19] = (65 < -104);
                        var_44 = (((!var_10) <= (var_3 % var_12)));
                        var_45 = var_5;
                        var_46 = (((var_0 % var_1) ? ((var_6 >> (var_1 - 1899800372))) : (((-6 + 2147483647) >> (-51 + 62)))));
                        arr_88 [i_19] [i_26] [i_15] [i_19] [i_15] [i_15] [i_19] = (var_2 / var_11);
                    }
                    var_47 += (var_8 | var_7);
                    var_48 = (max(var_48, ((((~239) ? -16 : 52)))));
                }
            }
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                var_49 = (max(var_3, (((108 ? var_7 : -87)))));
                arr_92 [i_27] [i_27] [3] [i_2] = var_6;
            }
            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                arr_95 [i_28] = (var_1 >= var_7);
                var_50 = var_2;
                var_51 = var_9;
            }
            /* LoopNest 3 */
            for (int i_29 = 1; i_29 < 9;i_29 += 1)
            {
                for (int i_30 = 4; i_30 < 9;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 13;i_31 += 1)
                    {
                        {
                            var_52 = ((min(var_2, var_9)));
                            var_53 |= max((max(var_2, -var_7)), (((!(((var_10 ? var_0 : var_3)))))));
                            arr_103 [i_30] = var_6;
                            arr_104 [i_31] [i_30] [i_30] [i_15] [i_2] = max(((((((max(var_2, var_3)))) == (var_8 / var_9)))), (max(37, 58)));
                            var_54 = (((var_11 / var_0) ? (((((max(var_6, var_10)) != (~24))))) : ((var_6 / (min(var_6, var_5))))));
                        }
                    }
                }
            }
        }
        var_55 = (var_10 ? (var_5 | var_7) : (((((var_9 / var_12) || (!var_3))))));
    }
    for (int i_32 = 0; i_32 < 20;i_32 += 1)
    {
        /* LoopNest 3 */
        for (int i_33 = 0; i_33 < 20;i_33 += 1)
        {
            for (int i_34 = 1; i_34 < 16;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 20;i_35 += 1)
                {
                    {
                        var_56 = (min(var_56, (123 | 2)));
                        arr_117 [i_32] [i_32] [i_32] [i_32] [i_32] = var_10;
                    }
                }
            }
        }
        arr_118 [i_32] = (((((((min(var_8, var_0))) ? var_10 : (var_11 & var_11)))) ? ((var_9 ? var_11 : var_4)) : (!var_12)));
        var_57 |= var_2;
    }
    for (int i_36 = 2; i_36 < 10;i_36 += 1)
    {

        for (int i_37 = 4; i_37 < 10;i_37 += 1)
        {
            var_58 = -99;
            arr_124 [5] [7] = ((((var_12 && (var_4 || var_7))) ? (min(var_9, (max(var_2, var_12)))) : var_4));
            arr_125 [2] = ((((var_4 > var_8) % (var_1 / var_3))));
        }
        arr_126 [i_36] = (((((max(var_1, var_4)))) ? var_9 : (((((var_4 ? var_1 : var_9)))))));
        var_59 = (23 * 72);
        var_60 = (var_0 <= var_10);
    }
    #pragma endscop
}
