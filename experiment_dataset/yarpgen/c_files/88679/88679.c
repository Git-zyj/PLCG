/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((arr_2 [i_0]), var_3)), (((~(arr_2 [8]))))));
        var_10 += var_9;
        var_11 = (min((max(var_0, (min((arr_0 [i_0]), (arr_0 [0]))))), (var_9 >= var_2)));
        var_12 = (max(var_12, (arr_1 [8])));
        var_13 = (min(var_13, (((arr_2 [i_0]) ? 1 : (~268173312)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 -= (max((((((var_3 ? var_7 : var_4)) >= var_7))), var_2));
        var_15 ^= (((-119 ? -268173287 : 13)));
        var_16 = (min((((((var_5 ? (arr_6 [17]) : var_1))) & (max(var_6, (arr_4 [i_1]))))), ((min(var_4, ((min((arr_6 [i_1]), var_0))))))));
        var_17 = (((arr_6 [i_1]) ? 32744 : ((var_3 ? (((arr_4 [i_1]) % var_9)) : var_5))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (((arr_5 [i_2]) ? ((var_5 / (arr_2 [i_2]))) : var_2));
        arr_10 [i_2] = var_1;
        var_19 = (arr_9 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_20 = ((((((var_1 && var_4) ? (var_8 - var_3) : (arr_8 [i_2])))) ? (((((((max(var_0, var_1)))) <= ((var_0 ? var_4 : (arr_1 [1]))))))) : (min(var_3, var_9))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_21 = var_5;
                    var_22 -= (((((var_5 ? var_6 : (arr_0 [i_5])))) ? (max(var_9, (arr_15 [i_5] [i_4] [0] [9] [6]))) : ((((arr_11 [1] [i_2]) ? var_0 : var_8)))));
                    arr_18 [i_5] [i_2] [i_4] [i_2] [i_2] = ((var_6 & ((var_1 >> (var_0 + 13931)))));
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_23 = ((max(32735, 0)) & ((((var_9 + 9223372036854775807) << (((arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) - 188))))));
                    var_24 = (min(var_0, (max((arr_4 [i_6 - 1]), ((var_1 ? var_5 : var_4))))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_23 [i_2] [i_2] [i_2] = (max(var_9, var_9));
                    var_25 = (var_0 ? (((var_9 & (((var_5 ? (arr_9 [0] [0]) : var_5)))))) : (arr_11 [i_7] [i_3]));
                    var_26 = (min((((((arr_16 [i_7] [i_3] [i_3] [i_3] [i_2] [7]) > var_3)) ? var_3 : (var_4 >= var_5))), (max((min(var_9, var_4)), (min((arr_4 [10]), (arr_12 [5])))))));
                    arr_24 [i_2] [i_2] [i_2] [0] = (max(var_3, (min(((min(var_2, var_5))), (min(var_3, (arr_8 [i_2])))))));
                }
                var_27 *= (max((max((arr_14 [i_4 + 1] [i_4 - 1] [i_4]), var_6)), (max((arr_22 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_3]), (arr_14 [i_4 + 1] [i_4 - 1] [i_2])))));
            }
            var_28 *= ((var_6 ? ((min(((var_2 ? (arr_14 [i_2] [1] [i_3]) : var_1)), -var_6))) : var_9));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_29 = (max(var_2, (arr_2 [i_10])));
                            var_30 = ((var_7 ? var_0 : ((((max(var_5, var_8))) ? (((max((arr_12 [1]), var_5)))) : ((var_9 ? var_9 : var_5))))));
                            var_31 = (((((min((arr_34 [i_2] [5] [10] [10] [i_10] [i_10] [i_11]), (arr_34 [i_2] [1] [7] [i_2] [i_2] [i_2] [5]))))) ^ ((var_9 ? 268173292 : -1523178610023987467))));
                            var_32 = (min((min(var_8, 3814398045057022805)), ((((var_1 ? var_7 : var_6))))));
                        }
                    }
                }
                var_33 = (min(var_33, (((var_1 ? (arr_0 [i_2]) : (arr_25 [i_9]))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_34 = (max(var_34, (((var_4 >= (((((var_6 ? var_7 : var_2))) ? (max(var_3, var_5)) : (((var_2 ? var_0 : (arr_7 [i_13] [1])))))))))));
                            var_35 = (((arr_28 [i_13 - 1] [i_8]) ? var_4 : (min(var_5, var_4))));
                            var_36 = (min(var_0, (((~var_4) & var_5))));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_37 = (min(var_37, ((max((arr_34 [i_2] [i_2] [i_8] [i_8] [i_8] [i_14] [1]), ((max(var_2, var_2))))))));
                    arr_44 [0] [i_2] [0] [i_2] [i_2] [i_2] = (((min(var_8, (arr_0 [i_9])))));
                    var_38 = (max((min((arr_41 [i_14] [5] [5] [5] [5]), var_6)), ((((var_2 ? var_6 : var_0)) >= (arr_26 [1])))));
                }
                for (int i_15 = 3; i_15 < 9;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        arr_51 [i_2] [i_2] = var_8;
                        var_39 = min(86, (((((min(var_2, var_2))) && (arr_46 [i_16] [i_8])))));
                        var_40 *= (((min((var_1 && var_2), (arr_28 [i_15 - 2] [i_2]))) >> var_6));
                        var_41 ^= var_6;
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_54 [1] [i_8] [i_9] [1] [i_2] = arr_38 [i_2] [2] [i_9] [i_15] [i_17];
                        var_42 = ((-268173312 ? -24 : -28));
                        var_43 = (((var_0 + 2147483647) << (((((arr_37 [i_2] [i_2]) ? var_2 : var_3)) - 18446744073709551522))));
                        var_44 = (((arr_12 [i_2]) < var_2));
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        var_45 = var_7;
                        var_46 ^= ((var_9 ? (arr_50 [i_15 + 1] [i_18 + 1] [i_15 + 1]) : ((var_9 ? (arr_55 [8] [8] [2] [i_8] [8] [i_2]) : var_3))));
                        var_47 = var_8;
                        var_48 = var_3;
                    }
                    var_49 = var_5;
                }
            }
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                arr_61 [i_2] [4] [i_19] = max(((((min(var_9, var_3)) >= var_2))), (arr_32 [i_2] [4] [i_2] [i_8]));
                var_50 = (min(var_50, (arr_59 [i_2] [i_2] [i_2] [1])));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        {
                            var_51 = (((((arr_67 [i_2] [i_2] [i_8] [i_8] [i_19] [0] [1]) & (arr_1 [10])))));
                            var_52 = ((!(((var_0 ^ (((arr_52 [i_2]) ? var_4 : var_3)))))));
                        }
                    }
                }
            }

            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {
                    var_53 = ((((var_0 ? var_7 : var_3))));
                    var_54 = (min(0, (min(var_7, (arr_52 [i_2])))));
                    var_55 = (min(((max((arr_68 [1] [i_2] [1] [i_8] [i_22] [1] [i_23]), (~var_6)))), (min(var_8, (min(var_4, var_4))))));
                    var_56 ^= max((arr_36 [i_2]), var_8);
                }

                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    arr_77 [i_2] = ((var_1 != ((var_5 ? var_3 : var_2))));

                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        arr_82 [4] [i_2] [i_22] [4] [i_25] [8] [i_25] = (arr_64 [10] [i_2] [i_2] [i_8]);
                        var_57 -= (max(((max(var_2, (max(var_1, var_0))))), (var_9 * var_5)));
                        arr_83 [i_2] [5] [5] [5] [i_2] [i_2] = (arr_36 [i_2]);
                        var_58 = (min(var_58, var_5));
                    }
                    var_59 = (((arr_19 [i_2] [8] [i_2] [1] [i_2]) ? var_6 : (min(var_9, ((min(var_1, var_6)))))));
                }
            }
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {

                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    var_60 += var_8;

                    for (int i_28 = 0; i_28 < 11;i_28 += 1)
                    {
                        arr_94 [i_27] [i_27] [i_2] [i_8] [i_2] = var_0;
                        var_61 -= var_7;
                    }
                    for (int i_29 = 2; i_29 < 9;i_29 += 1)
                    {
                        var_62 -= (arr_29 [i_26] [i_26] [7] [7]);
                        var_63 = (max(0, 0));
                    }
                    for (int i_30 = 1; i_30 < 9;i_30 += 1) /* same iter space */
                    {
                        var_64 = ((!((((arr_81 [i_2] [i_26] [i_2] [i_30 + 2] [i_30] [i_30 + 2] [0]) ? (arr_81 [0] [i_8] [i_2] [i_30 + 1] [i_30] [i_30] [4]) : var_2)))));
                        var_65 = (arr_55 [4] [i_2] [4] [10] [i_27] [1]);
                        arr_101 [i_2] [i_2] [i_2] = var_9;
                        arr_102 [4] [i_2] = (arr_17 [i_2] [i_2] [5] [i_26] [i_27] [0]);
                        var_66 = min(((var_3 ? var_7 : var_2)), (((!(arr_73 [i_2] [i_30 + 2] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_31 = 1; i_31 < 9;i_31 += 1) /* same iter space */
                    {
                        arr_105 [i_8] [i_8] [i_8] [0] [i_8] [i_2] = var_2;
                        var_67 = var_0;
                    }
                }
                var_68 = (min((arr_52 [i_2]), var_5));
            }
            for (int i_32 = 0; i_32 < 11;i_32 += 1)
            {
                var_69 *= (((min(var_2, var_9))));
                var_70 ^= ((((!var_2) ? (((var_1 ? var_0 : (arr_72 [1] [1] [i_32] [6] [1])))) : ((var_7 ? var_6 : var_9)))));
            }
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                var_71 = (((((((-(arr_19 [0] [1] [i_2] [i_8] [i_33])))) ? var_9 : var_5)) % ((((((arr_70 [i_33] [i_8] [i_2]) ? (arr_70 [i_2] [i_2] [4]) : var_1)))))));
                var_72 ^= ((((min((((var_4 ? (arr_85 [i_33] [i_33] [i_33]) : (arr_71 [i_2] [i_2] [0] [i_2])))), var_4))) ? (((((-(arr_34 [8] [i_33] [i_33] [i_8] [i_8] [i_8] [i_2])))))) : (((var_4 != var_0) ? (arr_45 [0]) : (((arr_36 [i_33]) ? var_3 : var_4))))));

                /* vectorizable */
                for (int i_34 = 0; i_34 < 11;i_34 += 1)
                {
                    var_73 = (arr_57 [i_2]);
                    var_74 = (var_7 + var_3);
                }
                /* vectorizable */
                for (int i_35 = 0; i_35 < 11;i_35 += 1)
                {
                    var_75 *= var_9;
                    var_76 = ((var_5 & (arr_30 [i_35] [i_35] [i_33] [i_2] [i_2] [i_2])));
                    arr_118 [i_2] = (arr_114 [i_35]);
                    var_77 = (((arr_58 [i_8] [i_8] [i_8] [i_8] [i_2]) == (arr_37 [i_35] [i_33])));
                }
            }
            arr_119 [i_2] [i_2] = ((-(((var_1 || (arr_30 [i_2] [i_2] [i_2] [i_2] [i_8] [i_2]))))));
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 11;i_37 += 1)
                {
                    {
                        var_78 = (!9223372036854775799);
                        var_79 = (min(((min(var_6, var_7))), (min(var_5, var_1))));

                        /* vectorizable */
                        for (int i_38 = 3; i_38 < 9;i_38 += 1)
                        {
                            var_80 = (((var_6 ? var_1 : (arr_99 [i_2] [7] [7] [7] [i_38 - 1]))));
                            var_81 = (min(var_81, ((((arr_91 [i_2] [i_8] [i_37] [4] [i_38 - 1]) ? (arr_91 [10] [i_38] [i_38] [i_38] [i_38 + 2]) : (arr_65 [i_8] [i_8] [i_8] [i_8] [i_38 - 3] [i_38 - 3]))))));
                            var_82 = ((-(arr_78 [9] [i_8] [i_8])));
                            var_83 = (((arr_14 [i_2] [i_38 - 1] [i_8]) ? (arr_14 [5] [i_38 + 2] [8]) : (arr_14 [i_36] [i_38 - 1] [i_36])));
                            var_84 = (min(var_84, var_0));
                        }
                        for (int i_39 = 0; i_39 < 11;i_39 += 1)
                        {
                            arr_131 [i_39] [2] [i_2] [i_2] [i_2] [i_8] [i_2] = (max((arr_2 [i_2]), var_9));
                            var_85 = ((((min(var_9, (max(var_8, var_3))))) ? 1 : var_3));
                            var_86 *= ((((!((max(var_0, var_9))))) ? (((((max(var_5, var_6))) * var_2))) : (min((arr_67 [i_8] [i_37] [i_36] [i_8] [i_8] [i_2] [4]), var_9))));
                            var_87 = (arr_100 [i_36] [i_36] [i_2]);
                        }
                    }
                }
            }
        }
        for (int i_40 = 0; i_40 < 11;i_40 += 1) /* same iter space */
        {
            arr_135 [i_2] = var_1;

            for (int i_41 = 0; i_41 < 11;i_41 += 1)
            {
                var_88 *= ((((((arr_29 [1] [i_40] [1] [1]) ? ((var_3 ? (arr_126 [i_2] [i_2] [7] [i_2] [5]) : var_0)) : var_5))) ? ((((!(arr_124 [i_2] [i_41] [i_41] [i_2]))))) : (min((max((arr_108 [i_41]), var_3)), (arr_126 [i_2] [1] [1] [2] [0])))));
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 11;i_42 += 1)
                {
                    for (int i_43 = 1; i_43 < 10;i_43 += 1)
                    {
                        {
                            var_89 = max(2104086942, var_3);
                            var_90 = (((min((arr_117 [i_43 - 1] [i_2] [i_43 - 1] [i_2] [i_43 - 1]), var_6)) ? var_6 : ((+((var_7 ? (arr_35 [1] [i_41] [1] [i_2]) : var_9))))));
                        }
                    }
                }
                arr_142 [i_2] [i_40] [2] = var_3;
            }
        }
        for (int i_44 = 0; i_44 < 11;i_44 += 1)
        {
            var_91 |= (max((((((((var_2 == (arr_46 [i_2] [i_2]))))) == var_3))), ((~(arr_66 [i_2] [i_44] [i_44] [8] [i_44] [1])))));
            /* LoopNest 2 */
            for (int i_45 = 0; i_45 < 1;i_45 += 1)
            {
                for (int i_46 = 0; i_46 < 11;i_46 += 1)
                {
                    {

                        for (int i_47 = 0; i_47 < 1;i_47 += 1) /* same iter space */
                        {
                            var_92 = var_7;
                            var_93 = ((((arr_38 [2] [i_44] [i_45] [i_44] [i_2]) ? (max(var_5, var_3)) : ((max((arr_141 [10]), (arr_56 [i_2] [i_2] [i_2] [1] [1] [i_2] [1])))))));
                            arr_151 [i_2] [9] [i_45] [0] [i_2] = ((((max(0, 26807))) ? (((min((arr_139 [i_47] [1] [i_2] [i_2]), (arr_27 [9] [i_44] [i_45] [i_46]))))) : (arr_25 [i_2])));
                            arr_152 [i_2] [10] [i_45] [3] [1] = var_0;
                        }
                        for (int i_48 = 0; i_48 < 1;i_48 += 1) /* same iter space */
                        {
                            arr_156 [i_2] [i_2] = (min((((((min(var_8, var_8))) ? (((var_7 % (arr_115 [i_2] [i_2] [0])))) : var_2))), ((var_8 ? var_6 : (((arr_60 [7] [7] [7] [7]) & var_7))))));
                            var_94 = ((~(arr_17 [6] [1] [i_44] [0] [6] [9])));
                            arr_157 [0] &= ((((~(arr_4 [i_44])))));
                            arr_158 [i_2] [i_2] [i_45] [i_46] [i_2] = var_9;
                        }
                        for (int i_49 = 0; i_49 < 1;i_49 += 1) /* same iter space */
                        {
                            var_95 = var_3;
                            var_96 = var_2;
                        }

                        for (int i_50 = 0; i_50 < 11;i_50 += 1)
                        {
                            var_97 = (((var_0 % ((var_6 ? var_1 : (arr_108 [i_2]))))));
                            var_98 = (min(var_98, var_3));
                            var_99 -= (((((min(var_3, var_9)))) ? (((var_6 < var_8) ? (arr_28 [i_2] [i_2]) : (max((arr_128 [9] [3] [9]), var_4)))) : ((max((((var_5 != (arr_28 [i_2] [i_44])))), (arr_32 [i_44] [i_45] [i_46] [i_50]))))));
                            var_100 += var_7;
                        }
                        /* vectorizable */
                        for (int i_51 = 2; i_51 < 10;i_51 += 1)
                        {
                            var_101 ^= (var_8 / var_8);
                            var_102 = ((var_8 ? (arr_69 [i_2] [2] [i_51 + 1]) : (arr_69 [10] [i_45] [i_51 + 1])));
                            arr_168 [9] [i_44] [i_2] [0] = (1523178610023987466 & 7688697509530555508);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_52 = 2; i_52 < 8;i_52 += 1)
    {
        for (int i_53 = 0; i_53 < 10;i_53 += 1)
        {
            {

                /* vectorizable */
                for (int i_54 = 0; i_54 < 10;i_54 += 1) /* same iter space */
                {
                    arr_176 [i_53] = var_5;
                    var_103 -= var_1;
                    var_104 = (arr_146 [i_54] [7] [i_52] [i_52]);
                }
                /* vectorizable */
                for (int i_55 = 0; i_55 < 10;i_55 += 1) /* same iter space */
                {
                    var_105 = (arr_35 [i_52] [i_53] [i_55] [i_55]);
                    var_106 = var_5;
                    var_107 &= (((var_1 & (arr_87 [9] [0] [i_53] [i_52]))));
                }
                for (int i_56 = 0; i_56 < 10;i_56 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_57 = 0; i_57 < 10;i_57 += 1)
                    {
                        for (int i_58 = 0; i_58 < 10;i_58 += 1)
                        {
                            {
                                var_108 = ((((((arr_100 [0] [i_57] [i_56]) ? (arr_100 [i_58] [i_56] [i_52]) : var_4))) ? var_6 : (((arr_182 [i_52 + 2] [i_52 + 2] [2] [i_52]) ? (arr_137 [i_58] [i_53] [8]) : var_5))));
                                var_109 = (min(var_109, (arr_109 [i_52] [i_52])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_59 = 0; i_59 < 1;i_59 += 1)
                    {
                        arr_192 [1] [i_53] [i_53] [i_52] = (arr_123 [i_52 + 1] [i_52 + 2] [i_52 + 2] [i_56]);
                        var_110 = (max(var_110, var_0));
                        var_111 &= (((((arr_42 [i_52 - 2] [i_53] [i_52 - 2] [i_59] [i_59]) != (arr_165 [1] [i_59] [1] [2] [i_52])))) >> (var_9 + 2804557049228604957));
                        var_112 = (max(var_112, ((((arr_79 [i_52] [i_52] [i_56] [i_52 + 1] [i_56] [i_59] [8]) / (arr_79 [i_52] [i_52] [i_56] [i_52 + 1] [6] [i_52] [i_59]))))));
                    }
                    /* vectorizable */
                    for (int i_60 = 0; i_60 < 10;i_60 += 1)
                    {

                        for (int i_61 = 0; i_61 < 10;i_61 += 1) /* same iter space */
                        {
                            var_113 -= (118 >= 18);
                            var_114 = (min(var_114, var_1));
                        }
                        for (int i_62 = 0; i_62 < 10;i_62 += 1) /* same iter space */
                        {
                            var_115 = (((arr_42 [i_52 + 2] [i_52 + 1] [i_52] [1] [i_62]) ? var_3 : var_8));
                            var_116 = ((+(((-1523178610023987470 + 9223372036854775807) >> (84 - 46)))));
                            var_117 *= (((~var_9) ? ((var_6 ? var_2 : (arr_50 [i_60] [i_60] [i_56]))) : var_5));
                            arr_202 [8] [i_62] [8] [8] [8] [8] [8] = var_8;
                        }
                        for (int i_63 = 0; i_63 < 10;i_63 += 1) /* same iter space */
                        {
                            arr_205 [i_63] [i_60] [2] [i_53] [i_52] [i_52] = var_7;
                            var_118 -= var_1;
                            var_119 ^= var_0;
                        }
                        arr_206 [i_52] [i_52] [0] = -268173305;

                        for (int i_64 = 0; i_64 < 10;i_64 += 1)
                        {
                            var_120 ^= var_1;
                            var_121 = ((+(((arr_166 [i_52] [i_52] [i_56] [i_56] [i_56]) ? var_0 : (arr_150 [i_52 + 1] [i_52] [i_52] [i_52 + 1] [i_52])))));
                            arr_209 [7] [i_56] [i_56] [i_52 + 1] [i_52 + 1] = var_1;
                            var_122 = var_3;
                            arr_210 [i_64] [i_53] [i_53] [i_52 - 2] = (!var_0);
                        }
                        for (int i_65 = 0; i_65 < 10;i_65 += 1)
                        {
                            var_123 *= (arr_29 [i_52] [i_53] [i_53] [i_60]);
                            arr_214 [2] [2] [i_56] [i_53] [i_52 + 1] [i_52 + 2] = var_8;
                            var_124 = (min(var_124, var_5));
                        }
                        for (int i_66 = 0; i_66 < 10;i_66 += 1)
                        {
                            var_125 = (((arr_136 [i_52 + 1] [i_52 - 2] [i_52] [i_52 + 1]) ? (arr_136 [i_52 + 1] [i_52 + 1] [i_52 + 1] [i_52 - 1]) : (arr_136 [i_52 - 1] [i_52 + 1] [0] [i_52 - 1])));
                            var_126 = (min(var_126, var_7));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_67 = 0; i_67 < 10;i_67 += 1)
                {
                    for (int i_68 = 1; i_68 < 8;i_68 += 1)
                    {
                        {
                            var_127 = ((var_3 ? var_2 : (arr_211 [i_67] [i_67] [i_53])));
                            var_128 = var_7;
                        }
                    }
                }

                for (int i_69 = 0; i_69 < 10;i_69 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_70 = 0; i_70 < 10;i_70 += 1)
                    {
                        for (int i_71 = 0; i_71 < 10;i_71 += 1)
                        {
                            {
                                var_129 = var_2;
                                var_130 = (min(((min((arr_145 [i_52 - 1] [i_52 - 1]), (arr_145 [i_52 - 2] [i_52 + 1])))), (var_9 || var_1)));
                                var_131 = (((arr_11 [i_52 - 1] [i_52 - 1]) ? (arr_11 [i_52 + 2] [i_52 - 1]) : (arr_11 [i_52 - 1] [i_52 - 1])));
                            }
                        }
                    }
                    var_132 = var_6;
                    var_133 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
