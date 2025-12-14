/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = (-16956 * -16962);
            arr_5 [i_0] = var_6;
        }
        var_11 -= var_5;
        arr_6 [i_0] = (((((min(var_0, var_2)))) ? (max(var_6, var_5)) : ((max(((-16962 ? 18 : -1828)), (var_2 && var_3))))));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                arr_11 [1] [i_0] [i_0] [i_0] = (var_0 == var_0);

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        arr_16 [i_5 + 3] [i_0] [i_2] = (((var_3 % var_4) ? (var_10 < var_0) : ((13095 ? -16949 : -16950))));
                        var_12 = ((65 ? -20107 : 4161536));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_20 [i_0] [i_4] [6] [i_0] = (min(var_7, (max(var_7, -var_8))));
                        var_13 += var_4;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_23 [i_7] [i_7] [i_7] [i_0] [i_7] [10] = (min((((var_0 ? (!var_2) : ((max(var_1, var_1)))))), (min(var_6, (((var_9 ? var_3 : var_1)))))));
                        arr_24 [i_0] [i_2] [i_2] [i_0] [i_4] [10] = (((((!var_5) ? ((var_7 ? var_4 : var_8)) : (((max(var_7, var_0))))))) ? var_4 : ((((max(-16949, 31))) ? var_8 : (var_1 & var_9))));
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_14 ^= ((71 ? var_2 : (((1827 ? var_3 : (min(-16950, -794756741)))))));
                        arr_27 [i_0] = (max((((!(var_10 + var_7)))), (((var_0 ? var_2 : var_10)))));
                        arr_28 [i_0] [0] [0] [11] [i_8] [i_8] [i_8] = (var_1 * -16981);
                    }
                    var_15 = (max(var_15, (((~((min(var_1, var_8))))))));
                }
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_16 += var_1;

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_17 &= (max(((var_2 ? var_10 : var_5)), var_4));
                    var_18 = (-var_1 ^ -var_1);
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        var_19 -= (((((var_5 >> (var_6 - 6310)))) ? (var_8 == var_3) : (var_2 <= var_6)));
                        arr_39 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] [i_11] [i_12] = (!var_3);
                        arr_40 [i_0] [i_2] [i_2] [i_0] [i_11] [i_12] [i_0] = ((((var_4 ? var_5 : var_5)) != (16981 + -16971)));
                        arr_41 [i_0] = var_3;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_45 [i_13] [i_0] [6] [i_9] [i_9] [i_0] [i_0] = (var_5 | var_1);
                        arr_46 [12] [i_9] [i_0] [i_11] [i_13] |= ((var_3 < (~var_6)));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_20 = (max(var_20, ((min((var_9 / var_5), var_1)))));
                        arr_50 [i_0] [i_2] [i_0] [i_2 + 2] [i_2 + 2] = ((~var_10) >> (var_0 - 51798));
                        arr_51 [i_0 + 3] [0] [i_0] [i_11] [8] = (max(var_5, var_10));
                    }

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_15] [i_11] [i_0] = (-16976 > -20578);
                        arr_55 [i_0] [5] [i_15] [5] [7] [0] [i_2] = ((var_1 * (~16953)));
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 12;i_16 += 1)
                    {
                        var_21 ^= -var_3;
                        var_22 = ((var_8 / var_10) * var_3);
                        var_23 = ((var_5 ? (-16991 & -4) : ((var_10 ? var_9 : var_5))));
                        var_24 = ((var_2 ? var_7 : var_2));
                        arr_59 [i_0] = (63 < 255);
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_25 = ((var_2 ? var_2 : var_3));
                        var_26 = (max(var_26, ((((((var_6 ? var_1 : var_9))) && (var_0 ^ var_3))))));
                    }
                    arr_63 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_2] |= (var_3 > var_3);
                }
            }
            arr_64 [5] [i_0] [5] = (((~var_5) ? (~var_0) : (var_6 > var_5)));

            for (int i_18 = 3; i_18 < 12;i_18 += 1)
            {
                var_27 = (max(var_27, var_7));

                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {

                    /* vectorizable */
                    for (int i_20 = 1; i_20 < 13;i_20 += 1)
                    {
                        var_28 = (var_3 & 64);
                        arr_71 [i_0] = ((var_6 & ((var_10 ? var_6 : var_6))));
                    }
                    var_29 = (max(var_29, (((!(((1698 ? -62 : 32767))))))));
                    arr_72 [i_19] [i_18] [i_0] [i_0] [i_2] [i_0] = var_6;
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {

                    for (int i_22 = 2; i_22 < 12;i_22 += 1)
                    {
                        var_30 += (((((var_9 ? var_2 : var_4))) ? (var_10 != var_6) : var_3));
                        var_31 -= (!var_1);
                        var_32 *= var_1;
                        arr_78 [i_0] = (!var_10);
                        arr_79 [i_18 + 1] [i_18] [i_0] [i_0] [i_0] [i_0] = (((((255 ? -16848 : -30434))) >= ((var_4 ? var_4 : var_7))));
                    }
                    arr_80 [i_0] [i_0] [i_0] [i_0] = ((var_7 ^ var_1) | var_2);
                    arr_81 [i_0] [i_2] = ((8 ? -16849 : 44));
                    arr_82 [i_0] [i_2] [10] [i_0] = (13095 ^ -13095);
                }
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    arr_87 [1] [i_0] = (max((min(var_2, var_5)), var_1));

                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        var_33 = (max(var_33, (((~(var_8 ^ var_0))))));
                        var_34 = (max(var_34, (((var_0 < ((28 ? 29054 : 16848)))))));
                    }
                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        arr_93 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] = ((var_6 ? (~var_7) : (~65531)));
                        arr_94 [i_25] [i_2] [i_2 - 1] [i_2] [i_0] &= (((min(var_8, var_4)) == (min(var_2, (var_0 < var_8)))));
                        arr_95 [i_0 - 1] [i_0] [i_23] [i_25] = (((((var_5 ? var_2 : (max(var_10, var_4))))) ? ((((min(var_4, var_1))) ? (var_7 != var_7) : (min(var_8, var_7)))) : ((-var_8 - ((((var_9 + 2147483647) << (var_5 - 659863060495585910))))))));
                    }
                    arr_96 [i_0] [i_0] [i_2 - 2] = (((min((~var_3), (max(var_8, var_2)))) & (((((var_9 ? var_3 : var_9)))))));
                }
            }

            for (int i_26 = 2; i_26 < 12;i_26 += 1)
            {
                var_35 = min(((max(var_3, var_9))), ((var_6 ? var_4 : var_1)));
                var_36 = ((((((var_8 && var_8) ? (!var_5) : (max(var_8, var_2))))) && (var_0 / var_0)));

                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 14;i_28 += 1)
                    {
                        var_37 = (((((var_0 ? var_10 : var_3))) ? (42748 + -16073) : var_3));
                        arr_106 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                    }
                    for (int i_29 = 0; i_29 < 14;i_29 += 1)
                    {
                        var_38 += var_1;
                        arr_110 [i_0] = ((((((var_4 >> (var_1 - 4066))) - (var_9 != var_0)))) ? (min((((var_2 ? var_9 : var_7))), (max(var_5, var_6)))) : (~var_9));
                        arr_111 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_29] = var_10;
                    }
                    arr_112 [i_0] [i_2] [i_0] [i_27] = (((var_7 < var_4) < (((((var_5 ? var_8 : var_10))) ? (((var_10 ? var_6 : var_0))) : ((var_5 >> (var_1 - 4075)))))));
                }
                for (int i_30 = 1; i_30 < 13;i_30 += 1)
                {
                    arr_116 [8] [i_0] [i_2] [i_26] [i_0] = ((var_2 ^ (var_10 | var_9)));

                    for (int i_31 = 1; i_31 < 11;i_31 += 1)
                    {
                        arr_119 [i_0 - 1] [3] [i_0] [i_30] [i_30] [i_31 + 1] = (((var_8 % var_9) & ((var_4 ? var_4 : var_9))));
                        arr_120 [i_0] [i_2] &= ((22787 ? -16987 : ((var_7 ? 504 : -2))));
                        var_39 = ((var_7 + (((var_4 != (var_10 % var_9))))));
                        var_40 = ((~(((var_1 & var_4) ? (max(var_4, var_9)) : (((var_6 ? var_9 : var_0)))))));
                        var_41 += -var_4;
                    }
                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 14;i_32 += 1)
                    {
                        arr_123 [i_0] [i_0] [i_0] [i_0] [i_0] [9] = ((~((var_0 >> (var_6 - 6315)))));
                        arr_124 [i_32] [i_30] [i_0] [i_26 - 2] [i_0] [i_2] [i_0] = (((58720256 < 10179) ? var_7 : (var_5 < var_3)));
                        arr_125 [i_0] [13] [i_2] [i_26] [i_0] [i_0] [i_32] = var_7;
                    }
                    for (int i_33 = 0; i_33 < 14;i_33 += 1)
                    {
                        var_42 |= (max(var_3, var_0));
                        arr_129 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (((((var_4 >> (var_4 - 1730536084077382937)))) ? var_8 : ((max(var_7, var_1)))));
                    }
                    var_43 = (((((max(var_2, var_9)))) < (22788 == var_6)));

                    /* vectorizable */
                    for (int i_34 = 0; i_34 < 14;i_34 += 1)
                    {
                        var_44 -= (((var_3 < var_7) == var_10));
                        var_45 = ((var_3 % (var_7 > var_9)));
                    }
                    for (int i_35 = 0; i_35 < 14;i_35 += 1)
                    {
                        var_46 = var_4;
                        arr_135 [i_0] [i_26] = var_2;
                    }
                    for (int i_36 = 0; i_36 < 14;i_36 += 1)
                    {
                        var_47 ^= (var_4 && var_7);
                        var_48 = (max(var_48, (((((max(((var_7 ? var_1 : var_9)), (var_9 < var_0)))) > ((~(((var_8 + 9223372036854775807) << (((var_7 + 21776) - 19)))))))))));
                        arr_139 [i_0] [8] [i_2] [i_2] [i_0] = (max((((var_8 ? var_3 : var_6))), ((127 ? 26240 : var_4))));
                        var_49 = (max(var_49, ((((((-(var_4 != var_1)))) ? (((!(var_6 > var_1)))) : (!var_5))))));
                    }
                    var_50 += ((~(max(32, -58720271))));
                }
                /* vectorizable */
                for (int i_37 = 0; i_37 < 14;i_37 += 1)
                {
                    var_51 *= ((var_3 ? ((var_5 ? var_10 : var_5)) : (var_9 > var_0)));
                    var_52 *= ((127 ? 242427737842147275 : ((-1 ? -1371665906156420705 : -242427737842147292))));
                    arr_142 [i_2] [i_2] [i_2] [i_0] = var_8;
                }
                var_53 = var_1;

                /* vectorizable */
                for (int i_38 = 1; i_38 < 13;i_38 += 1)
                {

                    for (int i_39 = 1; i_39 < 13;i_39 += 1)
                    {
                        var_54 = ((var_6 >> (var_5 - 659863060495585891)));
                        var_55 = (~var_10);
                        arr_151 [i_0] [i_0] [i_0] = (((var_3 != var_2) ? (var_4 / var_10) : (1 & 127)));
                        arr_152 [i_0] [i_0] [i_0] [i_0] [i_39] [i_26] [i_0] = var_3;
                    }

                    for (int i_40 = 1; i_40 < 13;i_40 += 1)
                    {
                        var_56 = (max(var_56, (var_4 % var_3)));
                        var_57 = var_0;
                        arr_156 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = (-16073 > -58720257);
                        arr_157 [i_0] [i_0] [8] [8] = (!var_0);
                    }
                }
                /* vectorizable */
                for (int i_41 = 0; i_41 < 14;i_41 += 1)
                {

                    for (int i_42 = 0; i_42 < 14;i_42 += 1)
                    {
                        var_58 = (~var_5);
                        arr_164 [i_0] [i_0 - 1] [8] [i_41] [i_26] = ((var_6 - var_5) ? var_0 : var_4);
                        var_59 = ((-((var_5 ? var_1 : var_8))));
                    }
                    arr_165 [i_0] [i_0] [i_26 - 2] [8] = ((var_10 / ((var_2 ? var_1 : var_1))));
                }
                /* vectorizable */
                for (int i_43 = 0; i_43 < 14;i_43 += 1)
                {
                    var_60 -= var_10;

                    for (int i_44 = 0; i_44 < 14;i_44 += 1)
                    {
                        arr_171 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((var_3 ? var_8 : ((var_0 ? var_5 : var_0))));
                        arr_172 [i_2] [7] [i_0] [i_26] [i_0] [6] = (var_6 > var_9);
                        var_61 = (max(var_61, (!var_2)));
                        arr_173 [i_0] [i_0] [i_0] [i_0] [12] = (((var_7 ? var_7 : var_10)));
                    }
                    for (int i_45 = 0; i_45 < 14;i_45 += 1)
                    {
                        arr_177 [12] [i_2 + 1] [8] [i_43] [i_43] [i_45] &= -511;
                        arr_178 [3] [i_26] [i_0] = var_6;
                        arr_179 [i_0] [i_43] [i_26] [i_2] [i_0] = (~var_6);
                        var_62 *= ((-(var_3 < var_8)));
                    }
                }
            }
            for (int i_46 = 0; i_46 < 14;i_46 += 1)
            {
                arr_182 [i_0] [7] [i_2 - 1] [i_0] = (max((max(var_1, var_7)), (((var_2 < var_1) & ((var_3 << (var_1 - 4110)))))));

                for (int i_47 = 2; i_47 < 13;i_47 += 1)
                {
                    arr_186 [i_0] = (~(30 * 8796093022207));
                    var_63 = ((-(max((var_1 % var_0), ((min(var_3, var_6)))))));
                }
                for (int i_48 = 0; i_48 < 14;i_48 += 1)
                {
                    var_64 += (((!-var_5) > (((!(((-1 ? -2261019698987713472 : 0))))))));

                    for (int i_49 = 0; i_49 < 14;i_49 += 1)
                    {
                        var_65 = (max(var_65, ((((((!((max(var_8, var_5)))))) / (max(var_0, ((var_1 ? var_3 : var_0)))))))));
                        arr_192 [i_49] [i_49] [i_0] [i_49] [i_49] [i_49] [i_49] = ((((var_5 ? ((var_4 ? var_0 : var_8)) : (var_5 & var_1))) > ((((((var_2 ? var_10 : var_0)) > (var_8 == var_0)))))));
                    }
                    /* vectorizable */
                    for (int i_50 = 0; i_50 < 14;i_50 += 1)
                    {
                        var_66 |= (var_9 ? var_6 : ((var_2 ? var_0 : var_3)));
                        var_67 *= var_9;
                    }
                    for (int i_51 = 4; i_51 < 12;i_51 += 1)
                    {
                        var_68 = (max(var_68, (((((((1847292412243801910 % 8796093022214) ? 8796093022231 : -1))) ? -var_8 : (~-var_3))))));
                        arr_199 [8] [i_48] [i_0] [13] [i_0 + 3] = ((max(var_3, var_5)));
                    }
                    arr_200 [i_0] = (((((var_1 & ((var_7 ? var_1 : var_10))))) && (((256 != -250) == ((42748 ? var_5 : 242427737842147265))))));
                }
                for (int i_52 = 1; i_52 < 13;i_52 += 1)
                {
                    arr_204 [i_0] [i_0] = ((((max(28709, 53239))) > ((-8192 ^ (22787 + var_0)))));

                    for (int i_53 = 0; i_53 < 14;i_53 += 1)
                    {
                        arr_207 [i_0] [i_2] [i_0] [i_0] [i_2 - 2] [i_0] = ((((var_4 > var_9) ? var_6 : var_2)));
                        var_69 = (max(var_69, (max(var_1, ((var_10 ? var_2 : var_1))))));
                    }

                    for (int i_54 = 0; i_54 < 14;i_54 += 1)
                    {
                        var_70 = (max(var_70, (((var_1 & ((min((var_7 > var_2), (var_4 >= var_3)))))))));
                        var_71 ^= ((-(var_4 >= var_2)));
                    }
                    for (int i_55 = 0; i_55 < 14;i_55 += 1)
                    {
                        arr_213 [i_0] [i_52] [i_0] [i_0] [i_0] = (((((var_1 >> (((~var_0) + 51826))))) ? ((-((var_4 ? var_0 : var_9)))) : ((-((var_7 ? var_6 : var_9))))));
                        var_72 += (((((var_4 <= ((var_1 ? var_6 : var_5))))) * (((((-32280 ? 25602 : 32767)) < ((min(20, -34))))))));
                    }
                    /* vectorizable */
                    for (int i_56 = 0; i_56 < 14;i_56 += 1)
                    {
                        arr_218 [i_0] [i_0] [i_46] [i_52 + 1] [i_0] = (var_7 < var_9);
                        arr_219 [i_0] [i_2] [i_2] = ((var_6 ? var_2 : var_4));
                        var_73 = (max(var_73, (((((var_7 ? var_2 : var_8)) % (~var_6))))));
                    }
                }
            }
            var_74 += (((-32 < -30) ? ((((-134217728 || 4350643860072637684) ? 366 : 366))) : (max((((var_5 ? var_6 : var_1))), (min(var_4, var_8))))));
        }
        for (int i_57 = 4; i_57 < 11;i_57 += 1)
        {
            arr_224 [i_0] [i_0] = ((((((var_4 == var_3) >> (((max(var_2, var_4)) - 1730536084077382961))))) ? (((((var_3 ? var_0 : var_1))) ? ((85 ? 242427737842147267 : 96)) : (((var_3 >> (var_4 - 1730536084077382965)))))) : (((var_6 ? var_0 : var_1)))));
            arr_225 [i_0] [i_0] [i_0] = (((var_5 % var_1) ? ((~((max(var_3, var_0))))) : ((-var_10 << ((((var_7 ? var_3 : var_5)) - 13600))))));
        }
    }
    var_75 = (max(((var_7 ? var_4 : (var_9 ^ var_2))), (((((max(-19984, -4350643860072637685))) ? (var_8 <= var_5) : (~var_0))))));
    var_76 = (max(var_76, ((((!var_3) >> (((((var_0 ? var_8 : var_10)) != var_5))))))));
    var_77 = (max(var_5, (((var_0 ? var_10 : var_7)))));

    for (int i_58 = 2; i_58 < 10;i_58 += 1)
    {
        arr_228 [i_58] = (!242427737842147266);
        var_78 = (max(var_78, (-var_7 != var_0)));
    }
    for (int i_59 = 0; i_59 < 14;i_59 += 1)
    {
        arr_231 [i_59] = ((((-242427737842147268 ? (var_9 ^ -1830142032) : 8192)) ^ (-25 & -120)));
        arr_232 [i_59] = (((((32767 & 576460752303407104) ? (-32767 - 1) : 30720)) != -93));
    }
    #pragma endscop
}
