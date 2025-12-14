/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 += var_11;
            var_14 = var_8;
            arr_6 [7] = (arr_3 [15] [i_1 - 1] [1]);

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_11 [4] = (min((arr_8 [i_0] [i_1 - 2] [12] [i_2 - 1]), 19898));
                arr_12 [9] [3] [9] [1] = (min(((((arr_4 [i_1 + 2] [i_1 - 1] [8]) ? (arr_4 [i_1 - 1] [i_1 - 2] [7]) : var_5))), var_10));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_15 [15] [7] [3] [1] &= (min(((var_0 & (min((arr_3 [2] [1] [4]), var_6)))), (((((-1252340214 ? (arr_13 [13] [12] [8]) : var_0)) < 76)))));
                arr_16 [1] = var_7;
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_26 [3] [1] [i_4] [9] = -var_4;
                            var_15 = (max(var_15, ((((((-83 ? -1252340214 : 562949953413120))) ? (max(var_11, var_11)) : (((-(~19889)))))))));
                            var_16 &= (var_3 ? -100 : var_1);
                            arr_27 [i_4] [11] [9] [0] [15] = ((47200 ? ((max(0, var_7))) : (var_6 * var_2)));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    arr_31 [3] [i_4] [13] = 1;
                    var_17 += ((((min(60, var_4))) ? 47206 : var_9));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_34 [i_4] [9] [4] [3] [4] = (min(var_0, var_9));
                    var_18 = ((((max(var_10, (arr_28 [i_1 + 2] [14] [i_1 - 2] [i_1 - 2] [i_4])))) ? ((var_3 ? var_6 : var_10)) : (~var_12)));
                    var_19 ^= 19892;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [13] [i_4] [15] [1] [6] [1] [1] = ((var_9 ? (var_7 ^ var_1) : var_0));
                        var_20 = -var_7;
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                arr_40 [i_10] [8] = -4877150206192221848;
                var_21 += (~var_6);
            }
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_22 = ((-(((arr_0 [i_11 - 2] [i_11 + 2]) ? ((9 >> (var_11 - 1631012873))) : var_12))));

            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_54 [7] [16] [10] [i_12] [11] [16] = (((((124 >> (var_5 - 32)))) ? ((min(var_8, (arr_18 [14] [2] [5] [i_13 + 1])))) : (var_3 && -97)));
                            var_23 += (-((max(var_4, var_3))));
                            arr_55 [i_12] [11] [4] [12] [7] [15] [7] = ((max((~1), (var_7 < 3838607232251860276))));
                            arr_56 [8] [i_12] [16] [8] [12] = var_2;
                        }
                    }
                }
                arr_57 [10] [i_12] = (var_12 != var_7);
                var_24 = (min(var_24, 14325124036202251997));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_25 = ((var_7 << (var_4 - 25075)));

                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {

                    for (int i_17 = 3; i_17 < 15;i_17 += 1)
                    {
                        var_26 = ((var_3 ? var_11 : var_1));
                        var_27 = (min(var_27, var_6));
                        var_28 -= var_12;
                        arr_65 [16] [6] [i_17] = 1;
                    }
                    for (int i_18 = 3; i_18 < 15;i_18 += 1)
                    {
                        var_29 = (19898 <= var_6);
                        arr_69 [10] [16] [16] [1] [8] [i_18] = (arr_28 [6] [10] [14] [7] [i_18]);
                        var_30 &= (((-var_4 + 2147483647) << ((((var_10 ? var_3 : var_5)) - 53535))));
                    }
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        arr_73 [16] [14] [6] [5] [1] [1] [7] = (~245);
                        arr_74 [0] [14] [6] [8] [15] = ((var_5 & (arr_25 [i_11])));
                        arr_75 [16] [10] [0] [0] [2] = -var_0;
                        var_31 = (min(var_31, (70 < var_9)));
                        arr_76 [5] [4] [2] [5] = (((var_5 ? (arr_43 [15]) : var_11)));
                    }
                    var_32 = -var_4;
                }
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    arr_79 [1] [8] [5] [9] = 1;
                    var_33 = (min(var_33, (((var_7 ? 9 : var_1)))));
                }
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            arr_86 [2] [0] = (var_0 < var_1);
                            arr_87 [13] [6] [12] [1] = (var_8 >= var_2);
                        }
                    }
                }
                var_34 = var_4;
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
            {
                arr_90 [i_23] = (((((var_5 ? -246 : -86))) ? (!var_2) : ((var_11 << (var_1 != var_0)))));
                arr_91 [i_23] = ((var_8 ? ((1 >> (var_7 - 14245))) : ((max((arr_23 [10] [i_23] [7] [2] [i_11 + 2]), var_5)))));
            }
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 17;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 16;i_26 += 1)
                    {
                        {
                            var_35 = (((var_4 << (var_4 - 25080))));
                            arr_100 [i_24] [13] = (arr_28 [8] [14] [6] [1] [i_24]);
                            arr_101 [12] [0] [7] [i_24] [13] [15] [9] = var_7;
                        }
                    }
                }
                arr_102 [i_24] = ((var_5 - ((var_5 ? var_4 : var_6))));
            }
        }
        var_36 = var_11;
        var_37 = var_4;
    }

    for (int i_27 = 0; i_27 < 10;i_27 += 1)
    {
        var_38 = var_4;

        for (int i_28 = 1; i_28 < 6;i_28 += 1) /* same iter space */
        {
            var_39 = (arr_104 [6]);
            var_40 = (((var_11 & var_9) / (max((~var_6), var_7))));
            var_41 = (max((((10400961620252748858 ? 1 : 1))), ((~(arr_77 [i_28 + 3] [5] [10] [12])))));
            arr_108 [9] = var_5;

            for (int i_29 = 3; i_29 < 8;i_29 += 1)
            {
                var_42 = var_8;
                /* LoopNest 2 */
                for (int i_30 = 2; i_30 < 9;i_30 += 1)
                {
                    for (int i_31 = 1; i_31 < 8;i_31 += 1)
                    {
                        {
                            arr_116 [2] [6] [6] [4] [2] = ((var_8 | (((max(var_3, var_6))))));
                            arr_117 [1] = ((((((((var_9 && (arr_72 [16] [0] [5] [1] [7])))) - 9))) ? var_5 : var_12));
                        }
                    }
                }
                var_43 = (var_4 - var_3);
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 10;i_32 += 1)
                {
                    for (int i_33 = 2; i_33 < 9;i_33 += 1)
                    {
                        {
                            var_44 = ((((0 ? var_5 : var_10))));
                            var_45 = var_12;
                            arr_125 [i_32] [8] = (-var_9 > var_1);
                            var_46 = var_7;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_34 = 1; i_34 < 6;i_34 += 1) /* same iter space */
        {

            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                arr_131 [2] [8] [1] [6] = var_0;
                arr_132 [1] [9] [4] [3] = var_4;
            }

            for (int i_36 = 0; i_36 < 10;i_36 += 1)
            {
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 10;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 10;i_38 += 1)
                    {
                        {
                            var_47 = var_8;
                            var_48 = var_2;
                        }
                    }
                }
                var_49 = ((var_5 << (-81 + 81)));
            }
            for (int i_39 = 0; i_39 < 10;i_39 += 1)
            {
                arr_142 [4] [8] = ((-21 ? 10611613713961074053 : 875682438));
                arr_143 [8] [8] [7] = var_12;
                arr_144 [6] [1] [6] = var_3;
            }

            for (int i_40 = 0; i_40 < 10;i_40 += 1)
            {
                var_50 += var_2;

                for (int i_41 = 1; i_41 < 8;i_41 += 1)
                {

                    for (int i_42 = 0; i_42 < 10;i_42 += 1)
                    {
                        var_51 = var_11;
                        arr_155 [8] [7] [6] [1] [4] [0] = (19896 >> 20);
                    }
                    for (int i_43 = 0; i_43 < 10;i_43 += 1)
                    {
                        var_52 = 72057456598974464;
                        arr_159 [6] [i_43] = var_2;
                        var_53 = ((var_1 || (var_5 && var_11)));
                        arr_160 [i_43] = ((var_2 ? (arr_7 [i_41 - 1] [i_34 + 4]) : (arr_7 [i_41 + 1] [i_34 + 4])));
                    }
                    arr_161 [3] [3] [3] [5] = var_6;
                    arr_162 [7] = (var_2 || var_4);
                }
                /* LoopNest 2 */
                for (int i_44 = 2; i_44 < 8;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 10;i_45 += 1)
                    {
                        {
                            var_54 = (var_3 + var_9);
                            arr_169 [7] = var_7;
                        }
                    }
                }
            }
            var_55 = (min(var_55, var_3));
            /* LoopNest 3 */
            for (int i_46 = 0; i_46 < 10;i_46 += 1)
            {
                for (int i_47 = 3; i_47 < 8;i_47 += 1)
                {
                    for (int i_48 = 0; i_48 < 10;i_48 += 1)
                    {
                        {
                            var_56 = var_8;
                            var_57 = ((!(246 * var_11)));
                            var_58 = ((126 - (var_6 + var_6)));
                            arr_178 [1] [2] [4] [5] [5] = var_11;
                            var_59 = (((var_7 ? 18422840029164572066 : var_2)));
                        }
                    }
                }
            }
        }
    }
    for (int i_49 = 0; i_49 < 21;i_49 += 1)
    {

        for (int i_50 = 0; i_50 < 21;i_50 += 1)
        {
            arr_185 [5] [11] = (((((arr_181 [3] [20] [i_50]) > var_7)) && (var_3 || var_12)));
            arr_186 [19] = ((((((arr_181 [3] [14] [11]) && var_11))) * var_7));
            var_60 = (min(1, ((var_10 / (arr_182 [i_49] [10])))));
        }
        var_61 = ((min(var_4, var_11)));

        for (int i_51 = 0; i_51 < 1;i_51 += 1)
        {
            arr_189 [2] = ((2106801483 << (230 - 215)));
            var_62 += var_3;
        }
    }
    var_63 = var_10;
    var_64 += var_3;
    #pragma endscop
}
