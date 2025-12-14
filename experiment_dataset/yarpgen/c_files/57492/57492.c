/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_18;
    var_21 = (((((25740994 ? 128 : 11811136089200799992))) ? (min((var_15 + var_16), var_15)) : var_0));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_22 *= ((((((38 >> (3691172849503741698 - 3691172849503741669))))) && (((arr_0 [i_0 + 1]) < (((!(arr_0 [i_0 - 1]))))))));
        arr_2 [i_0] = var_10;

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_23 = (((((var_18 | (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])))) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : ((min((arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 1]), var_19)))));
            var_24 ^= ((((((arr_1 [i_0 - 1] [i_0]) < var_15))) != -18379));
            var_25 |= (-62 / 9021145733113294279);
            var_26 = (max(var_26, var_3));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4 + 2] [i_2] = var_8;
                            var_27 = ((var_9 ? (25740994 < 4015476896) : (((arr_10 [i_0 + 1] [i_0 + 1]) - (arr_10 [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_28 *= (2982793389 && 11811136089200799992);
            var_29 = ((arr_12 [i_0 + 1] [i_5] [i_0 + 1]) - var_1);
            var_30 = var_1;
        }
    }
    var_31 = 235;

    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_32 = ((((((arr_17 [i_6]) ? var_18 : (2147483641 * 0)))) ? (49 * 0) : var_7));

        /* vectorizable */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_33 += -var_0;
            var_34 = (!var_15);
            var_35 = ((287999958 ? ((var_13 ? (arr_19 [11] [i_6]) : var_9)) : var_4));
            var_36 = (arr_19 [i_6] [i_6]);
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                var_37 = var_15;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_38 += ((((min(1312173895, 240))) >= (((arr_31 [i_9] [i_10] [i_10 - 1] [i_10 - 1] [i_11]) ? -1 : (arr_17 [i_9 - 2])))));
                            var_39 = var_11;
                            var_40 = 13;
                            var_41 = (min(var_41, ((max(-13, -60)))));
                        }
                    }
                }
                var_42 = (max(-249208708, (arr_23 [i_6] [i_8] [i_9 - 1])));
                var_43 = (min(var_43, (((((((arr_35 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1]) ? (arr_35 [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 3]) : var_8))) && (((var_0 ? var_4 : (arr_32 [i_9 - 2] [i_9 - 1] [i_9])))))))));
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                var_44 = -65;

                for (int i_13 = 2; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_45 = (max(var_19, ((192 | (arr_41 [i_6] [i_8] [i_12] [i_13 - 2] [i_13 - 2])))));
                    var_46 = (((max((min(14353948091927934382, var_5)), (~var_17))) - (min((min(var_14, var_18)), ((min(var_19, var_0)))))));
                    var_47 = (((2046513715 != 44483) | ((~(arr_40 [i_6] [i_8] [i_12] [i_13 - 1] [i_13 - 2])))));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_6] [17] [i_12] [i_6] [i_12] [i_12] = (var_19 && 87);
                    var_48 = ((((-7943240454186121111 ? var_18 : 252)) << (((arr_18 [i_12] [i_14]) + 5923754179253621972))));
                    var_49 = (!-2294997853045771690);
                    var_50 = ((!(((var_11 ? var_17 : var_9)))));
                    var_51 = (arr_36 [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 2]);
                }
                for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_52 = (-10112 > 6635607984508751611);
                    var_53 |= (~-6912434830504688668);
                    arr_50 [i_8] [i_8] [i_6] [10] [i_8] [i_8] = (arr_41 [15] [15] [15] [i_15 - 2] [i_12]);
                }
            }
            for (int i_16 = 1; i_16 < 24;i_16 += 1)
            {
                var_54 = (((min((!13006), (max(var_18, (arr_39 [12]))))) >= var_14));
                var_55 = (max(((((var_15 >= (arr_29 [3] [i_8] [i_8] [i_16]))))), ((~((0 ? 0 : 272678883688448))))));
            }
            var_56 = (((var_5 >= 5836666089925954213) ? 99 : (-104 != -17788)));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            var_57 |= 72;
                            var_58 = (!var_16);
                        }
                    }
                }
                var_59 ^= var_19;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_60 = var_17;
                            var_61 = -2083;
                            var_62 = (~var_14);
                        }
                    }
                }
                var_63 = (max(var_63, (((~(arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                var_64 = (0 + 10501498345004542490);
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 25;i_23 += 1)
                {
                    var_65 = 255;
                    var_66 = (max(var_66, (((((((arr_42 [i_6] [i_8] [i_22] [i_23] [i_8] [i_6]) != (arr_63 [i_6] [i_8] [i_6] [i_23] [24])))) | ((max((arr_65 [i_6] [i_8] [i_22] [i_23]), var_4))))))));
                }

                for (int i_24 = 0; i_24 < 25;i_24 += 1)
                {
                    var_67 = var_8;
                    var_68 = (-104 == 3085);
                    var_69 ^= var_18;
                }
                /* vectorizable */
                for (int i_25 = 2; i_25 < 24;i_25 += 1)
                {
                    var_70 = var_2;
                    var_71 = (((!2) ? var_6 : 1));
                    var_72 = ((arr_60 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25] [i_25 - 1]) ? 1023 : 4);
                }
                var_73 -= (((((((max(var_12, var_15))) < (-1956418295 + 1)))) + 134));
            }
            for (int i_26 = 0; i_26 < 25;i_26 += 1) /* same iter space */
            {
                var_74 = (!255);
                var_75 ^= var_16;

                /* vectorizable */
                for (int i_27 = 0; i_27 < 25;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 0;i_28 += 1)
                    {
                        var_76 = var_14;
                        var_77 = var_13;
                    }
                    for (int i_29 = 1; i_29 < 22;i_29 += 1)
                    {
                        var_78 = (65527 - 56);
                        var_79 = var_8;
                    }
                    for (int i_30 = 1; i_30 < 24;i_30 += 1)
                    {
                        var_80 = (arr_31 [i_30 + 1] [i_30] [i_30] [i_30] [i_30]);
                        var_81 = (arr_42 [1] [i_8] [i_8] [i_30 + 1] [i_30] [i_27]);
                    }
                    var_82 = (max(var_82, (((63 <= (((arr_84 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_11 : var_15)))))));
                    var_83 = (~var_5);
                    var_84 ^= (arr_21 [i_26]);
                }
                /* vectorizable */
                for (int i_31 = 1; i_31 < 24;i_31 += 1)
                {
                    var_85 = (max(var_85, 31));
                    var_86 = (max(var_86, (27385 || 255)));
                    var_87 = (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]);
                    var_88 = (max(var_88, ((((((7763 ? 38 : -120))) & var_5)))));
                    var_89 = ((-(arr_45 [i_6] [i_8] [i_26] [i_31 - 1])));
                }
                var_90 = ((var_9 ? var_14 : var_7));
            }
            for (int i_32 = 0; i_32 < 25;i_32 += 1) /* same iter space */
            {
                arr_92 [9] [i_8] [i_8] [i_6] = (!18446744073709551615);
                var_91 = (!((min((31 >= var_0), ((var_3 ? var_18 : var_12))))));
            }
        }

        for (int i_33 = 0; i_33 < 25;i_33 += 1)
        {
            var_92 = (57844 - 59);
            var_93 = var_17;
        }
    }
    for (int i_34 = 0; i_34 < 25;i_34 += 1) /* same iter space */
    {
        var_94 = (min((arr_42 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]), (min((arr_38 [i_34] [i_34] [i_34]), var_9))));
        arr_98 [i_34] = (((((var_12 ? var_4 : var_6))) ? (arr_88 [13] [13] [13] [i_34] [13] [i_34]) : var_12));
    }
    for (int i_35 = 0; i_35 < 25;i_35 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_36 = 0; i_36 < 25;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 25;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 25;i_38 += 1)
                {
                    {
                        var_95 -= ((-10365 || (arr_62 [18] [18] [i_37] [i_37] [i_38] [4] [i_38])));
                        var_96 = (min(0, ((((arr_47 [i_35] [i_36] [22] [i_37] [i_37] [i_37]) & 397469994)))));
                    }
                }
            }
        }

        for (int i_39 = 0; i_39 < 25;i_39 += 1)
        {
            /* LoopNest 3 */
            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 25;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 25;i_42 += 1)
                    {
                        {
                            var_97 = var_5;
                            var_98 = var_10;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_43 = 0; i_43 < 25;i_43 += 1)
            {
                for (int i_44 = 3; i_44 < 24;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 25;i_45 += 1)
                    {
                        {
                            var_99 ^= -var_4;
                            var_100 *= (arr_87 [i_35] [i_44] [20] [i_44]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_46 = 1; i_46 < 21;i_46 += 1)
        {
            var_101 ^= (arr_22 [i_46 + 4] [i_46] [0]);
            var_102 += (arr_74 [i_35] [i_46] [i_46] [i_46 + 4]);
            var_103 = var_1;
            arr_130 [i_46] = -var_16;
        }
        /* vectorizable */
        for (int i_47 = 0; i_47 < 25;i_47 += 1)
        {
            var_104 += var_5;
            var_105 = -var_4;
            var_106 = 57562;
            var_107 = (-var_13 ? (!3968) : var_9);
            var_108 ^= var_16;
        }
    }
    /* vectorizable */
    for (int i_48 = 0; i_48 < 25;i_48 += 1) /* same iter space */
    {
        var_109 = (min(var_109, -47));
        var_110 = (arr_69 [i_48] [3] [i_48]);
    }
    #pragma endscop
}
