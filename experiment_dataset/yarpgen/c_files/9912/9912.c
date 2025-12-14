/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_12 = (min(var_12, (((-(~-6106))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 -= (arr_8 [7] [7]);
                    var_14 *= var_7;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_15 -= var_5;

                        for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_16 -= 1;
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = 1;
                        }
                        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_3] [i_3] [i_3] [i_0] [i_3 + 1] [8] [i_3 + 1] = (!-118);
                            arr_19 [i_0] [6] [1] [1] [i_0] [i_0] |= 1;
                        }
                        arr_20 [23] [i_0] [i_2 - 1] [23] = ((-(arr_13 [i_0] [i_1] [i_0])));
                        var_17 = 1753657926;
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_18 = (!1);
                        var_19 = 32767;

                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_20 += (~2951069636);
                            var_21 = ((~(arr_16 [i_1])));
                        }
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_22 = 4818;
                        arr_29 [i_0] [i_0] [3] [i_1] [i_0] [i_0] = 1;
                    }
                    var_23 = -var_5;
                }
            }
        }
        arr_30 [i_0] [i_0] = ((-(~2879696215)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_24 = (max(var_24, (~1)));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_25 = 1;
                    arr_38 [i_9] [i_9] [i_9] = ((-(!var_2)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_26 *= 1;
                                var_27 += var_7;
                                arr_45 [i_9] [i_9] [i_11] [i_12] [i_13] = (~var_6);
                                var_28 = -126;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 13;i_14 += 1)
    {
        var_29 = ((~(~var_10)));

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_51 [i_15] = ((~(arr_34 [i_15])));
            arr_52 [i_15] [i_15] [i_15] = (~32767);
            var_30 -= ((-((-(arr_6 [1] [1] [1] [i_14])))));
        }
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_31 = ((!(((~(arr_48 [i_14]))))));
                            var_32 = (min(var_32, 2951069636));
                            var_33 ^= (~1);
                        }
                    }
                }
            }
            arr_63 [i_14] [i_16] = 18;
        }
        for (int i_20 = 0; i_20 < 0;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 12;i_23 += 1)
                    {
                        {
                            var_34 ^= -0;
                            var_35 += var_0;
                        }
                    }
                }
            }

            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 14;i_26 += 1)
                    {
                        {
                            var_36 = (~1);
                            var_37 = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    for (int i_28 = 3; i_28 < 13;i_28 += 1)
                    {
                        {
                            var_38 = (min(var_38, -var_1));
                            arr_85 [i_14] [i_20] [i_20] [i_24] [i_28] = (((-(arr_68 [i_28 - 3] [i_27] [i_20] [i_20]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 14;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 14;i_30 += 1)
                    {
                        {
                            arr_91 [i_24] [i_24] = (~-var_5);
                            var_39 = var_11;
                            var_40 -= (!(((-(arr_16 [i_30])))));
                            var_41 -= 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 14;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 14;i_32 += 1)
                    {
                        {
                            var_42 = (min(var_42, (+-1)));
                            var_43 = (!0);
                            arr_97 [8] [8] [8] [i_24] [8] [8] [i_32] = (((~(arr_82 [i_32] [10] [10] [i_20] [10]))));
                        }
                    }
                }
                var_44 += (!var_1);
            }
            for (int i_33 = 1; i_33 < 13;i_33 += 1) /* same iter space */
            {
                arr_100 [i_14 - 1] [i_20] [i_14 + 1] = (arr_90 [i_14] [i_14] [i_14] [0] [i_20] [i_33]);
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 14;i_34 += 1)
                {
                    for (int i_35 = 2; i_35 < 11;i_35 += 1)
                    {
                        {
                            arr_106 [i_14] [i_34] [i_20] [i_34] [1] [i_35] = (~1343897657);
                            var_45 = var_9;
                            var_46 += (arr_39 [0] [20] [i_34] [i_35]);
                        }
                    }
                }
                arr_107 [i_33 - 1] = 2951069636;
            }
            for (int i_36 = 1; i_36 < 13;i_36 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 14;i_37 += 1)
                {
                    for (int i_38 = 4; i_38 < 13;i_38 += 1)
                    {
                        {
                            arr_114 [i_36] [i_20] [i_20] [i_36 + 1] [i_37] [i_38] [13] = -16372;
                            var_47 = (min(var_47, 1));
                            var_48 = (~var_4);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 14;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 1;i_40 += 1)
                    {
                        {
                            var_49 = (min(var_49, (~var_2)));
                            var_50 = (min(var_50, (((!(arr_61 [6] [i_20 + 1] [i_36] [i_39] [6]))))));
                            arr_122 [i_36] [i_36] [i_36] [i_39] [i_40] = 1;
                            var_51 &= -1;
                        }
                    }
                }
                var_52 = 1;
                arr_123 [i_36] [i_20] [i_36] = 160;
                arr_124 [i_36] [i_20] = ((!(!var_10)));
            }
            for (int i_41 = 1; i_41 < 13;i_41 += 1) /* same iter space */
            {
                arr_127 [i_14] [i_14] [i_41] [i_14] = (--1);
                arr_128 [i_41] [i_41] [i_14 - 1] = 3970704236;
            }
            var_53 = (min(var_53, 1));
            var_54 = -var_4;
            arr_129 [i_14 + 1] [2] = (~var_4);
        }
        for (int i_42 = 1; i_42 < 12;i_42 += 1)
        {
            var_55 = (!var_5);
            var_56 = (!(!2951069636));
        }
        var_57 = -7412;
        /* LoopNest 2 */
        for (int i_43 = 0; i_43 < 14;i_43 += 1)
        {
            for (int i_44 = 0; i_44 < 14;i_44 += 1)
            {
                {

                    for (int i_45 = 0; i_45 < 14;i_45 += 1)
                    {
                        arr_144 [i_14] [i_45] [i_44] [i_43] = ((~(~1)));
                        var_58 = -var_3;
                        var_59 = (max(var_59, -1));
                        var_60 = (max(var_60, ((!(~var_9)))));
                        var_61 += (!var_2);
                    }
                    for (int i_46 = 0; i_46 < 14;i_46 += 1)
                    {
                        arr_148 [i_14] [i_14] [1] [i_44] [i_43] [1] = 9223372036854775807;
                        var_62 += (!9223372036854775800);
                    }
                    for (int i_47 = 0; i_47 < 14;i_47 += 1) /* same iter space */
                    {
                        arr_153 [i_14 + 1] [i_43] [i_14] [i_14] = (!1);
                        var_63 = (!var_9);
                    }
                    for (int i_48 = 0; i_48 < 14;i_48 += 1) /* same iter space */
                    {
                        arr_156 [i_48] [i_43] [i_43] [3] = (arr_75 [i_48] [i_48] [i_44]);
                        var_64 = var_8;
                    }
                    arr_157 [13] [13] [i_43] [4] = ((-(~18181)));

                    for (int i_49 = 0; i_49 < 14;i_49 += 1) /* same iter space */
                    {
                        var_65 -= -1;
                        var_66 -= (~var_7);
                    }
                    for (int i_50 = 0; i_50 < 14;i_50 += 1) /* same iter space */
                    {
                        arr_164 [5] [i_14] [i_14] [6] [i_43] [i_50] = (!1);
                        arr_165 [i_44] [1] [i_43] [1] = (~var_10);
                        arr_166 [i_14 + 1] [i_43] [i_44] [i_50] = (arr_17 [i_14] [i_43] [i_43] [i_43]);
                        arr_167 [i_43] [i_43] [i_44] [i_44] [i_44] = (~17);
                    }
                    for (int i_51 = 1; i_51 < 11;i_51 += 1) /* same iter space */
                    {
                        arr_171 [i_51] [i_43] [i_51] [i_44] [i_43] [i_14] = (!-19);
                        var_67 = (min(var_67, (arr_110 [0])));

                        for (int i_52 = 0; i_52 < 14;i_52 += 1)
                        {
                            arr_174 [i_14] [i_43] [i_44] [i_43] [i_43] [i_52] = (!9223372036854775807);
                            var_68 = (min(var_68, var_10));
                            var_69 = (~-9223372036854775807);
                            arr_175 [i_51] [i_43] [9] [i_43] [i_43] [9] = ((~(arr_42 [1] [i_43] [1])));
                        }
                        var_70 = (~1);

                        for (int i_53 = 0; i_53 < 14;i_53 += 1)
                        {
                            arr_178 [i_14] [i_14] [i_14] [i_14] [i_51] [i_43] = (!-var_4);
                            var_71 = (min(var_71, var_0));
                        }
                        for (int i_54 = 0; i_54 < 1;i_54 += 1)
                        {
                            var_72 = (~var_9);
                            var_73 = 1;
                            arr_183 [i_14 - 1] [2] [i_43] [i_51 + 3] = -17;
                            var_74 -= 32;
                            var_75 = (min(var_75, -58));
                        }
                        for (int i_55 = 1; i_55 < 1;i_55 += 1)
                        {
                            var_76 = (max(var_76, (~31)));
                            arr_186 [i_14] [6] [i_43] [i_43] [i_55] = (((~(arr_98 [1] [i_44] [i_51]))));
                            arr_187 [i_43] [i_43] [i_43] = (((!(arr_159 [i_14 + 1] [i_43] [i_14 + 1] [i_43] [i_14 + 1]))));
                        }
                        for (int i_56 = 4; i_56 < 12;i_56 += 1)
                        {
                            arr_190 [i_43] [i_43] = ((-((-(arr_53 [i_43])))));
                            var_77 -= ((-(~var_1)));
                            arr_191 [i_56] [i_43] [i_44] [i_43] [i_14] = (arr_70 [i_14] [i_43] [i_43] [i_43] [i_43] [i_56]);
                        }
                    }
                    for (int i_57 = 1; i_57 < 11;i_57 += 1) /* same iter space */
                    {
                        var_78 *= ((~(arr_161 [i_57] [i_44] [4] [i_14] [i_14] [i_14])));
                        arr_195 [i_14 + 1] [1] [i_43] [i_14 + 1] [i_57] = (!var_0);
                        arr_196 [i_43] [i_44] [i_43] [i_43] = (!var_10);
                    }
                    var_79 = (min(var_79, (arr_158 [11] [11] [11])));
                    var_80 = -100;
                }
            }
        }
    }
    var_81 = (max(var_81, ((((min(1, var_1)))))));
    var_82 = max((((~(min(var_1, var_0))))), var_10);
    var_83 -= (max((!-var_10), (min((max(226, var_0)), ((max(235, var_1)))))));
    var_84 = (min(var_84, ((min((+-37), ((~(max(223, var_2)))))))));
    #pragma endscop
}
