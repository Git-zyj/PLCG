/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(var_8, var_4)));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = var_8;
                            var_21 = (min(var_21, (((-0 ? var_14 : (arr_5 [i_0 + 3] [i_0 - 1] [i_0 - 2]))))));
                        }
                        var_22 = var_2;
                        var_23 = (arr_0 [4]);
                        arr_13 [i_0] [i_0] [0] [9] = var_9;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_24 = ((((((arr_11 [i_0 + 2] [i_0 + 3]) ? (arr_11 [i_0 + 2] [i_0 - 2]) : (arr_11 [i_0 - 1] [i_0 + 2])))) ? ((var_15 ? (((var_12 ? var_11 : var_9))) : (((arr_1 [5]) ? (arr_4 [i_0 - 1] [i_5] [i_6]) : var_17)))) : var_10));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_25 = ((((((arr_19 [i_5]) % (arr_9 [i_0] [i_5] [i_0])))) ? (((-((((arr_7 [i_0] [i_0]) >= (arr_10 [i_0] [i_5] [i_6] [i_0] [2] [i_7]))))))) : (max(var_0, (min(var_15, var_18))))));
                        var_26 = ((1062920279 ? 4096 : -1279366554));
                        arr_23 [i_0] [i_0] [i_5] [i_6] [i_0] = ((var_17 + ((var_2 ? var_16 : (~var_17)))));
                        arr_24 [i_0] [i_0] [i_0] [i_0 - 2] = (arr_21 [i_0] [7] [i_0]);
                    }
                    var_27 = (max(var_27, (arr_8 [i_6] [i_6] [10] [i_5] [i_0])));

                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        var_28 = (arr_16 [i_0] [i_0] [i_0]);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_29 = (min(var_29, (((!(((~(arr_18 [i_8 - 1] [i_6] [2])))))))));
                            arr_30 [i_0 + 1] [i_5] [i_5] [i_0 + 1] [1] [i_0] = (((((-(((arr_28 [8] [i_5] [i_6] [8] [10]) / var_0))))) + (((574824927 + 4045092498) ? ((~(arr_21 [i_0] [i_5] [i_9]))) : (arr_11 [i_6] [i_6])))));
                            arr_31 [i_0] [6] [i_6] [i_8] &= var_8;
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
                        {
                            var_30 &= (arr_32 [i_0] [6] [i_5] [10]);
                            arr_35 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0] [i_10] = var_6;
                            var_31 = (-(((arr_26 [i_0 + 3] [i_5] [6] [6] [6] [i_8]) ? var_16 : (arr_29 [i_10] [i_10] [i_10] [5] [i_10]))));
                            var_32 = (min(var_32, var_16));
                        }
                        for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
                        {
                            var_33 = ((-(arr_6 [4])));
                            var_34 = (min((arr_4 [i_11 + 1] [i_0 - 2] [i_0 - 2]), ((((arr_4 [i_11 + 3] [i_0 - 1] [i_8]) <= (arr_4 [i_11 + 3] [i_0 + 3] [i_6]))))));
                            var_35 = (min(var_35, (arr_5 [i_6] [i_6] [i_6])));
                        }
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            var_36 = var_15;
                            arr_40 [i_8] &= ((((!(arr_1 [i_8 + 1])))));
                        }

                        for (int i_13 = 4; i_13 < 8;i_13 += 1)
                        {
                            arr_44 [5] [i_0] [i_8] [i_13] = (min((arr_21 [i_6] [i_8 - 2] [i_6]), (arr_6 [i_0])));
                            arr_45 [i_0] [8] [i_6] [i_8] [i_13] = var_2;
                        }
                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            var_37 = (arr_32 [i_0 - 1] [i_5] [i_5] [i_0 - 1]);
                            var_38 = var_13;
                            var_39 = var_13;
                            arr_49 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [8]) ? var_15 : (arr_32 [i_0] [i_0] [i_0] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            var_40 = (((arr_21 [i_15 + 1] [i_8] [1]) ? ((~(arr_21 [i_0] [i_5] [i_6]))) : ((((arr_28 [i_0 - 1] [i_0] [4] [i_0] [i_0 + 1]) ? var_6 : var_3)))));
                            var_41 &= (arr_9 [i_8] [i_5] [i_6]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 7;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_42 &= (max(7123801200604161175, 1));
                                var_43 = (arr_43 [i_0 + 4] [4] [4] [i_0] [4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 16;i_18 += 1)
    {
        var_44 = (arr_57 [i_18]);
        arr_59 [i_18] = ((-(var_15 + var_6)));

        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_45 = ((var_6 ? ((((arr_58 [i_19] [16]) ? (arr_57 [i_18]) : (arr_61 [i_18] [i_18 + 1])))) : (arr_60 [i_18] [i_19] [i_19])));
            var_46 = (min(var_46, ((((!var_1) << (var_2 - 17932))))));
        }
        for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    {
                        var_47 = ((~(arr_60 [i_22] [i_21] [i_20])));
                        var_48 = (max(var_48, (((var_9 ? var_4 : var_1)))));
                        arr_70 [i_18 + 1] [i_21] [i_21] [i_18 + 1] = (arr_66 [i_22]);
                    }
                }
            }
            var_49 = (arr_63 [i_18 + 2] [4]);

            for (int i_23 = 2; i_23 < 16;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 17;i_25 += 1)
                    {
                        {
                            var_50 = ((8589934528 ? var_6 : (284410404 > 268435440)));
                            var_51 = (max(var_51, ((((arr_71 [i_18] [i_18]) ? var_8 : var_16)))));
                            var_52 = arr_64 [i_25];
                            var_53 = var_8;
                        }
                    }
                }

                for (int i_26 = 1; i_26 < 17;i_26 += 1)
                {
                    var_54 = (max(var_54, var_12));
                    var_55 *= ((~(!var_10)));
                }
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    var_56 = ((-(var_16 * var_6)));
                    arr_88 [i_20] [i_27] = (arr_79 [i_18] [i_18] [i_18 - 1] [i_18] [i_23 + 2]);
                    var_57 = (((arr_80 [i_18 + 3] [i_18 + 3] [i_18 - 1] [i_18 - 2] [7] [i_18]) || (arr_58 [i_18] [15])));
                }
                /* LoopNest 2 */
                for (int i_28 = 2; i_28 < 18;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        {
                            var_58 = (!var_4);
                            var_59 = (~var_8);
                        }
                    }
                }
            }
            for (int i_30 = 0; i_30 < 19;i_30 += 1)
            {

                for (int i_31 = 1; i_31 < 18;i_31 += 1)
                {
                    var_60 = var_5;
                    var_61 = (arr_68 [i_18] [i_18 + 2] [i_31 - 1] [12]);
                }
                arr_99 [i_18] [i_20] [i_20] [i_18] &= ((~(arr_94 [i_18 + 3] [i_30])));
            }
        }
        for (int i_32 = 0; i_32 < 19;i_32 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 19;i_33 += 1)
            {
                for (int i_34 = 0; i_34 < 19;i_34 += 1)
                {
                    {
                        var_62 = (arr_61 [i_18] [9]);
                        var_63 = (max(var_63, var_2));
                        var_64 = (arr_105 [i_34] [i_34] [i_34] [i_34] [12]);
                    }
                }
            }

            for (int i_35 = 2; i_35 < 18;i_35 += 1) /* same iter space */
            {
                arr_111 [i_18 + 1] [i_18] [i_32] [i_35] &= ((~(arr_100 [i_18 + 2] [i_35 + 1])));

                for (int i_36 = 0; i_36 < 19;i_36 += 1) /* same iter space */
                {
                    arr_114 [3] [3] [3] [i_36] = (arr_71 [i_35 - 1] [i_18 - 1]);
                    var_65 = var_15;
                    var_66 = (arr_66 [i_35]);
                    var_67 = (-(arr_110 [i_18] [i_18] [i_36]));
                }
                for (int i_37 = 0; i_37 < 19;i_37 += 1) /* same iter space */
                {
                    var_68 = var_8;
                    arr_118 [i_18] = var_11;
                }
                for (int i_38 = 0; i_38 < 19;i_38 += 1) /* same iter space */
                {

                    for (int i_39 = 0; i_39 < 19;i_39 += 1)
                    {
                        var_69 = (min(var_69, var_5));
                        var_70 = (arr_90 [i_18] [i_38] [i_38] [2] [i_39] [2]);
                    }
                    var_71 = (max(var_71, (arr_96 [i_38] [i_38] [i_38] [9] [9])));
                    var_72 = (arr_117 [i_38] [i_38] [i_35 + 1] [i_18 - 2] [i_38] [i_35]);
                }
                arr_124 [0] [i_18] [i_32] [i_35 + 1] = (arr_75 [i_35]);
                /* LoopNest 2 */
                for (int i_40 = 2; i_40 < 18;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 19;i_41 += 1)
                    {
                        {
                            var_73 = var_16;
                            var_74 &= (((arr_98 [i_18] [14] [i_35 + 1] [14] [i_41]) ? var_13 : (arr_98 [16] [i_32] [i_35] [i_40 - 2] [i_41])));
                        }
                    }
                }

                for (int i_42 = 4; i_42 < 17;i_42 += 1)
                {
                    var_75 = (((arr_117 [i_42] [i_42] [i_42] [i_42] [i_42 - 3] [i_42]) ? ((var_5 ? var_10 : var_18)) : var_0));
                    var_76 &= ((!(arr_90 [i_42 + 2] [i_35 - 2] [13] [i_42] [i_42 + 2] [7])));
                    var_77 = (!var_14);
                    var_78 = (min(var_78, (((var_11 ? var_14 : (arr_128 [i_42 - 3] [i_35] [i_32] [i_18] [i_18 - 2]))))));
                }
            }
            for (int i_43 = 2; i_43 < 18;i_43 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_44 = 1; i_44 < 17;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 19;i_45 += 1)
                    {
                        {
                            var_79 = ((5381 ? 1966080 : -152434215));
                            var_80 = (min(var_80, var_17));
                        }
                    }
                }
                var_81 = (arr_63 [i_18] [i_18]);
            }
            for (int i_46 = 2; i_46 < 18;i_46 += 1) /* same iter space */
            {

                for (int i_47 = 1; i_47 < 18;i_47 += 1)
                {
                    var_82 = ((var_7 >> (((~11473081322465738451) - 6973662751243813133))));
                    arr_149 [13] [i_46] [6] [i_47] = (arr_90 [i_18] [i_18 - 2] [8] [9] [i_18] [i_18]);
                }
                var_83 = (arr_82 [i_18] [i_32] [i_32] [i_18]);
            }
            /* LoopNest 2 */
            for (int i_48 = 0; i_48 < 1;i_48 += 1)
            {
                for (int i_49 = 4; i_49 < 17;i_49 += 1)
                {
                    {
                        arr_156 [4] [i_32] [i_18 - 2] &= var_11;
                        var_84 = (arr_87 [11] [i_32] [17] [i_32] [14]);
                        arr_157 [i_18 - 2] = (arr_142 [10] [i_49 - 1] [i_49] [4] [i_49]);
                        var_85 = var_0;
                        arr_158 [i_49] = (((arr_131 [i_49] [18] [i_18] [i_18] [i_18]) ? -var_14 : (arr_101 [i_48])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_50 = 0; i_50 < 19;i_50 += 1)
            {
                for (int i_51 = 0; i_51 < 19;i_51 += 1)
                {
                    for (int i_52 = 0; i_52 < 1;i_52 += 1)
                    {
                        {
                            var_86 = (max(var_86, var_15));
                            var_87 = (~var_15);
                        }
                    }
                }
            }
        }
    }
    for (int i_53 = 0; i_53 < 11;i_53 += 1)
    {
        var_88 = (arr_33 [i_53]);

        for (int i_54 = 0; i_54 < 11;i_54 += 1) /* same iter space */
        {
            arr_172 [1] [i_54] = ((-1405149274 ? (((arr_89 [i_53] [i_53] [i_53] [i_53]) ^ var_0)) : (arr_89 [i_54] [i_54] [i_54] [i_54])));
            var_89 = arr_128 [i_53] [i_53] [i_54] [18] [i_53];
        }
        for (int i_55 = 0; i_55 < 11;i_55 += 1) /* same iter space */
        {
            var_90 = (min(var_90, var_0));
            arr_177 [i_53] [5] = (arr_136 [0] [i_53] [i_53] [0]);

            for (int i_56 = 3; i_56 < 10;i_56 += 1)
            {
                var_91 = (arr_48 [0] [i_53] [i_56 - 1] [i_53] [i_53] [i_55]);
                var_92 = (min(var_92, ((((arr_146 [i_53] [i_53] [i_53] [i_53]) - (((!(var_4 ^ var_6)))))))));
            }
            for (int i_57 = 0; i_57 < 1;i_57 += 1)
            {
                arr_184 [i_57] [8] [i_57] = (arr_148 [11] [i_57] [i_57] [i_57]);
                var_93 = var_11;
            }
        }
        /* vectorizable */
        for (int i_58 = 0; i_58 < 11;i_58 += 1) /* same iter space */
        {
            var_94 = var_15;
            /* LoopNest 3 */
            for (int i_59 = 0; i_59 < 11;i_59 += 1)
            {
                for (int i_60 = 4; i_60 < 9;i_60 += 1)
                {
                    for (int i_61 = 0; i_61 < 11;i_61 += 1)
                    {
                        {
                            var_95 |= (((arr_34 [i_53] [i_53] [2] [10] [i_59]) + (arr_183 [i_58] [i_60 + 1] [i_60 - 2] [i_60])));
                            var_96 ^= var_12;
                            var_97 = (((arr_181 [i_61] [i_59] [i_59] [i_53]) ? var_7 : var_13));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_62 = 0; i_62 < 11;i_62 += 1) /* same iter space */
        {
            arr_199 [5] [7] [i_62] = (arr_80 [i_53] [i_62] [i_62] [i_62] [10] [i_62]);
            var_98 = (arr_180 [i_53] [1] [i_62]);
            var_99 = (~var_16);
        }
    }
    for (int i_63 = 2; i_63 < 19;i_63 += 1)
    {
        var_100 = var_1;
        arr_203 [i_63] = (~var_10);
        var_101 = var_18;
    }
    #pragma endscop
}
