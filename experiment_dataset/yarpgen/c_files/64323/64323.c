/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 38;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, var_7));
        arr_2 [i_0] = var_9;
        var_19 -= -39;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [8] = 695906184723528768;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] &= var_11;
            var_20 &= 4294967295;
            var_21 = (max(var_21, var_11));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_22 = var_7;
            var_23 = 0;
            arr_13 [11] [12] = ((var_12 / (127 - var_15)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_24 = (max(var_24, var_1));
            var_25 -= 0;
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_26 = 1445420288;
        arr_19 [i_5] = -116;

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_27 = (max(var_27, var_4));

            /* vectorizable */
            for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_28 = var_0;
                var_29 *= (-36 < 65535);

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_26 [i_5] [i_5] [8] [8] [10] = var_0;
                    var_30 = (min(var_30, var_10));
                }
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_32 [i_5] [i_6] [i_6] [i_10] [i_10] = -661688857;

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_31 = var_10;
                        var_32 *= var_12;
                    }
                    var_33 += (4294967287 - var_10);
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {

                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        var_34 = var_10;
                        var_35 ^= -38;
                    }
                    arr_41 [5] [3] = var_16;
                    arr_42 [11] [i_9] [i_6] [i_6] [i_5] = (!-39);
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_36 = 7070;

                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        var_37 = var_9;
                        arr_49 [i_5] [i_6] [10] [i_5] [i_6] [0] = -13946;
                    }
                    for (int i_16 = 3; i_16 < 20;i_16 += 1)
                    {
                        arr_52 [i_5] [i_16] = var_9;
                        var_38 = (157 > -695906184723528769);
                        var_39 = 2005052786903115211;
                    }
                    for (int i_17 = 1; i_17 < 21;i_17 += 1)
                    {
                        var_40 = (min(var_40, -4328676331275021164));
                        arr_55 [8] [i_17] [18] [i_6] [i_6] [5] [i_5] = var_0;
                        arr_56 [i_17] [i_14] [12] [i_6] [10] = 51567;
                    }
                    arr_57 [i_5] [14] [i_5] [i_5] = var_16;
                    arr_58 [i_5] [i_6] [6] [20] [i_6] [i_14] = var_12;
                }
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    arr_63 [i_5] [i_5] [19] [i_5] = var_13;
                    var_41 = (-1 & -12002);
                }
                var_42 |= var_2;
                arr_64 [i_5] [15] [i_9 - 1] [12] = 2602548954;
                arr_65 [i_5] [i_6] [i_5] = 13976;
            }
            for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
            {
                var_43 = (175606011631483454 < 4294967287);
                arr_70 [i_5] [21] [3] = (27260 & 536805376);
            }
            /* vectorizable */
            for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
            {
                var_44 = (min(var_44, 10));
                var_45 = var_7;

                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    arr_76 [i_5] [i_5] [i_20 + 1] [i_21] = var_4;

                    for (int i_22 = 2; i_22 < 18;i_22 += 1) /* same iter space */
                    {
                        arr_80 [16] [2] [i_20] [1] [i_22 - 1] [16] = 4193792;
                        var_46 = (min(var_46, var_9));
                        var_47 = 0;
                        arr_81 [i_20] [i_21] [i_22] = var_15;
                    }
                    for (int i_23 = 2; i_23 < 18;i_23 += 1) /* same iter space */
                    {
                        var_48 = (min(var_48, var_8));
                        arr_84 [12] [11] [i_20 + 1] [i_21] [11] = var_2;
                    }
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        var_49 = 0;
                        var_50 = 28593;
                        arr_87 [i_5] [i_5] [i_5] [3] [i_5] [i_5] [i_5] = var_2;
                    }
                    for (int i_25 = 2; i_25 < 20;i_25 += 1)
                    {
                        var_51 = var_0;
                        var_52 *= var_13;
                        var_53 ^= 9;
                        var_54 = (min(var_54, var_9));
                        arr_90 [5] [2] [i_20] [i_5] [i_5] = (!-5);
                    }
                }
                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    arr_93 [i_5] [13] [i_20 - 1] [i_20] [i_20 + 1] [i_26] = var_8;
                    arr_94 [i_5] [i_5] = var_1;
                    var_55 *= (var_6 < var_12);
                    var_56 = (max(var_56, ((((var_11 != 3638970717) >= (var_11 / var_3))))));
                }
                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    arr_99 [2] [2] [0] [i_27] = (536805370 % var_9);
                    var_57 = var_6;
                    arr_100 [i_27] [i_6] [15] = 9;
                    arr_101 [15] = var_12;
                    var_58 = (max(var_58, -27254));
                }
                for (int i_28 = 1; i_28 < 19;i_28 += 1)
                {
                    var_59 = (min(var_59, 20436));
                    arr_104 [i_28] [i_5] [2] [i_5] = var_15;
                }
            }
        }
        /* vectorizable */
        for (int i_29 = 0; i_29 < 22;i_29 += 1)
        {
            arr_109 [i_5] [0] = var_3;

            for (int i_30 = 2; i_30 < 20;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 22;i_31 += 1)
                {
                    var_60 -= 50852;
                    var_61 = (-6829320342170773402 & var_4);
                }
                for (int i_32 = 1; i_32 < 19;i_32 += 1)
                {
                    var_62 = 14789235597966851815;
                    var_63 = -2147483641;
                    arr_118 [9] [i_32] = (!var_15);
                }
                for (int i_33 = 2; i_33 < 21;i_33 += 1)
                {
                    var_64 = (max(var_64, (!var_10)));
                    var_65 += var_15;
                    var_66 = (max(var_66, ((((65535 >= var_15) > 8)))));
                    var_67 = 46466;
                    var_68 -= (!6741593490166537840);
                }

                for (int i_34 = 3; i_34 < 21;i_34 += 1)
                {
                    var_69 -= (var_13 && var_16);
                    var_70 = (min(var_70, 68685922304));
                }

                for (int i_35 = 3; i_35 < 20;i_35 += 1)
                {

                    for (int i_36 = 2; i_36 < 19;i_36 += 1)
                    {
                        var_71 = 1;
                        arr_131 [i_5] [19] [19] [i_35] = 82;
                    }
                    var_72 = (min(var_72, ((((var_8 && var_7) > 0)))));
                    var_73 = (-88 / 34235);
                    var_74 ^= 20436;
                    arr_132 [i_29] [i_29] [20] [1] = 65535;
                }
                for (int i_37 = 0; i_37 < 22;i_37 += 1)
                {
                    var_75 = var_4;
                    var_76 -= var_7;
                    var_77 = (~18);
                    var_78 = (-var_14 + var_16);
                }
                for (int i_38 = 1; i_38 < 19;i_38 += 1)
                {
                    var_79 = 45099;
                    var_80 = -2110356194;
                    var_81 = var_13;
                }
            }
            var_82 = var_3;
        }
        var_83 += var_8;
    }
    var_84 = var_1;

    for (int i_39 = 0; i_39 < 17;i_39 += 1)
    {
        var_85 = var_2;
        /* LoopNest 2 */
        for (int i_40 = 1; i_40 < 14;i_40 += 1)
        {
            for (int i_41 = 2; i_41 < 14;i_41 += 1)
            {
                {
                    var_86 += (34363 >= 15);
                    var_87 -= (!2147483640);
                    var_88 = (max(var_88, 2147483638));
                    /* LoopNest 2 */
                    for (int i_42 = 3; i_42 < 14;i_42 += 1)
                    {
                        for (int i_43 = 1; i_43 < 14;i_43 += 1)
                        {
                            {
                                var_89 = (max(var_89, var_1));
                                var_90 = (-12 >= -25816);
                                var_91 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_44 = 0; i_44 < 20;i_44 += 1)
    {
        var_92 ^= 783432444;
        var_93 -= -483527960780867878;
        arr_151 [i_44] [i_44] = 3396335771137415601;
    }
    #pragma endscop
}
