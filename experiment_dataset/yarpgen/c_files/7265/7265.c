/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (((((max(var_5, ((var_6 ? var_2 : var_10))))) ? (((~(var_3 - var_3)))) : var_0)))));
                        var_14 = ((var_8 ? ((var_9 ? (~var_10) : var_2)) : (((((min(var_3, var_5))) ? var_1 : (var_2 > var_4))))));
                        var_15 = (((((-(var_1 / var_3)))) ? (min(var_11, (var_10 ^ var_9))) : var_4));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_16 = (var_9 ^ var_11);
                            var_17 = (max(var_17, (var_4 > var_4)));
                            arr_19 [i_0] = (!var_7);
                        }
                    }
                }
                arr_20 [i_0] [i_4] [i_5 - 1] [6] |= var_10;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_18 = ((var_6 ? (var_9 % var_11) : var_5));
                            var_19 = var_4;
                            var_20 = ((-var_7 ? (var_4 <= var_7) : var_3));
                            var_21 ^= (var_0 <= var_1);
                        }
                    }
                }

                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    var_22 = (var_2 >= var_4);

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_23 = var_4;
                        var_24 = ((-((var_0 << (((var_9 + 5653) - 22))))));
                        arr_35 [13] [i_0] [i_5] [i_10] [i_11] [13] = var_10;
                    }
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        var_25 = (min(var_25, -var_8));
                        var_26 = var_7;
                    }
                    arr_38 [i_0] [i_0] [i_0 + 1] = (((var_1 >= var_11) ? ((var_2 ? var_2 : var_10)) : (((var_5 ? var_0 : var_8)))));
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_27 = ((((var_0 ? var_2 : var_0)) & (var_11 != var_9)));
                    var_28 = (((~var_10) ? var_3 : var_9));
                }
            }
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                var_29 |= (var_7 | var_10);
                arr_44 [i_0] [i_0] = (((((var_4 ? var_10 : var_0))) ? var_10 : (((var_4 ? var_6 : var_3)))));
                arr_45 [i_0] [i_0] [i_14] [i_14] = ((-var_1 ? var_7 : var_3));
            }
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_53 [i_0] [i_0] = (var_8 & var_2);
                            var_30 = var_11;
                            var_31 = ((-var_3 <= (~var_6)));
                        }
                    }
                }
            }
            var_32 = (min(var_32, (var_3 / var_7)));
            var_33 ^= ((var_7 ? var_2 : -var_2));
            arr_54 [i_0] [i_4] [i_0] = (var_0 ^ var_6);
        }
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    {
                        var_34 = (min(((((var_8 > var_9) ? var_3 : ((max(var_1, var_4)))))), ((var_2 + (((var_4 ? var_1 : var_6)))))));
                        arr_63 [i_0 - 1] [i_0] [i_18] [6] [i_19] [i_20] = (((min(var_9, var_3)) + (((!(!var_3))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {

                for (int i_22 = 1; i_22 < 16;i_22 += 1)
                {

                    for (int i_23 = 1; i_23 < 18;i_23 += 1)
                    {
                        var_35 ^= (var_3 != var_0);
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = (((var_7 & var_3) & (var_1 | var_9)));
                    }
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        arr_77 [i_0] [18] [18] [i_0] [i_22] = var_5;
                        arr_78 [i_0] [i_21] [i_22] [i_24] = (~var_5);
                        arr_79 [i_0] [i_0] [16] [i_21] [11] [i_22] [16] = var_2;
                        var_36 = (~var_8);
                        var_37 = ((var_7 ? var_3 : var_2));
                    }
                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        var_38 = var_7;
                        var_39 = (var_10 ^ -var_2);
                    }
                    arr_83 [i_0] [1] [1] [i_22] [i_0] = var_5;

                    for (int i_26 = 1; i_26 < 16;i_26 += 1)
                    {
                        arr_86 [i_0] [i_0] [i_21] [i_22] [i_21] = (((var_3 && var_3) ? (var_10 > var_9) : var_8));
                        arr_87 [i_0 - 1] [16] [i_0 - 1] [i_0] [i_26] = var_9;
                    }
                    for (int i_27 = 3; i_27 < 15;i_27 += 1)
                    {
                        var_40 = var_9;
                        arr_90 [i_27] [i_21] [i_21] [i_21] [i_0] |= (!var_9);
                        var_41 ^= (~var_3);
                    }
                    arr_91 [i_0] [i_0] [9] [i_0] = (var_10 <= var_8);

                    for (int i_28 = 1; i_28 < 18;i_28 += 1)
                    {
                        var_42 = ((-(var_7 + var_10)));
                        var_43 = var_4;
                        var_44 = (max(var_44, (~var_7)));
                        var_45 = (((var_0 - var_0) * (!var_4)));
                        arr_94 [i_0] [7] [i_21] [8] [i_0] = -var_6;
                    }
                }
                for (int i_29 = 0; i_29 < 19;i_29 += 1)
                {
                    var_46 ^= (~var_6);
                    var_47 = (max(var_47, (var_8 <= var_8)));
                    arr_98 [i_29] [i_21] [i_0 + 1] [i_29] |= ((~((var_0 ? var_6 : var_0))));
                    arr_99 [i_29] [i_18] [i_21] [i_18] [i_0] |= var_0;
                }
                /* LoopNest 2 */
                for (int i_30 = 2; i_30 < 18;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 19;i_31 += 1)
                    {
                        {
                            var_48 = (var_6 < var_6);
                            var_49 = var_2;
                            arr_105 [i_0] [i_21] [i_0] [i_31] = (var_2 % var_6);
                            var_50 |= var_2;
                        }
                    }
                }
                var_51 = (max(var_51, (((var_11 >> (var_3 - 791173370))))));

                for (int i_32 = 0; i_32 < 19;i_32 += 1)
                {

                    for (int i_33 = 3; i_33 < 18;i_33 += 1)
                    {
                        arr_113 [i_0] [i_18] [i_18] [i_0] [i_0] = (((var_5 ? var_6 : var_8)));
                        arr_114 [i_0] [i_0] [i_21] [i_32] [i_33] = (var_10 >= var_7);
                        var_52 = var_9;
                        var_53 = (max(var_53, var_3));
                    }
                    for (int i_34 = 1; i_34 < 17;i_34 += 1)
                    {
                        var_54 = (max(var_54, (var_0 - -var_7)));
                        var_55 ^= ((((var_3 ? var_11 : var_7)) < var_10));
                        var_56 = var_7;
                    }
                    for (int i_35 = 0; i_35 < 19;i_35 += 1)
                    {
                        arr_121 [i_0] [i_18] [i_0] [i_32] [2] = var_4;
                        var_57 ^= ((var_3 - var_0) ? (var_5 - var_5) : var_7);
                        arr_122 [i_0 - 1] [i_0] [i_0] = var_8;
                        var_58 = (min(var_58, (!var_10)));
                    }
                    arr_123 [i_18] |= -var_6;
                    var_59 = ((~(var_10 != var_3)));
                }
                for (int i_36 = 0; i_36 < 0;i_36 += 1)
                {

                    for (int i_37 = 0; i_37 < 19;i_37 += 1) /* same iter space */
                    {
                        var_60 = var_2;
                        arr_131 [4] [i_18] [i_0] [i_36] [i_37] = var_8;
                    }
                    for (int i_38 = 0; i_38 < 19;i_38 += 1) /* same iter space */
                    {
                        arr_134 [i_0] = (((var_9 | var_0) && var_2));
                        var_61 ^= ((var_11 != (var_1 | var_2)));
                    }

                    for (int i_39 = 0; i_39 < 19;i_39 += 1)
                    {
                        arr_137 [5] [i_18] [i_21] [i_21] [i_0] [i_39] [i_39] = (!var_0);
                        var_62 = var_9;
                        arr_138 [i_0] [i_0] [i_0] [0] [i_39] = (~-var_3);
                    }
                    arr_139 [i_21] [i_21] |= (((var_1 * var_4) ? var_4 : ((var_2 ? var_4 : var_7))));
                    arr_140 [i_0] [i_36] = ((var_2 ? var_6 : var_5));
                    var_63 ^= (~var_4);
                }
                for (int i_40 = 1; i_40 < 1;i_40 += 1)
                {
                    arr_144 [i_0] [i_0] [i_0] [14] [14] [i_0] = (~var_6);

                    for (int i_41 = 0; i_41 < 19;i_41 += 1)
                    {
                        var_64 = var_2;
                        arr_147 [i_41] [i_41] [i_0] = var_3;
                    }
                    for (int i_42 = 4; i_42 < 15;i_42 += 1)
                    {
                        arr_151 [i_0] [2] [i_18] [i_21] [7] [i_42 + 4] [i_42] = var_7;
                        var_65 = var_3;
                    }
                    arr_152 [i_40] [i_0] [i_0] [i_0] = var_5;
                    var_66 ^= ((var_3 ? var_7 : var_10));
                    var_67 ^= (var_7 & var_6);
                }
                for (int i_43 = 0; i_43 < 19;i_43 += 1)
                {
                    arr_155 [2] [i_18] [i_0] [i_43] = ((((var_11 >> (var_3 - 791173426))) ^ var_8));

                    for (int i_44 = 2; i_44 < 18;i_44 += 1) /* same iter space */
                    {
                        arr_159 [i_0] [i_0] [i_21] [i_43] [i_44] = (var_6 || var_2);
                        var_68 ^= (var_4 >= var_10);
                        var_69 = var_3;
                    }
                    for (int i_45 = 2; i_45 < 18;i_45 += 1) /* same iter space */
                    {
                        var_70 = (min(var_70, (((var_8 ? (var_9 ^ var_10) : var_1)))));
                        var_71 = ((var_8 ? var_0 : (var_11 >> var_4)));
                        var_72 = var_8;
                        var_73 = (max(var_73, (var_10 != var_2)));
                        var_74 = var_5;
                    }
                    for (int i_46 = 0; i_46 < 19;i_46 += 1)
                    {
                        var_75 = (max(var_75, (((((var_11 ? var_5 : var_5)) & (var_6 >= var_3))))));
                        var_76 = (!var_1);
                    }

                    for (int i_47 = 2; i_47 < 17;i_47 += 1)
                    {
                        var_77 = (((!var_3) ^ var_2));
                        var_78 = var_9;
                        var_79 = var_4;
                    }
                    for (int i_48 = 0; i_48 < 19;i_48 += 1)
                    {
                        var_80 = (((var_3 & var_2) ? (~var_10) : (~var_0)));
                        var_81 = (var_7 > var_5);
                    }
                }
                var_82 = var_5;
            }
        }

        for (int i_49 = 2; i_49 < 18;i_49 += 1) /* same iter space */
        {
            arr_174 [i_0] = ((var_3 * ((((((var_9 ? var_11 : var_4))) >= (min(var_2, var_9)))))));
            var_83 = (max(var_83, var_10));
        }
        for (int i_50 = 2; i_50 < 18;i_50 += 1) /* same iter space */
        {
            var_84 = var_9;
            /* LoopNest 3 */
            for (int i_51 = 0; i_51 < 19;i_51 += 1)
            {
                for (int i_52 = 2; i_52 < 15;i_52 += 1)
                {
                    for (int i_53 = 2; i_53 < 18;i_53 += 1)
                    {
                        {
                            arr_186 [7] [i_0] [5] [7] [i_53 + 1] = min(var_5, (min(-var_11, ((min(var_1, var_7))))));
                            var_85 ^= (((var_1 + 2147483647) >> (-var_6 < var_1)));
                        }
                    }
                }
            }
            var_86 = ((((min((var_8 - var_4), var_5))) ? (((((min(var_9, var_9)))) - var_11)) : var_8));
        }
        var_87 ^= (min((min((min(var_9, var_9)), var_9)), (min((var_10 < var_10), var_7))));
    }
    var_88 |= var_6;
    #pragma endscop
}
