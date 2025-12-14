/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((min(var_6, var_4)) / var_3))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((var_0 ? (62916974 | -32) : var_10));
            var_17 = var_1;

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_18 = (!4294967295);
                var_19 = (0 << 0);
            }
            arr_10 [i_1] [i_0] [i_0 - 2] = (arr_7 [i_0] [i_0 - 1] [8] [i_1]);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_20 |= (-32767 - 1);

                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    arr_20 [i_5] [i_4] [i_5] [i_5] |= (arr_12 [i_0]);

                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_21 = (arr_22 [i_3] [i_5 + 4] [0] [i_3] [i_3]);
                        var_22 &= ((var_12 ? (arr_5 [i_0] [i_3] [i_5 + 2]) : (arr_17 [i_3] [i_5] [i_3] [8] [i_3])));
                        var_23 = ((-((var_1 % (arr_13 [i_3] [i_5 + 4])))));
                        var_24 = var_6;
                        var_25 = (max(var_25, ((~(((((min(var_12, (arr_16 [i_0] [i_5] [4] [i_5])))) && (((-32767 - 1) && 4)))))))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_15;
                        arr_28 [i_3] [i_4] [i_5] = (((arr_11 [i_0] [i_3]) >= (min(((var_1 ? (arr_9 [5]) : var_3)), var_15))));
                        arr_29 [i_0] [i_3] [i_5 - 1] [8] [i_3] [i_0] = var_12;
                    }
                    arr_30 [i_0] [i_3] [9] [i_0 - 1] = ((!(((var_4 & (arr_26 [9] [i_5 + 2] [i_3] [i_3] [i_5 - 2] [i_0]))))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_26 = ((var_10 ? ((((arr_25 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) < var_15))) : (((!(arr_22 [i_0] [i_0] [i_4] [i_8] [i_3]))))));
                    arr_33 [i_3] [i_3] = (((-127 ? -32767 : (arr_2 [i_0 - 2]))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_27 = (arr_15 [2] [i_3] [i_3] [i_3]);
                    arr_37 [i_3] [i_3] = arr_25 [i_0 - 2] [i_3] [3] [i_0 - 2] [i_4 - 2] [0] [i_9];
                }
            }
            for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_28 = (arr_16 [i_10 - 1] [i_3] [i_10] [i_11]);
                    var_29 += ((-(min((((var_5 ? (arr_13 [i_11] [i_11]) : (arr_36 [i_10 - 2])))), var_5))));
                }

                for (int i_12 = 4; i_12 < 10;i_12 += 1)
                {
                    var_30 = (arr_4 [3] [3] [3]);
                    var_31 = (min(var_31, var_11));
                    arr_44 [i_3] [i_3] [i_3] [i_3] [i_3] = (max((((!(!var_14)))), var_9));
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    arr_47 [i_3] = 242721516;
                    arr_48 [i_3] [i_0] [i_3] [i_3] [i_10] [i_13] = 3302329168;
                    arr_49 [i_3] = (min(25268, 992638135));

                    for (int i_14 = 2; i_14 < 9;i_14 += 1) /* same iter space */
                    {
                        var_32 -= (arr_17 [0] [i_14] [i_0] [i_0] [i_0]);
                        arr_52 [i_3] [i_10 + 1] [i_3] = ((~((-(arr_7 [i_3] [i_0 + 1] [i_0 + 1] [i_14 - 2])))));
                        var_33 = (max(var_33, var_10));
                    }
                    for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
                    {
                        var_34 = var_12;
                        arr_55 [i_3] [i_3] [i_10] [i_13] [i_10] = (((max((arr_9 [i_0 - 1]), (arr_9 [i_0 + 1])))) ? var_13 : (arr_9 [i_0 - 2]));
                        arr_56 [7] [i_3] = var_0;
                    }
                    for (int i_16 = 2; i_16 < 8;i_16 += 1)
                    {
                        var_35 = ((((2 ? (!var_6) : var_6)) << (var_4 - 766968439)));
                        arr_59 [i_3] [i_3] [i_10] [i_10 - 1] [i_13] [i_3] = var_5;
                    }
                    arr_60 [i_3] = (((((~(arr_50 [4] [i_10 - 2] [i_3] [i_0] [i_0])))) | ((((var_4 & var_12) | (arr_17 [i_0] [i_3] [i_10] [i_13] [i_3]))))));
                }
                for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                {
                    var_36 = var_5;
                    arr_63 [i_3] [i_3] = ((min((arr_41 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_41 [i_10 + 1] [i_10 + 1] [i_10] [i_3] [0]))) + (max((arr_41 [i_0] [i_3] [i_3] [i_3] [i_3]), (arr_41 [i_10] [i_10] [i_10 - 1] [i_3] [i_10]))));
                }
                for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        arr_69 [i_19] [i_3] [i_19] [i_19] [i_19] = (arr_2 [i_10]);
                        var_37 = (((arr_31 [i_3] [i_0 - 2] [i_0] [i_3]) ? ((-(arr_31 [i_3] [i_0 - 2] [i_0 + 1] [i_3]))) : ((-(arr_31 [i_3] [i_0 - 2] [i_0] [i_3])))));
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_38 = var_7;
                        var_39 = (((~(arr_53 [i_0 - 1] [i_0 - 1] [i_10 + 1] [i_0 - 1] [i_3]))) - (((!(arr_53 [i_0 - 1] [8] [i_10 - 1] [0] [i_3])))));
                    }
                    arr_72 [i_3] [i_3] [5] [i_18] = (-4225 * 992638135);
                }
                arr_73 [i_3] [i_3] [i_10] = (-19232 ^ 10);
            }

            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                var_40 = (arr_71 [i_0 + 1]);
                arr_77 [i_3] [i_3] [i_21] = ((!((min((arr_4 [i_0 + 1] [2] [i_0 - 2]), var_2)))));
            }

            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                var_41 = var_3;

                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        var_42 = (arr_1 [i_0]);
                        var_43 = (min((arr_43 [i_0 + 1] [i_22] [i_22] [i_0 + 1] [i_3]), ((var_10 ? 18446744073709551610 : 992638143))));
                        arr_88 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_0] = ((-(max((arr_84 [i_0]), (max((arr_1 [i_22]), (arr_42 [i_3] [10] [i_22] [9] [i_22])))))));
                    }
                    arr_89 [i_3] [i_3] [i_3] [i_3] = var_15;
                    arr_90 [0] [i_23] [i_23] [i_3] [i_0] [9] = var_10;
                }
                for (int i_25 = 0; i_25 < 11;i_25 += 1) /* same iter space */
                {
                    var_44 = ((((-(arr_62 [i_0] [i_0] [10] [i_0] [i_0]))) / ((var_0 ? var_14 : (arr_92 [i_0])))));
                    arr_95 [i_3] [1] [i_22] [i_25] = ((~((((arr_0 [i_0 - 1] [i_0 - 1]) && (arr_0 [i_0 - 1] [i_0 - 1]))))));

                    for (int i_26 = 0; i_26 < 11;i_26 += 1)
                    {
                        var_45 = (min((arr_38 [i_3] [i_3] [i_3]), (((var_14 ? (arr_87 [i_0 - 1] [i_3] [i_22] [i_25] [i_26] [i_3] [i_22]) : (arr_5 [2] [i_3] [i_0]))))));
                        arr_99 [i_3] [i_3] [i_3] [i_25] = var_13;
                        var_46 = var_2;
                        arr_100 [i_3] [5] [5] [i_25] [i_26] = ((+(((arr_70 [i_0 - 2] [8] [i_22] [i_0 - 2]) ? ((((arr_76 [i_3] [i_3] [i_3] [i_0 + 1]) ? var_11 : var_1))) : var_9))));
                        var_47 *= (max((arr_23 [i_0 - 2] [i_0 + 1]), (min((arr_5 [i_0 - 2] [i_3] [i_0 - 2]), (arr_40 [i_0] [i_0 - 2])))));
                    }
                    arr_101 [i_0] [i_0] [i_3] [i_22] [i_25] = var_15;
                }
                for (int i_27 = 0; i_27 < 11;i_27 += 1) /* same iter space */
                {
                    arr_104 [i_3] [i_27] = ((0 ? 992638148 : 11715666271180306872));

                    for (int i_28 = 0; i_28 < 11;i_28 += 1)
                    {
                        var_48 += var_9;
                        arr_108 [i_0] [i_3] [i_3] [i_0] = (-19232 ^ 134);
                        arr_109 [i_0] [i_3] [i_3] [i_3] [i_3] [2] = (3302329171 % -32767);
                    }
                    arr_110 [i_3] = var_11;
                }
                for (int i_29 = 0; i_29 < 11;i_29 += 1) /* same iter space */
                {
                    arr_114 [i_3] [i_3] [9] [i_3] = (arr_31 [i_0] [i_0] [i_22] [i_3]);
                    var_49 = (max(var_49, (arr_58 [i_22] [i_29] [i_22] [i_3] [i_0] [i_22])));
                    var_50 = (((arr_17 [10] [i_3] [i_29] [i_29] [7]) / var_11));
                }
                var_51 = (min((((arr_70 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]) == (arr_70 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))), var_11));
            }
            arr_115 [i_3] [i_3] = var_12;
            var_52 = var_1;
        }
        var_53 = var_11;
        arr_116 [8] [i_0 - 1] = ((!(arr_53 [i_0] [i_0] [i_0] [8] [i_0])));
        arr_117 [i_0] [i_0] = var_5;
    }
    #pragma endscop
}
