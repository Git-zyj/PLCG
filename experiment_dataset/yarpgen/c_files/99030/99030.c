/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_9, 32756)) / var_0)) * -224);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (!var_5)));
        arr_4 [i_0] [i_0] = ((!((!(var_11 * var_7)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_1] = min((((((min(var_0, var_4))) && var_10))), ((min(var_12, var_3))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_14 [1] [i_2] [i_3 + 2] &= (7311 >= 65535);
                arr_15 [i_1] [i_1] [i_1] = 243;

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_15 = (min(var_15, (((!(var_12 && var_1))))));

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_16 ^= var_2;
                        var_17 = (min(var_17, (!var_4)));
                    }
                    var_18 = (!var_8);
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_6] [i_2] [i_6] = (var_1 == (0 + var_8));

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        arr_30 [i_1] [i_2] [i_3 - 1] [i_1] [i_6] = ((!(!var_9)));
                        var_19 ^= -var_1;
                        arr_31 [i_1] [i_2] [i_6] = ((var_3 < (var_4 >= var_12)));
                    }
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        var_20 = (((((-6359 ? var_7 : var_4))) ? var_10 : var_4));
                        var_21 ^= (-9223372036854775807 - 1);
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        var_22 = (!19968);
                        var_23 = (min(var_23, (((var_1 ? var_4 : var_8)))));
                        arr_37 [i_2] [i_6] [i_2] = -0;
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        var_24 = (min(var_24, (((-((var_8 ? 12 : var_10)))))));
                        var_25 = (!var_4);
                        var_26 *= 7404671662562411780;
                    }
                    var_27 = ((var_12 + (~-29579)));

                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        var_28 = (max(var_28, var_9));
                        var_29 = (max(var_29, -11859));
                        arr_42 [i_1] [4] [i_1] [10] [i_1] &= 10;
                    }
                    for (int i_12 = 2; i_12 < 23;i_12 += 1)
                    {
                        var_30 = (var_1 && var_0);
                        var_31 ^= -var_0;
                        arr_46 [i_6] = ((((99 ? 5994521350864639807 : 252)) % (var_1 < var_12)));
                        var_32 = (max(var_32, 10867799072757198580));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_33 -= (250 != var_12);
                        var_34 = (min(var_34, (var_4 ^ var_4)));
                    }
                    var_35 = ((var_12 ? var_5 : var_8));
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    arr_54 [i_1] = 15131;
                    var_36 ^= (var_2 ? 4805793795679238616 : 15131);
                    var_37 = (!var_11);
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                    {
                        arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [12] [i_1] |= var_10;
                        arr_61 [i_15] = ((((2983808718883672979 ? 5994521350864639807 : 251)) - (8589934528 ^ var_7)));
                        arr_62 [i_15] [i_2] [i_2] [i_2] [i_2] = ((3 ? var_8 : 219));
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                    {
                        var_38 ^= (((!4110699109078239460) + 11183927229077538386));
                        var_39 -= ((var_8 / (~var_0)));
                        arr_66 [i_1] [i_15] [i_15] [i_1] = var_0;
                        var_40 = (max(var_40, (((((250 ? var_3 : 8611005591607886396)) >= 0)))));
                    }
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        var_41 = (var_9 >= 89);
                        var_42 -= (((((9223372036854775807 ? var_6 : var_11))) ? 29579 : (var_11 <= var_3)));
                    }
                    var_43 = (min(var_43, -0));
                }
                var_44 ^= -var_2;
            }
            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                arr_71 [i_19] [1] [i_1] = var_7;
                var_45 -= ((!166) ? ((min(var_4, (var_4 - var_1)))) : ((var_9 / (min(var_10, -1020665883562755387)))));
                var_46 = 255;

                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {

                    for (int i_21 = 3; i_21 < 20;i_21 += 1)
                    {
                        var_47 = (max(var_47, ((((-((min(86, var_3)))))))));
                        var_48 = (min(var_48, (((!((max((var_0 > var_11), var_4))))))));
                        arr_78 [i_1] [i_21] [i_21] [i_20] [i_21] = ((!(!var_5)));
                    }
                    var_49 = (min(var_12, (-29579 % 29590)));
                    var_50 -= (max(((min(var_11, 0))), ((var_4 ? ((var_1 ? var_5 : var_12)) : -23923))));
                    arr_79 [i_1] [i_1] [i_19 - 1] [i_20] [i_20] [i_1] = var_4;
                    var_51 = ((~((~((var_9 ? (-32767 - 1) : var_6))))));
                }
                for (int i_22 = 1; i_22 < 21;i_22 += 1)
                {
                    var_52 = (max(var_52, (((max(var_2, 255))))));
                    var_53 -= ((-((-(~var_2)))));
                    var_54 = (max(var_54, ((((((min(-2768712937866969632, var_12)) < (!var_6)))) < (var_11 == -46)))));
                }
                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {

                    /* vectorizable */
                    for (int i_24 = 2; i_24 < 21;i_24 += 1)
                    {
                        var_55 = var_12;
                        var_56 ^= (((var_11 ? 174 : 6070)));
                        var_57 = ((-1 * ((1 ? 13825472415731986161 : var_10))));
                        var_58 ^= (!var_2);
                        var_59 += ((!(var_11 / var_7)));
                    }
                    var_60 = var_9;
                    var_61 ^= ((94 ? 5994521350864639808 : 1));
                }
            }

            /* vectorizable */
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                var_62 = (~var_6);

                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    var_63 = (max(var_63, -var_4));
                    var_64 = (!var_12);
                }
                var_65 -= var_9;
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 24;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 23;i_28 += 1)
                    {
                        {
                            arr_99 [i_28] [i_28] [i_25] [i_28] [8] = (((!var_11) ? 7456781113547988314 : 0));
                            arr_100 [4] [i_27] [i_28] [i_25] [i_28] [5] [1] = (var_8 && var_8);
                            var_66 *= var_3;
                            var_67 = ((!(255 + 94)));
                            var_68 = ((var_4 ? var_7 : (((!(-9223372036854775807 - 1))))));
                        }
                    }
                }
            }
            arr_101 [i_1] = (!236);
            var_69 = (((min(0, -2059304405126409765)) == var_5));
        }
        arr_102 [23] = ((~(var_2 / var_4)));
        var_70 ^= (var_12 ? (min(-1945918239538038208, 1)) : ((((!(!var_0))))));
    }

    for (int i_29 = 2; i_29 < 12;i_29 += 1)
    {
        var_71 = var_9;
        var_72 = (min(var_72, (((!(((max(var_0, var_2)) == (((max(var_8, 239)))))))))));
    }
    for (int i_30 = 1; i_30 < 1;i_30 += 1) /* same iter space */
    {
        arr_107 [i_30] = ((min(var_8, var_12)));
        arr_108 [i_30] = var_3;

        for (int i_31 = 1; i_31 < 18;i_31 += 1)
        {
            arr_111 [i_30 - 1] = ((var_3 & var_4) ? (min(127, -3171758353024314416)) : (~var_7));
            arr_112 [i_30] |= (max((max((var_1 << var_1), (~var_11))), var_10));
        }
        for (int i_32 = 0; i_32 < 20;i_32 += 1)
        {
            var_73 = var_1;
            arr_115 [i_32] = ((-((1152921229728940032 ? ((max(var_10, var_0))) : ((min(-16, var_8)))))));
        }
        arr_116 [16] = (min(var_7, (((var_9 | (!0))))));
    }
    for (int i_33 = 1; i_33 < 1;i_33 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_34 = 1; i_34 < 19;i_34 += 1)
        {
            for (int i_35 = 1; i_35 < 1;i_35 += 1)
            {
                for (int i_36 = 2; i_36 < 16;i_36 += 1)
                {
                    {
                        var_74 &= ((~((255 ? ((max(var_0, var_3))) : (!1125899906580480)))));
                        arr_127 [i_33] [i_33] [i_35 - 1] [i_36] = min(var_1, (!0));
                        var_75 -= ((((var_12 < (-32767 - 1))) ? var_9 : (var_5 ^ var_11)));
                        var_76 = (!var_3);
                    }
                }
            }
        }
        var_77 *= var_1;
    }
    var_78 = var_12;
    #pragma endscop
}
