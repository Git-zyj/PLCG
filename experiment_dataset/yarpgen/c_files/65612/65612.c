/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 = var_5;
        var_21 = var_9;
        var_22 = 3014427756;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((~22524) <= ((var_4 ? var_17 : var_15))));
        arr_7 [i_1] = -var_12;
        var_23 = var_2;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] = var_16;
            arr_13 [i_1] [i_1] [i_1] = 255;
            arr_14 [i_1] [i_1] [i_1] = (var_10 ^ 69);
            arr_15 [i_2] &= 2991754908;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_24 = (((-99 ? 42284 : var_0)));

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_23 [i_4] = (arr_21 [i_1] [i_1] [i_3] [i_4]);
                var_25 = (arr_20 [11] [11]);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_26 = (max(var_26, 16));
                arr_26 [i_1] [i_3] |= var_8;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 += var_7;

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_28 = (221 - -513005970586358585);
                        var_29 = 4294967295;
                        var_30 = (~240);
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_38 [i_1] [6] = (((((-(-32767 - 1)))) ? (arr_9 [i_1]) : (~47)));
                        var_31 = var_5;
                    }
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        var_32 = var_4;
                        arr_41 [i_10 + 1] [i_10] [i_10 - 2] [i_10] [i_10 + 1] [i_10] [2] = ((var_6 ? (((109 ? (arr_31 [i_1] [3] [i_6] [i_7]) : var_9))) : ((8826 ? var_2 : var_11))));
                    }
                    var_33 -= ((var_11 ? 109 : 2147483647));
                    var_34 = var_5;
                    var_35 *= var_5;
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_45 [i_3] [i_6] [i_3] [i_1] = (arr_29 [i_11] [i_6] [i_3] [i_1]);
                    var_36 = (((3 & 4294967279) ? (((1314121188 ? 68 : 128))) : 1548777636));

                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_37 = var_9;
                        var_38 = (min(var_38, (((-((18301 ? var_0 : 7102669750197061363)))))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_39 = (arr_19 [i_1] [i_3]);
                        arr_51 [i_1] [i_1] [i_1] [i_1] = var_6;
                        var_40 = ((var_8 ? -4372021900689335310 : (((~(arr_19 [i_11] [i_13]))))));
                        var_41 ^= var_14;
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_42 = (((arr_34 [i_1] [i_1] [9] [i_1] [i_1] [i_1] [i_1]) ? 8843 : (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_43 = (arr_29 [i_1] [i_3] [i_6] [2]);
                    }
                }
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_44 = 513005970586358585;
                    var_45 = ((~(~var_3)));
                    var_46 = ((1 ? (513005970586358585 > var_0) : (((-2147483647 - 1) ? var_14 : var_0))));
                    var_47 -= var_6;
                }
                var_48 = (max(var_48, var_0));
                var_49 = (max(var_49, 6671));
            }
            var_50 = (-2147483647 - 1);
            var_51 = (min(var_51, ((((arr_10 [i_3] [i_1] [5]) | var_18)))));
        }
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            arr_63 [i_17 + 1] [i_17] = 158;

            for (int i_18 = 1; i_18 < 10;i_18 += 1)
            {
                var_52 = var_10;
                var_53 = -6308;
            }
        }
        for (int i_19 = 3; i_19 < 11;i_19 += 1)
        {

            for (int i_20 = 2; i_20 < 11;i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            var_54 *= ((158 ? 6816633436492661782 : (54 <= var_8)));
                            var_55 = 9223372036854775807;
                        }
                    }
                }
                var_56 = (max(var_56, (((-513005970586358585 ? var_12 : var_0)))));
                var_57 = ((-(arr_10 [i_19 + 1] [i_19 - 2] [1])));
                arr_79 [i_1] [i_19] [i_20] = (arr_5 [i_1] [i_19 - 2]);
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 12;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_58 = ((-((91 ? var_3 : var_14))));
                            var_59 |= var_15;
                            arr_84 [i_1] [i_19] [i_20] [6] [i_24] &= -8589;
                            var_60 = ((var_13 && (arr_53 [i_24] [i_19])));
                        }
                    }
                }
            }
            for (int i_25 = 2; i_25 < 11;i_25 += 1) /* same iter space */
            {
                var_61 -= var_0;
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 12;i_26 += 1)
                {
                    for (int i_27 = 3; i_27 < 10;i_27 += 1)
                    {
                        {
                            var_62 = ((-((61814 ? var_15 : var_16))));
                            var_63 = var_19;
                        }
                    }
                }
            }
            var_64 = -var_0;
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 12;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 12;i_29 += 1)
                {
                    {
                        var_65 ^= ((-(~var_2)));
                        arr_99 [i_19 - 1] [i_19 - 1] [11] [i_19 - 3] = (var_7 && 933013689);
                        arr_100 [i_1] [i_1] [i_1] [i_1] = 14030331144836033280;
                        var_66 = (6308 ? var_12 : (arr_89 [i_1] [3] [i_28]));
                        var_67 = (arr_30 [i_19 - 3] [i_19 + 1]);
                    }
                }
            }
            var_68 = ((var_12 ? var_0 : var_12));

            for (int i_30 = 0; i_30 < 12;i_30 += 1)
            {
                var_69 = (max(var_69, (~66)));

                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {

                    for (int i_32 = 4; i_32 < 11;i_32 += 1)
                    {
                        var_70 = var_0;
                        var_71 = (min(var_71, (var_10 <= var_18)));
                    }

                    for (int i_33 = 0; i_33 < 12;i_33 += 1)
                    {
                        var_72 = (74 == 78);
                        var_73 = (min(var_73, -var_12));
                    }
                }
                for (int i_34 = 0; i_34 < 12;i_34 += 1) /* same iter space */
                {
                    arr_115 [i_1] [i_19 - 1] [i_19] [i_34] [1] = (var_9 ? 1 : 3918210335);
                    var_74 = 2758242149;
                    var_75 = ((0 == 4611686018427387904) ? 0 : 253);
                }
                for (int i_35 = 0; i_35 < 12;i_35 += 1) /* same iter space */
                {
                    var_76 -= var_16;
                    var_77 = var_11;
                }
            }
            for (int i_36 = 0; i_36 < 12;i_36 += 1) /* same iter space */
            {
                arr_120 [i_36] [i_19] [i_1] = -59772;
                arr_121 [i_36] [i_19 - 1] [i_36] [i_1] = var_19;
                /* LoopNest 2 */
                for (int i_37 = 2; i_37 < 11;i_37 += 1)
                {
                    for (int i_38 = 2; i_38 < 9;i_38 += 1)
                    {
                        {
                            arr_127 [i_38 + 2] [i_37] [3] [i_19 + 1] [i_1] = var_18;
                            var_78 = var_11;
                            arr_128 [i_1] = (31 ? (arr_44 [i_1] [i_19 + 1] [i_1] [i_19 + 1]) : (44554 % var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 1;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 12;i_40 += 1)
                    {
                        {
                            var_79 = (min(var_79, -8588));
                            var_80 = (max(var_80, (4106799165 | 230)));
                            var_81 = ((-122 <= (arr_67 [i_19 - 2] [i_19])));
                            var_82 = var_19;
                        }
                    }
                }
                arr_134 [i_1] [7] [i_36] [10] = var_14;
            }
            for (int i_41 = 0; i_41 < 12;i_41 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 1;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 12;i_43 += 1)
                    {
                        {
                            arr_144 [i_1] [i_19] [i_41] [i_42] [i_43] = var_4;
                            var_83 = ((~(arr_11 [i_1] [i_19 - 2])));
                        }
                    }
                }
                var_84 &= (((arr_137 [i_19 - 2] [i_19 + 1] [i_19 - 1] [i_19 - 2]) ? var_13 : (~var_3)));
                arr_145 [i_1] [i_19] = 7;
            }
        }
    }
    /* vectorizable */
    for (int i_44 = 0; i_44 < 12;i_44 += 1) /* same iter space */
    {
        var_85 *= var_4;

        for (int i_45 = 0; i_45 < 12;i_45 += 1)
        {
            arr_150 [i_44] [i_44] = -var_19;
            /* LoopNest 2 */
            for (int i_46 = 0; i_46 < 12;i_46 += 1)
            {
                for (int i_47 = 0; i_47 < 12;i_47 += 1)
                {
                    {
                        var_86 = (min(var_86, (((((var_14 ? (arr_49 [0]) : 38)) * var_18)))));
                        arr_157 [i_47] [9] [i_47] [i_47] = 136365211648;
                    }
                }
            }
        }
        for (int i_48 = 0; i_48 < 12;i_48 += 1)
        {
            /* LoopNest 2 */
            for (int i_49 = 1; i_49 < 11;i_49 += 1)
            {
                for (int i_50 = 0; i_50 < 12;i_50 += 1)
                {
                    {
                        arr_166 [i_44] [7] [8] [i_48] &= 16;
                        var_87 += (((~var_6) ? (82 / var_5) : ((var_14 ? 40 : 63))));
                        var_88 = var_6;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_51 = 1; i_51 < 10;i_51 += 1)
            {
                for (int i_52 = 0; i_52 < 12;i_52 += 1)
                {
                    {
                        var_89 = (min(var_89, 176));
                        arr_172 [i_52] [i_51 - 1] [i_44] = -109;
                    }
                }
            }
        }
        for (int i_53 = 0; i_53 < 12;i_53 += 1)
        {
            arr_175 [i_44] [1] = ((var_7 ? (arr_67 [i_44] [i_44]) : var_14));
            var_90 = -var_7;
        }
    }
    for (int i_54 = 0; i_54 < 12;i_54 += 1) /* same iter space */
    {
        var_91 |= (min(8590, (((var_13 ? (arr_177 [i_54]) : 96)))));
        /* LoopNest 3 */
        for (int i_55 = 0; i_55 < 12;i_55 += 1)
        {
            for (int i_56 = 0; i_56 < 12;i_56 += 1)
            {
                for (int i_57 = 0; i_57 < 12;i_57 += 1)
                {
                    {
                        var_92 = 1;
                        arr_185 [i_54] [i_56] [i_56] [i_57] [i_55] = ((-513005970586358585 ^ (max(-var_0, ((max(var_9, (arr_103 [i_54] [i_55] [1] [i_57]))))))));
                        var_93 = (max(var_93, (((((var_7 * var_14) / (var_5 * 201)))))));
                        var_94 = ((((((var_11 ? (arr_42 [i_54] [i_55] [i_56] [i_57]) : var_3)) << (((max(32119, 1002001297)) - 1002001293)))) >> (((var_1 ^ var_17) - 731929413))));
                    }
                }
            }
        }
    }
    var_95 &= min(((-(max(var_4, 8591)))), (((var_14 ? -70 : -var_7))));
    #pragma endscop
}
