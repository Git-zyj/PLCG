/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            var_17 = -var_7;
            var_18 = (arr_0 [i_0]);
            var_19 |= (arr_3 [i_0] [i_1 + 3]);
            var_20 = (!(~var_15));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_21 = (~(arr_4 [i_5 - 1]));
                                arr_14 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5] [i_0] = (((arr_4 [i_4]) <= var_10));
                            }
                        }
                    }
                    var_22 = var_10;

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_20 [i_7] [1] [i_3] [i_6] [i_3] = var_1;
                            arr_21 [i_0] [i_0] [i_0] [i_7] = var_7;
                            arr_22 [i_0] [i_3] [i_7] [i_7] = var_1;
                        }
                        arr_23 [i_0] [i_2] [i_3] [i_2] = arr_6 [i_2];
                        var_23 = (max(var_23, ((((arr_7 [i_2] [i_3]) ? (arr_13 [i_2]) : ((var_14 ? var_1 : var_0)))))));
                        arr_24 [i_0] [8] [1] [i_6] [i_6] = (arr_4 [i_2]);
                    }
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        arr_27 [i_3] [i_8] = (arr_13 [i_8 + 1]);

                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            var_24 = (min(var_24, (arr_19 [i_2])));
                            var_25 = var_13;
                            arr_30 [i_9] [i_8] [i_3] [i_2] [i_8] [i_0] = (~var_4);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_35 [i_8] [i_2] [i_3] = var_6;
                            arr_36 [i_0] [i_0] [i_0] [i_8] [i_10] |= (((arr_12 [i_8 - 1] [i_8 + 1]) ? (arr_12 [i_8 + 1] [i_8 + 2]) : (arr_12 [i_8 + 1] [i_8 - 1])));
                        }
                        arr_37 [i_2] [i_2] [i_2] [i_8] [i_8] = (arr_31 [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            var_26 = ((~(arr_9 [i_11] [i_2] [i_3] [i_11])));
                            var_27 = (arr_16 [i_0] [i_2] [i_3]);
                            arr_46 [i_0] [i_3] [i_11] [i_12] = (var_13 * var_9);
                            arr_47 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2] [i_12] = (((arr_28 [i_0] [i_12 + 2] [i_12 + 2] [i_12 - 2] [i_12]) ? (arr_28 [i_12 - 1] [i_2] [i_12 - 1] [i_12 - 1] [6]) : (arr_0 [i_12 + 2])));
                            var_28 += var_6;
                        }
                        var_29 = (arr_8 [i_0] [i_2] [i_2]);
                        arr_48 [i_0] [i_3] [i_3] = var_7;
                        arr_49 [i_2] [i_3] = var_16;
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_53 [i_0] [i_2] [i_3] = ((~(arr_25 [i_0] [i_2] [i_3] [i_2] [i_0])));
                        arr_54 [i_13] [i_13] = (var_14 + (!var_2));
                        arr_55 [i_0] [i_13] = -3271559265;
                        var_30 += (((var_1 + (arr_11 [i_13] [i_3] [i_0] [i_0] [i_0]))));
                    }
                    var_31 = (~var_0);
                }
            }
        }
        arr_56 [i_0] = ((-((var_14 ? (arr_8 [i_0] [i_0] [i_0]) : var_7))));
        var_32 = (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_33 = (max(var_33, var_3));
        var_34 = var_2;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_62 [i_15] = ((!(((var_9 ? var_0 : (arr_60 [i_15]))))));
        var_35 = (((arr_61 [i_15]) >= (arr_61 [i_15])));
        var_36 &= var_4;
        var_37 += ((~(arr_61 [i_15])));
    }
    var_38 = var_11;

    for (int i_16 = 1; i_16 < 12;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                {
                    arr_70 [1] = (((arr_60 [1]) < var_12));

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {

                        for (int i_20 = 2; i_20 < 9;i_20 += 1)
                        {
                            var_39 = (min(var_39, (((var_1 ? ((var_16 ? (((min(var_10, var_16)))) : (~var_6))) : (arr_69 [i_19] [i_18 - 1] [i_17] [i_16]))))));
                            var_40 = (arr_69 [i_17] [i_17] [i_17] [i_17]);
                        }
                        arr_75 [i_16] [i_17] [i_17] [i_19] [i_18] [i_18] = ((-(arr_58 [i_18])));
                        arr_76 [i_16] [i_16] [i_18] [i_18] [i_19] [i_19] = (!((!(arr_60 [i_19]))));
                        arr_77 [i_16] [i_17] [i_18] [i_18 - 1] [i_19] = var_4;
                    }
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        var_41 = (max(var_41, ((max((~var_11), (((!((min((arr_78 [i_21] [i_18] [1] [0]), (arr_73 [i_16]))))))))))));
                        arr_81 [i_21] [i_16] [i_16] [i_17] [i_16] = var_10;
                        var_42 = ((var_15 + ((var_15 ? var_13 : ((((!(arr_65 [i_21])))))))));
                    }
                    arr_82 [i_16] [3] [i_16] = (min(var_1, 3));
                }
            }
        }

        for (int i_22 = 1; i_22 < 9;i_22 += 1) /* same iter space */
        {
            arr_85 [i_16] = (max((~var_12), (((~(arr_71 [i_16] [i_16] [i_22] [i_16 + 1] [i_22] [3]))))));
            arr_86 [i_22] = var_1;
        }
        for (int i_23 = 1; i_23 < 9;i_23 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 12;i_25 += 1)
                {
                    {

                        for (int i_26 = 1; i_26 < 12;i_26 += 1)
                        {
                            var_43 = (((!var_9) == (arr_67 [i_16] [i_16] [i_16])));
                            arr_97 [i_16] [i_23] [i_24] [i_25] [i_26] = (max((((!(arr_58 [7])))), (arr_65 [i_16])));
                            arr_98 [i_16] [i_25] [i_23] [i_16] [i_24] [i_25] [i_24] = (max(((((arr_83 [i_24] [i_23 + 3]) == (arr_83 [i_26 - 1] [i_23 + 3])))), (arr_83 [i_24] [i_23 + 3])));
                            arr_99 [1] [i_23] [i_24] [i_25] = (((((-var_13 ? (var_9 - var_9) : (arr_96 [i_26 + 1] [i_25] [i_25 - 1] [i_24] [12] [1] [i_16])))) / var_13));
                        }
                        for (int i_27 = 1; i_27 < 1;i_27 += 1)
                        {
                            var_44 = (min(var_44, (((+((((min((arr_91 [i_16 + 1] [i_23 + 4]), var_14)) >= (((((arr_101 [i_25] [i_24] [i_16]) < (arr_67 [3] [i_25 - 1] [i_25 - 1])))))))))))));
                            var_45 = (min(var_45, var_13));
                        }
                        arr_104 [i_16] [i_25] [i_24] [i_25] = (arr_91 [i_16 - 1] [i_16 + 1]);
                        var_46 = ((var_0 ? (arr_88 [i_16] [i_16] [i_25]) : (~3)));
                        var_47 = max((((arr_59 [i_16 - 1]) ? (((-(arr_101 [i_25] [i_25] [i_16])))) : (var_8 - var_6))), ((-(max(var_0, var_11)))));
                    }
                }
            }
            arr_105 [i_16] [i_23 + 1] = ((((((arr_79 [i_16 - 1] [i_23] [i_23] [i_16 - 1] [i_23] [7]) && (arr_79 [i_16 - 1] [i_16 - 1] [i_23 + 4] [i_16 + 1] [i_16 - 1] [i_16])))) + ((min((arr_79 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_23 + 4] [i_16]), (arr_74 [2] [i_23] [i_16 - 1] [i_23] [7] [i_16 + 1] [i_23]))))));
        }
        for (int i_28 = 1; i_28 < 9;i_28 += 1) /* same iter space */
        {
            var_48 = ((!((max(((var_0 ? (arr_103 [1] [i_16] [i_28] [i_16 - 1] [4]) : var_10)), var_2)))));
            arr_110 [i_28] = ((!(arr_60 [1])));
        }
        arr_111 [i_16] = ((((min((arr_58 [i_16 + 1]), var_8))) ? var_0 : (min(var_3, (arr_107 [i_16 - 1] [i_16] [i_16])))));
        arr_112 [i_16 + 1] = ((((((min(var_12, var_7)) * (arr_101 [i_16] [2] [i_16 - 1])))) ? ((var_6 ? (arr_58 [i_16 + 1]) : var_1)) : var_16));
        var_49 = var_3;
    }
    var_50 = (((((min(var_3, var_16)))) == (min((((var_13 ? var_5 : var_16))), var_2))));

    for (int i_29 = 3; i_29 < 20;i_29 += 1) /* same iter space */
    {
        var_51 = ((var_7 + (arr_114 [i_29] [i_29])));
        arr_115 [i_29 - 2] = ((min(var_11, var_5)));
    }
    for (int i_30 = 3; i_30 < 20;i_30 += 1) /* same iter space */
    {
        arr_120 [i_30] = (min(var_6, (((~(min(var_14, var_0)))))));
        var_52 = ((-(min(-var_5, (arr_116 [i_30 + 1] [i_30])))));
        arr_121 [i_30] = (min(3, 15));
        var_53 = ((var_11 ? var_3 : var_0));
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 16;i_31 += 1)
    {
        arr_124 [i_31] = ((~(arr_116 [1] [1])));
        arr_125 [i_31] = ((~(((var_16 <= (arr_118 [i_31]))))));
        arr_126 [i_31] = arr_117 [i_31];

        for (int i_32 = 0; i_32 < 16;i_32 += 1)
        {

            for (int i_33 = 0; i_33 < 16;i_33 += 1)
            {
                var_54 = (max(var_54, (arr_117 [i_32])));
                var_55 = var_1;
            }
            for (int i_34 = 3; i_34 < 12;i_34 += 1)
            {
                arr_135 [i_32] [1] [i_34 + 1] = (((arr_61 [i_34 - 2]) <= (arr_61 [i_34 + 4])));

                for (int i_35 = 2; i_35 < 15;i_35 += 1) /* same iter space */
                {
                    var_56 = (arr_128 [i_32]);
                    var_57 ^= (((arr_129 [i_34 - 1] [i_34 - 2] [i_35]) < (arr_133 [i_35] [i_35])));
                    arr_139 [i_31] [i_32] [i_32] [i_32] = arr_129 [i_31] [i_31] [i_35];
                }
                for (int i_36 = 2; i_36 < 15;i_36 += 1) /* same iter space */
                {
                    arr_144 [i_36] [i_34 - 1] [i_32] [i_36] |= 12;
                    var_58 = ((-(arr_136 [i_34 + 2] [i_32] [i_34 - 3] [i_34 - 3])));
                    arr_145 [i_31] [i_34] [i_34] [i_32] = ((var_5 ? (arr_143 [i_34 + 4] [i_32] [i_34] [i_36 - 1]) : var_3));
                }
                arr_146 [i_32] = ((~(arr_137 [i_34] [i_32] [i_34])));
                var_59 = (min(var_59, var_13));
            }
            for (int i_37 = 1; i_37 < 1;i_37 += 1)
            {
                var_60 = ((+((var_7 ? (arr_131 [i_31] [8] [i_32] [i_37 - 1]) : (arr_137 [i_31] [i_32] [i_37 - 1])))));
                arr_150 [i_32] = ((var_0 + (arr_141 [i_37 - 1] [i_37] [i_32])));
                arr_151 [i_31] [8] [i_31] [i_37 - 1] &= (!var_13);
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 1;i_38 += 1)
                {
                    for (int i_39 = 3; i_39 < 13;i_39 += 1)
                    {
                        {
                            var_61 = (arr_113 [i_37 - 1] [i_39 - 1]);
                            var_62 ^= ((!(arr_116 [i_37 - 1] [10])));
                            arr_158 [i_32] [i_38] [i_38] [i_32] [i_32] [i_32] = ((var_16 + (arr_138 [i_32] [i_32])));
                        }
                    }
                }
            }
            var_63 = (min(var_63, (~var_13)));
            var_64 += (~var_9);
            arr_159 [i_32] [i_31] [1] = ((arr_155 [i_31] [i_31] [1] [i_32] [i_32]) ? ((((arr_129 [i_31] [i_32] [i_31]) ? var_10 : var_4))) : (arr_138 [i_31] [i_32]));
        }
        for (int i_40 = 0; i_40 < 16;i_40 += 1)
        {

            for (int i_41 = 0; i_41 < 16;i_41 += 1)
            {
                /* LoopNest 2 */
                for (int i_42 = 2; i_42 < 15;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 16;i_43 += 1)
                    {
                        {
                            arr_169 [i_42] [i_40] [i_41] [i_42 + 1] [i_41] = ((~(arr_138 [i_42] [i_42])));
                            arr_170 [i_42] [i_42] [i_41] [11] [i_42] = (((arr_127 [i_40]) ? var_1 : (!var_9)));
                        }
                    }
                }
                arr_171 [i_41] = ((~(arr_163 [i_31] [i_40] [i_40] [i_41])));
            }
            for (int i_44 = 0; i_44 < 16;i_44 += 1)
            {
                var_65 = var_4;
                arr_176 [i_44] [i_40] [i_31] = (((arr_113 [i_40] [i_40]) >> (((arr_113 [i_31] [i_31]) - 60887))));
                var_66 = (min(var_66, (((~(arr_149 [i_44]))))));
                var_67 = ((~(arr_127 [i_31])));
                var_68 = ((!(!var_1)));
            }
            var_69 += (!((((arr_113 [i_31] [i_40]) ? var_16 : var_12))));
        }
    }
    #pragma endscop
}
