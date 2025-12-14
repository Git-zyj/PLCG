/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = var_9;
            var_12 = var_5;
        }
        var_13 -= ((((((((var_9 ? var_4 : var_3))) - 989457872))) ? var_2 : var_4));
        arr_4 [i_0] = (3891 ^ -1);

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_14 = (var_1 < 34);
                            arr_16 [i_2] [i_0] = ((min(((-9223372036854775807 - 1), (((var_9 ? var_6 : 3305509446)))))));
                        }
                        var_15 -= 98;
                        var_16 -= ((-var_0 < (((((var_9 ? var_0 : var_6)))))));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, ((min((((var_3 ? var_5 : var_6))), var_8)))));
                            var_18 = var_5;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_19 = (min((!var_6), 989457878));
                            var_20 -= (((((var_4 == (~-161553237)))) >= (((~var_2) ? (var_5 || var_7) : var_6))));
                            var_21 |= ((((~var_10) < var_0)));
                            var_22 = (max(var_3, (((var_8 != var_0) ? ((var_0 ? -113 : var_10)) : -var_10))));
                        }
                    }
                }
            }
            var_23 -= var_3;

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {

                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        arr_30 [i_0] [i_2] [8] [i_9] [i_0] = -99;
                        var_24 = (max(var_24, (var_9 < -1)));
                        arr_31 [i_0] [i_0] [8] [i_0] [i_0] = -24769;
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_25 = ((var_7 ? (113 / 3471437373) : var_0));
                        var_26 = var_4;
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_37 [i_0] [i_0] [1] [i_0] [10] = var_6;
                        var_27 = var_4;
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_28 = (max(var_28, ((35 ? (var_6 || var_7) : var_0))));
                        var_29 = (max(var_29, (!var_1)));
                        var_30 -= ((-(var_1 % var_3)));
                    }
                    var_31 = (var_1 < -var_3);
                    var_32 = (var_10 / var_9);
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    arr_42 [1] [i_0] [6] [i_14] = ((1672267203 ? 823529922 : 991459046722159544));
                    arr_43 [i_0] [i_2 - 1] [7] [i_0] = var_10;
                    var_33 = var_10;
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    arr_47 [i_0] [6] [6] [i_15] = (((!var_0) ? var_8 : ((var_2 ? var_6 : var_10))));
                    var_34 = (var_2 ? 480123625 : var_0);

                    for (int i_16 = 3; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        arr_51 [i_0] [i_2] [i_2] [i_0] [i_16] = -99;
                        arr_52 [8] [i_0] [8] [i_15] [8] = ((~(var_0 < var_4)));
                    }
                    for (int i_17 = 3; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        var_35 = ((var_9 || -15380) || (!var_1));
                        var_36 = (min(var_36, var_6));
                        var_37 = (max(var_37, ((((var_4 || var_4) || (var_8 && var_1))))));
                    }
                    arr_56 [i_0] = ((-2098394315308736289 - (-9223372036854775807 - 1)));

                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        var_38 |= var_7;
                        var_39 = (max(var_39, var_10));
                        arr_61 [i_0] = var_3;
                        var_40 = (var_8 == var_5);
                        var_41 -= var_6;
                    }
                }
                for (int i_19 = 3; i_19 < 9;i_19 += 1)
                {
                    var_42 = var_7;
                    var_43 = var_10;
                }
                var_44 = (var_4 >= var_10);
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 7;i_21 += 1)
                {
                    {
                        arr_70 [i_0] [i_20] [i_0] = ((~(max(var_3, var_4))));
                        var_45 = var_6;
                        var_46 = ((((!var_2) || var_0)) ? (max((!var_5), var_0)) : (!-640232094));
                    }
                }
            }
        }
    }

    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        var_47 = (~var_6);
        var_48 |= ((~((var_4 ? var_0 : var_5))));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                {
                    var_49 += var_10;
                    arr_79 [i_22] [i_23] [i_23] [i_22] = (!var_8);
                }
            }
        }
    }

    for (int i_25 = 0; i_25 < 20;i_25 += 1)
    {
        arr_83 [1] |= var_2;
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 20;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                {
                    arr_90 [i_25] [i_25] [i_25] [i_25] = (var_10 < var_0);
                    arr_91 [i_25] [i_26] [i_25] [i_27] = (-var_8 == var_10);
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 20;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 20;i_29 += 1)
                        {
                            {
                                var_50 = (!(!var_2));
                                var_51 = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 20;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 20;i_31 += 1)
                        {
                            {
                                var_52 = (((((min(var_9, var_3))) ? var_6 : (min(var_10, var_7)))));
                                arr_104 [i_25] [i_26] [i_25] [i_27] [i_30] [1] [5] = min(var_3, var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_32 = 0; i_32 < 18;i_32 += 1) /* same iter space */
    {
        var_53 = var_1;
        /* LoopNest 2 */
        for (int i_33 = 3; i_33 < 15;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 18;i_34 += 1)
            {
                {
                    var_54 = (min(((var_5 | (min(var_4, (-9223372036854775807 - 1))))), var_2));
                    arr_115 [i_32] [i_32] [16] [17] = ((+((min((var_2 > var_6), var_2)))));
                    var_55 = ((!(((var_1 ? 1172141796 : var_8)))));

                    for (int i_35 = 1; i_35 < 17;i_35 += 1)
                    {
                        var_56 ^= 531118313645343483;
                        var_57 = var_8;

                        for (int i_36 = 0; i_36 < 18;i_36 += 1)
                        {
                            arr_120 [i_32] [11] [i_34] [i_35] = (~3471437370);
                            arr_121 [14] [14] [i_34] [i_32] [i_36] = min((min(var_2, (min(var_1, var_0)))), var_5);
                            var_58 = (((((((var_9 ? var_3 : var_9))) ? (!var_8) : (var_0 && var_9))) >= (~var_1)));
                        }
                        /* vectorizable */
                        for (int i_37 = 0; i_37 < 18;i_37 += 1)
                        {
                            var_59 = ((var_0 ? (-9223372036854775807 - 1) : 208));
                            var_60 |= (var_8 ? var_2 : var_7);
                            var_61 = var_9;
                            arr_124 [i_32] = ((0 || (!var_8)));
                        }
                        for (int i_38 = 0; i_38 < 18;i_38 += 1)
                        {
                            var_62 = (1870783342 >= 127);
                            arr_127 [i_32] [i_32] [i_34] [i_32] [i_32] = (((var_0 >= -27) - (((~var_6) & 4294967295))));
                            arr_128 [i_32] [i_32] [5] [i_35 - 1] = (min(((min(var_2, var_3))), (max(var_7, var_0))));
                        }
                        /* vectorizable */
                        for (int i_39 = 0; i_39 < 18;i_39 += 1)
                        {
                            var_63 = ((var_3 | ((var_6 ? var_3 : var_1))));
                            var_64 = (-33546240 ? -9142828787442282049 : (var_1 ^ 6141646438943093973));
                            arr_131 [i_32] [i_33 - 3] [i_34] [1] [i_32] = (var_1 / var_0);
                            var_65 = 1752055603;
                            var_66 = ((var_10 >= ((-2575301837401146727 ? var_10 : var_9))));
                        }
                        var_67 -= var_7;
                        arr_132 [i_32] [i_32] [11] [i_32] [i_32] [i_32] = ((var_1 == (max(((var_1 ? var_10 : var_1)), (min(var_10, var_0))))));
                    }
                    for (int i_40 = 0; i_40 < 18;i_40 += 1)
                    {
                        var_68 = (~var_8);
                        arr_135 [14] [14] [i_32] [i_40] = var_10;
                    }
                }
            }
        }
    }
    for (int i_41 = 0; i_41 < 18;i_41 += 1) /* same iter space */
    {
        arr_138 [i_41] = (~78);
        var_69 = var_3;
        var_70 &= ((((86 ? 15388 : var_1))) ? 224 : 3305509418);
    }
    #pragma endscop
}
