/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((min(47306, 2)), 14))) + (!var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] = var_1;
                        arr_13 [i_2] = (var_2 ? 159 : 1);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((var_13 ? (var_7 * var_7) : (!var_3)));
                        var_16 = var_1;
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_3] [i_0] [i_1] [i_0] = ((var_1 ? (arr_2 [i_2 - 2] [i_2 - 2] [i_2]) : var_12));
                        var_17 = var_11;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_3] = 1;
                        var_18 = (min(var_18, (1 || -var_1)));
                    }

                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_19 += ((var_2 ? (((arr_10 [i_0] [i_1] [i_2] [i_8]) << (var_11 - 56663))) : 1));
                        var_20 = (arr_5 [i_2 - 1] [i_8]);
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_2] [i_1] = ((var_5 ? (arr_19 [i_2 - 2] [i_1]) : var_0));
                        arr_33 [i_0] [i_1] [i_0] [i_1] [i_3] [5] [1] = (205 || var_13);
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_38 [i_0] = ((var_2 ? (arr_23 [i_2 + 1] [i_2 + 1]) : var_10));

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_21 = ((+((((arr_19 [i_10] [i_11]) == var_12)))));
                        var_22 = var_14;
                    }
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_23 = ((!(!1715462271)));

                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        var_24 = 1;
                        arr_47 [i_13] [i_1] [i_13] = var_8;
                    }
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        var_25 -= (!var_1);
                        var_26 = -12;
                        arr_50 [i_14 - 1] [i_12] [i_1] [i_1] [i_0] = var_7;
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_27 = (arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [2] [i_0]);
                        var_28 = (max(var_28, (arr_46 [2] [i_2 + 1] [i_2] [i_2 - 1] [i_2])));
                    }
                    for (int i_16 = 3; i_16 < 11;i_16 += 1)
                    {
                        var_29 = (var_8 == var_4);
                        var_30 = (max(var_30, (((1715462271 ? (arr_35 [i_16 - 2] [i_16 - 2]) : var_3)))));
                        var_31 = (((arr_53 [i_16 - 2] [i_2 + 1] [7] [i_2 - 2] [i_2 - 2]) || var_2));
                    }
                    var_32 += var_1;

                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        var_33 = (((arr_27 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2]) ? var_7 : var_11));
                        var_34 = (var_5 - 65534);
                    }
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        var_35 = (var_2 ? var_2 : var_0);
                        arr_60 [i_18] [i_0] [i_0] [i_0] [i_0] = var_14;
                        var_36 = (min(var_36, -7845488248825754492));
                    }

                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        arr_64 [i_12] [i_12] [i_12] [i_12] [i_2] [i_0] [i_0] = 234;
                        arr_65 [11] [11] [i_12] = (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 2]);
                    }
                }
                for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_37 = (~var_9);
                        var_38 += (!var_1);
                        var_39 = var_10;
                        var_40 += var_6;
                    }
                    for (int i_22 = 1; i_22 < 9;i_22 += 1)
                    {
                        arr_73 [i_22] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_69 [i_22 + 2] [i_2] [i_22] [i_22] [i_2 - 2] [i_2 - 2] [i_2]) ? 570295069 : 18));
                        var_41 += (~var_9);
                    }
                    var_42 = (~var_7);
                    var_43 = (((arr_23 [i_2 - 1] [i_2 - 2]) << (arr_23 [i_2 + 1] [i_2 - 2])));
                }
                var_44 = 18446744073709551614;
                arr_74 [i_0] [i_0] [4] = (!1);

                for (int i_23 = 3; i_23 < 10;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        arr_82 [i_0] [i_1] [i_24] [i_23] [i_1] = (((~var_11) == 10534947221886733662));
                        arr_83 [i_0] [i_1] [i_24] [i_23] [i_24] = ((var_0 ? (arr_36 [i_23] [i_23] [i_23 + 1] [i_23]) : (arr_78 [i_23] [i_23] [i_23 - 1] [i_23] [i_23])));
                    }
                    arr_84 [i_0] = (var_2 > var_6);
                }
                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {
                    var_45 = (min(var_45, (((var_9 ? 121 : ((var_1 ? var_10 : var_11)))))));
                    var_46 = -var_14;
                }
                for (int i_26 = 0; i_26 < 12;i_26 += 1)
                {
                    var_47 = ((!(var_14 / 155)));

                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        var_48 = 14497807506157735930;
                        arr_91 [i_27] [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_0] = var_1;
                    }
                }
                arr_92 [i_0] [i_0] [i_0] = var_8;
            }
            for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
            {
                var_49 = 1534865365;
                var_50 = (min(var_50, (((18439456536564736045 ? (arr_77 [i_1] [i_28] [i_1] [i_1] [2] [i_0]) : (7845488248825754492 && 1024183140))))));
            }
            for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
            {
                var_51 = (!(var_6 * 1));
                var_52 = ((283163536 ? ((var_2 ? var_7 : 15229)) : var_13));
                var_53 -= ((var_10 == (((arr_9 [i_29] [i_29] [3] [i_1] [i_0] [i_0] [i_0]) ? var_10 : var_5))));
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 12;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {
                    {
                        var_54 = (((arr_31 [i_31] [i_30] [i_30] [i_1] [i_1] [i_0] [i_0]) / (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_102 [i_0] [i_0] = ((arr_55 [i_31] [i_0] [i_0] [i_0] [i_0]) ? (arr_55 [i_0] [i_1] [i_1] [i_31] [i_1]) : var_3);
                    }
                }
            }

            for (int i_32 = 3; i_32 < 11;i_32 += 1)
            {
                var_55 = -38106;
                arr_106 [i_0] [i_1] [1] [i_0] = 742998403;
            }
            for (int i_33 = 3; i_33 < 11;i_33 += 1)
            {
                var_56 = (((9 ? 9 : -12)));
                arr_109 [i_33] [i_33] [i_33] = (-1513671956 - var_1);
            }
            for (int i_34 = 0; i_34 < 12;i_34 += 1)
            {
                var_57 += -23;
                var_58 = ((-55 ? var_5 : var_4));
                /* LoopNest 2 */
                for (int i_35 = 3; i_35 < 9;i_35 += 1)
                {
                    for (int i_36 = 3; i_36 < 9;i_36 += 1)
                    {
                        {
                            var_59 = (1023 ? (arr_22 [i_34] [i_35 + 2] [i_35 - 1] [i_34] [i_36 - 3]) : 1610612736);
                            arr_118 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_34] = (!var_14);
                            var_60 = var_10;
                            var_61 = (min(var_61, (-229891722 / -21)));
                            var_62 = ((var_4 ? (arr_8 [i_35 + 2]) : var_4));
                        }
                    }
                }
            }
            arr_119 [i_1] [10] [10] &= ((4294967295 ? -1513671956 : (arr_77 [i_1] [0] [i_1] [10] [i_0] [7])));
            /* LoopNest 3 */
            for (int i_37 = 0; i_37 < 12;i_37 += 1)
            {
                for (int i_38 = 1; i_38 < 11;i_38 += 1)
                {
                    for (int i_39 = 1; i_39 < 11;i_39 += 1)
                    {
                        {
                            arr_127 [i_39] [i_39] = (~var_6);
                            var_63 = (max(var_63, ((((((3976901852 << (var_8 - 20902)))) ? var_5 : (((arr_14 [10] [10] [i_37] [i_37] [i_37]) + var_13)))))));
                        }
                    }
                }
            }
        }
        for (int i_40 = 1; i_40 < 9;i_40 += 1)
        {
            var_64 &= ((var_2 ? var_7 : var_4));
            arr_132 [i_0] [i_40] = var_11;

            for (int i_41 = 1; i_41 < 11;i_41 += 1)
            {
                arr_136 [i_0] [i_0] [i_0] [i_0] = (arr_45 [i_0] [7] [i_0] [7] [i_0] [i_0]);
                var_65 = (min(var_65, (var_10 ^ var_1)));
            }
            for (int i_42 = 3; i_42 < 11;i_42 += 1)
            {
                var_66 = var_5;
                arr_139 [i_42] [i_42] [i_42] [i_42] = (!(var_7 > var_6));
            }
        }
        /* LoopNest 2 */
        for (int i_43 = 3; i_43 < 11;i_43 += 1)
        {
            for (int i_44 = 0; i_44 < 1;i_44 += 1)
            {
                {
                    var_67 = (min(var_67, (-1268690822 == var_13)));

                    for (int i_45 = 0; i_45 < 12;i_45 += 1)
                    {
                        var_68 = ((var_4 % (((var_5 ? var_6 : -1346663343)))));
                        arr_149 [i_44] [7] [i_44] [i_44] [i_43] [i_44] = (((arr_71 [9] [i_44] [i_43] [i_43] [i_0]) > var_8));
                        arr_150 [2] [i_44] [2] [i_0] [2] &= 112;
                    }
                    var_69 = (arr_18 [i_43 + 1]);
                }
            }
        }
        arr_151 [3] &= (var_9 == var_3);
    }
    /* vectorizable */
    for (int i_46 = 0; i_46 < 12;i_46 += 1) /* same iter space */
    {
        arr_154 [i_46] = 1;

        for (int i_47 = 1; i_47 < 9;i_47 += 1)
        {
            arr_157 [i_46] [i_46] [i_47] = ((((var_1 ? var_9 : 67)) > (arr_86 [i_46] [i_46] [i_47] [i_47] [i_47] [i_47])));
            arr_158 [i_46] [i_46] [i_47] = ((var_6 ? (arr_42 [i_47 - 1] [i_46]) : -2722802139262546450));
        }
        for (int i_48 = 2; i_48 < 11;i_48 += 1)
        {
            var_70 = var_7;

            for (int i_49 = 1; i_49 < 8;i_49 += 1)
            {
                /* LoopNest 2 */
                for (int i_50 = 0; i_50 < 12;i_50 += 1)
                {
                    for (int i_51 = 0; i_51 < 1;i_51 += 1)
                    {
                        {
                            var_71 = (((var_10 >= var_14) ? var_0 : (1 << var_12)));
                            arr_168 [i_51] [10] [i_49] [i_46] [1] [i_46] [1] = -1513671966;
                            arr_169 [i_46] [i_46] [i_49] = (((arr_90 [i_48 + 1] [i_49 + 1] [i_49 + 1]) ? (arr_90 [i_48 + 1] [i_49 + 2] [i_49 + 2]) : var_10));
                        }
                    }
                }

                for (int i_52 = 0; i_52 < 12;i_52 += 1)
                {
                    var_72 = (min(var_72, var_8));
                    var_73 = (max(var_73, var_2));

                    for (int i_53 = 3; i_53 < 10;i_53 += 1)
                    {
                        arr_176 [i_52] [i_46] [i_46] = (arr_135 [i_46] [i_46] [1] [i_53]);
                        var_74 = var_3;
                        arr_177 [i_46] [i_46] [i_46] [1] &= (!var_12);
                    }
                }
                var_75 = (max(var_75, var_9));
                var_76 += var_5;
            }
            /* LoopNest 2 */
            for (int i_54 = 0; i_54 < 12;i_54 += 1)
            {
                for (int i_55 = 1; i_55 < 10;i_55 += 1)
                {
                    {
                        var_77 = ((114 ? var_4 : (arr_171 [i_48 + 1] [i_46] [i_55 + 2] [i_46])));
                        var_78 = (18291408158522759145 > 2545688753);
                        arr_183 [i_55] [i_46] [i_46] [i_46] = (arr_55 [i_48] [i_48] [i_48 - 1] [8] [i_48]);
                        var_79 = (min(var_79, ((((arr_34 [i_46] [i_48 - 1] [i_46] [i_48 + 1] [i_48] [i_55]) - var_3)))));
                    }
                }
            }
        }
        var_80 = (min(var_80, var_2));
    }
    #pragma endscop
}
