/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max((max(((var_3 ? var_1 : var_5)), -var_6)), (((var_13 | (!var_2))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = (((((var_8 + var_3) ? -var_10 : (!var_7))) << (((((((var_0 ? var_9 : var_0))) ? ((var_4 ? var_11 : var_10)) : ((var_6 << (var_13 - 194))))) - 364143152))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_17 |= ((((max(((var_12 ? var_9 : var_4)), (((var_4 ? var_0 : var_8)))))) ? var_3 : (((((var_1 ? var_4 : var_3)) == ((var_14 ? var_4 : var_8)))))));
                arr_12 [i_0] [i_0] [i_1] = (((((var_14 | var_2) + 2147483647)) << (((((((var_2 ? var_0 : var_2))) ? (((var_2 ? var_3 : var_4))) : ((var_4 ? var_1 : var_7)))) - 1))));
                var_18 = ((((((!var_4) ? var_13 : var_13))) ? (((!1891) ? ((var_4 ? var_9 : var_7)) : (((var_13 ? var_12 : var_5))))) : (((((var_9 ? var_11 : var_4)) * -var_2)))));
                arr_13 [i_0] [i_1] [i_1] = ((-(((((var_5 ? var_6 : var_5))) ? (var_7 * var_11) : (var_6 == var_6)))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 += ((!(((((var_8 ? var_12 : var_9)) / (var_9 / var_6))))));
                arr_16 [i_0] [i_1] [i_1] = max(((((var_11 << (var_1 - 223033143761484823))) > (((var_12 ? var_4 : var_4))))), var_3);

                /* vectorizable */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_20 = var_12;
                    arr_19 [i_0] [i_1] [i_1] [i_3] [1] [i_1] = (((var_3 ? var_0 : var_1)));
                    var_21 -= var_1;
                }
                var_22 = ((((max((~var_2), -var_14))) ? ((1 ? (1 + 7643) : 1)) : (((var_13 | var_3) << (!var_8)))));
                var_23 ^= ((-(!var_1)));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_23 [i_0] [i_5] [i_5] |= ((((((var_12 * var_13) + (var_5 << var_2)))) ? (var_1 * var_2) : ((((!var_12) ? ((1 ? 3740782645 : 1)) : (var_8 % var_8))))));
                var_24 |= (!((max((var_9 - var_3), var_9))));
                var_25 |= ((((-var_7 ? var_10 : var_4)) | (((var_4 | (var_3 << var_0))))));
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                arr_27 [i_1] [i_1] [i_6] [1] = (max((-28652 | 1), (((!(var_9 == var_13))))));
                arr_28 [i_1] [i_1] = (((((var_4 / var_0) * ((var_6 ? var_6 : var_13)))) | ((((var_13 % var_3) + (!var_0))))));
                arr_29 [i_1] [1] = (max(((-((var_0 ? var_5 : var_13)))), (((var_8 | var_5) ? (var_12 && var_11) : -var_3))));
                arr_30 [i_1] [i_1] [i_1] = (((((var_0 || var_9) && (var_0 && var_2))) ? var_7 : var_11));
                var_26 = var_14;
            }
            var_27 = ((var_5 ? (!var_10) : (((var_3 | var_14) ? (var_5 == var_11) : var_12))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_28 = ((var_3 ? ((var_8 ? var_6 : var_4)) : ((var_10 ? var_11 : var_6))));
                    arr_39 [i_0] [i_7] [i_8] [i_7] [5] [i_0] = (var_2 ? var_12 : ((var_4 ? var_8 : var_6)));
                }
                var_29 *= (((((var_11 ? var_9 : var_11))) ? ((var_0 ? var_5 : var_4)) : ((var_7 << (var_8 - 191)))));

                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_30 ^= ((-var_4 ? ((var_1 ? var_3 : var_14)) : (var_8 * var_8)));
                        var_31 += ((var_4 ? -var_13 : ((var_9 << (var_11 - 364143153)))));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_32 = var_14;
                        var_33 = (!(!var_1));
                        arr_47 [i_0] [i_0] [i_0] [i_8] [i_12] [i_7] = (((var_4 + var_4) % ((var_8 ? var_13 : var_8))));
                        arr_48 [i_12] [i_8] [i_7] [i_7] [i_8] [i_0] = var_14;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_51 [i_0] [i_7] [i_7] [i_10] [i_8] [0] [i_13] |= (var_4 << var_0);
                        var_34 = ((((var_4 ? var_9 : var_4)) > (var_11 % var_6)));
                    }

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_55 [i_0] [i_7] [i_8] [i_10] [i_8] [i_14] = (-var_4 | var_13);
                        var_35 ^= ((var_4 ? (((var_10 ? var_2 : var_2))) : var_11));
                    }
                    arr_56 [i_0] [i_7] [i_8] [1] = (((((var_12 ? var_3 : var_2))) || var_13));
                    var_36 += (var_11 || var_9);
                    var_37 -= (15065 - -var_6);
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    arr_60 [i_0] [i_0] [i_0] [i_8] [1] [i_0] = ((var_0 ? var_7 : ((var_8 ? var_9 : var_2))));
                    arr_61 [i_8] = (((((var_2 ? var_6 : var_11))) ? (((var_11 ? var_3 : var_13))) : -var_9));
                    var_38 ^= ((var_13 == var_10) ? ((var_14 ? var_9 : var_14)) : (((var_10 ? var_11 : var_5))));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    var_39 = var_8;

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_40 &= ((!(((var_8 ? var_8 : var_6)))));
                        var_41 = var_1;
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        var_42 |= ((var_2 ? var_4 : ((var_1 ? var_7 : var_5))));
                        arr_71 [2] [i_8] [i_8] [i_16] [1] = ((var_9 ? var_6 : var_7));
                        var_43 *= var_3;
                    }
                }
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_44 -= ((max((!var_2), var_9)) == (((var_2 ? ((var_9 ? var_6 : var_8)) : ((var_3 ? var_10 : var_5))))));
                        var_45 += (((((var_5 > var_7) + (var_14 == var_3))) << ((max(1, 1)))));
                        var_46 += (((var_11 && var_7) ? (var_12 % var_7) : (!var_2)));
                    }

                    for (int i_22 = 3; i_22 < 9;i_22 += 1)
                    {
                        arr_82 [i_0] [i_0] [i_0] [i_0] [i_19] |= ((((((!var_13) | ((1 ? 1 : 1))))) ? (((((var_8 ? var_8 : var_2)) > (var_1 == var_7)))) : (var_2 > var_0)));
                        var_47 ^= var_12;
                        arr_83 [i_22] [i_22] = ((((((var_13 && var_5) ? (!var_13) : (!var_8)))) || (min((var_3 || var_9), (!var_4)))));
                    }
                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        var_48 = (!(var_0 && var_9));
                        var_49 = ((((var_11 << (var_4 - 115)))) ? var_0 : (~var_1));
                        arr_86 [i_0] [i_7] [i_0] [i_20] [i_23] = (var_6 + -1);
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        arr_89 [i_0] [i_0] [i_24] = ((var_9 ? var_1 : var_1));
                        var_50 = ((!var_8) > (var_8 * var_2));
                        var_51 -= (((((var_8 ? var_9 : var_11))) ? ((var_12 ? var_12 : var_8)) : (!var_14)));
                        arr_90 [i_0] [i_7] [i_19] [i_20] [i_24] = (((((var_7 ? var_0 : var_14))) * var_9));
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_52 ^= ((((((max(var_10, var_2)) / var_3))) ? var_0 : (17 > 149)));
                        arr_93 [i_19] [i_7] [6] = ((var_3 % ((((var_2 ? var_13 : var_3)) + (var_10 == var_5)))));
                        var_53 -= var_5;
                        var_54 = (var_10 * var_4);
                        arr_94 [i_0] [8] [i_19] [i_19] [i_19] [i_25] [i_25] = ((var_13 << (((((var_7 | var_1) | var_1)) - 223033143761484836))));
                    }
                    var_55 ^= var_11;
                }
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_56 *= ((-(((max(var_9, var_4)) | (var_10 > var_2)))));
                    var_57 -= (max(((var_2 ? ((var_10 ? var_14 : var_6)) : var_11)), (((!(!var_0))))));
                }
                for (int i_27 = 0; i_27 < 12;i_27 += 1)
                {
                    var_58 -= ((((!var_13) ? var_10 : var_6)) * (var_11 | var_10));
                    var_59 = (((((149 ? (!var_12) : 249))) ? -3194697968668547980 : 107));
                    var_60 |= (((-(var_6 << var_5))));
                }

                for (int i_28 = 0; i_28 < 12;i_28 += 1)
                {
                    var_61 = (((((-((var_4 ? var_9 : var_1))))) ? ((var_10 | (1 > 1))) : -var_10));
                    var_62 |= ((~(((!var_13) ? (!var_11) : (var_6 == var_6)))));
                    var_63 = (((((((min(var_5, var_0))) % (var_5 == var_7)))) ? var_13 : (((var_6 > var_3) * (210 + 13345760708367831931)))));
                    var_64 = (!var_0);
                }
                var_65 = ((-var_9 ? ((((((var_10 ? var_10 : var_4))) ? ((var_2 ? var_5 : var_8)) : (~var_13)))) : (((var_6 | var_11) ? var_0 : (var_4 | var_1)))));
                var_66 = var_6;
            }
            var_67 -= ((!(((var_8 ? (var_13 && var_8) : ((var_7 ? var_1 : var_2)))))));
        }

        for (int i_29 = 0; i_29 < 12;i_29 += 1)
        {
            var_68 &= var_7;
            var_69 ^= (max(-var_9, (((var_6 == var_9) * var_1))));
            var_70 = (((((((min(var_6, var_11))) ? (!var_11) : ((var_14 ? var_10 : var_6))))) ? ((var_4 ? ((var_6 ? var_2 : var_10)) : ((var_4 ? var_10 : var_12)))) : (((((var_8 ? var_7 : var_13)) << var_3)))));
            arr_104 [11] [11] = ((((((var_11 ? var_2 : var_11)) ? ((var_2 ? var_10 : var_14)) : var_7))));
        }
        for (int i_30 = 0; i_30 < 12;i_30 += 1)
        {
            arr_107 [i_0] = ((((((((var_9 ? var_7 : var_9))) ? var_5 : ((var_3 ? var_6 : var_4))))) ? ((var_10 ? ((var_2 ? var_1 : var_3)) : (((var_6 ? var_7 : var_13))))) : (((var_5 ? var_11 : var_6)))));
            arr_108 [i_0] [i_30] [i_0] = (!var_5);
        }
        for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
        {
            var_71 -= (((((var_3 ? var_13 : var_2))) ? ((((var_11 - var_4) * ((var_5 ? var_6 : var_14))))) : (min((((var_5 ? var_14 : var_2))), ((var_14 ? var_1 : var_0))))));
            arr_112 [2] [i_31] [i_31] = (((((var_7 - var_10) ? ((var_9 ? var_0 : var_9)) : (((var_6 ? var_7 : var_5))))) * ((((((var_4 ? var_7 : var_6))) ? (!var_7) : (var_8 * var_3))))));
            var_72 = ((((((var_7 * var_1) ? var_2 : ((var_0 ? var_8 : var_11))))) ? ((((!var_5) || (((var_13 ? var_2 : var_6)))))) : (((((var_4 ? var_11 : var_7))) ? ((var_14 ? 91 : 1)) : var_8))));
        }
        for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
        {
            var_73 += (((((!(var_4 + var_0)))) * (((!(var_3 * var_1))))));
            var_74 = ((((((var_4 << (var_8 - 197))) << ((((var_1 << (var_14 + 8077))) - 1784265150091878752)))) << (var_1 - 223033143761484844)));
            var_75 = 1;
        }

        for (int i_33 = 0; i_33 < 12;i_33 += 1)
        {

            for (int i_34 = 0; i_34 < 12;i_34 += 1)
            {

                for (int i_35 = 0; i_35 < 12;i_35 += 1)
                {
                    arr_127 [i_0] [i_33] [i_0] [i_33] [i_33] [i_35] = min((((((var_4 ? var_3 : var_7))) % (min(var_10, var_5)))), (((((max(var_13, var_13))) == (var_0 == var_10)))));

                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_76 = (((((((var_4 ? var_13 : var_14))) ? ((var_6 ? var_13 : var_2)) : var_8))) ? (((((max(var_7, var_3))) << (((var_13 | var_3) - 202))))) : ((var_14 ? var_5 : var_11)));
                        var_77 = (((((((var_8 << var_2) > ((max(var_4, var_3))))))) > (((var_4 * var_7) ? ((var_3 ? var_10 : var_12)) : (var_11 + var_3)))));
                        arr_132 [i_0] = (((((var_13 ? -var_1 : (var_5 / var_1)))) ? ((((min(var_7, var_2)) ? var_4 : ((var_8 ? var_4 : var_8))))) : (var_1 * var_4)));
                    }
                    for (int i_37 = 3; i_37 < 8;i_37 += 1)
                    {
                        var_78 |= (((((var_13 ? ((var_13 ? var_1 : var_1)) : ((72057559678189568 ? 14470276305976657775 : 1))))) ? (max(-var_0, (var_13 == var_9))) : var_7));
                        arr_135 [i_0] [i_0] [i_0] [i_0] = ((-(var_1 + var_13)));
                    }
                    var_79 = ((((((var_5 ? var_7 : var_9)) == (!var_13))) ? ((((var_9 ? var_9 : var_12)) - -var_10)) : (((((var_10 ? var_13 : var_10))) ? (((var_14 ? var_2 : var_13))) : (max(var_12, var_1))))));
                }
                /* vectorizable */
                for (int i_38 = 2; i_38 < 11;i_38 += 1)
                {

                    for (int i_39 = 0; i_39 < 12;i_39 += 1)
                    {
                        arr_141 [0] [i_33] [i_34] [i_38] [i_39] = ((!(~var_0)));
                        var_80 = (((((var_8 ? var_0 : var_14))) ? (var_1 + var_10) : (((var_7 << (var_6 - 4005612668))))));
                    }
                    for (int i_40 = 0; i_40 < 12;i_40 += 1)
                    {
                        arr_144 [i_38] = ((var_13 << var_5) ? var_9 : (!var_1));
                        arr_145 [5] [i_33] [i_33] [10] [i_33] [i_33] [i_33] = (((!var_3) ? -var_8 : (var_4 | var_1)));
                        arr_146 [i_0] [i_0] [7] [1] [i_0] [4] = (10581051463465747978 == -29886);
                    }
                    arr_147 [i_0] [i_33] [i_33] [i_38] = (-var_11 | var_11);
                    var_81 -= ((var_1 ? ((var_14 ? var_5 : var_13)) : (var_8 > var_14)));
                    var_82 -= (var_8 | var_8);
                    var_83 *= (var_10 * var_3);
                }
                var_84 = (((((!(((var_2 << (var_11 - 364143163))))))) + (max(((var_6 ? var_13 : var_2)), (!var_4)))));
            }
            var_85 = ((((((((var_1 << (var_4 - 102)))) ? -var_10 : (!var_2)))) ? (!var_2) : ((var_7 | ((var_1 ? var_2 : var_13))))));

            for (int i_41 = 0; i_41 < 0;i_41 += 1)
            {
                var_86 += var_7;
                var_87 ^= (((((var_10 ? var_5 : var_8))) ? var_6 : var_2));
            }
            for (int i_42 = 0; i_42 < 12;i_42 += 1) /* same iter space */
            {
                var_88 ^= (((!var_12) | ((((var_5 % var_8) == (var_2 | var_11))))));
                var_89 = ((((-((var_12 ? var_6 : var_9)))) == ((((var_4 + var_1) ? ((min(var_8, var_12))) : var_14)))));
                arr_153 [i_0] [i_0] = (((((-(var_8 / var_2)))) ? var_2 : var_11));
                var_90 |= (!(!var_11));
                arr_154 [i_0] [i_42] = (!(((((-72057559678189570 ? 0 : 198)) * (var_1 == var_2)))));
            }
            for (int i_43 = 0; i_43 < 12;i_43 += 1) /* same iter space */
            {
                arr_157 [6] [6] [i_43] = (((!var_12) << (((((var_0 * var_9) << ((((var_2 ? var_8 : var_1)) - 183)))) - 15062833486874279911))));

                for (int i_44 = 0; i_44 < 12;i_44 += 1)
                {
                    arr_160 [i_44] |= (((((var_5 ? var_8 : var_9)) | ((var_3 ? var_6 : var_1)))) == ((((!var_11) ? -var_12 : (!var_7)))));
                    arr_161 [i_43] [i_33] [6] [6] [3] = (((var_7 % var_6) > ((var_5 ? (((var_10 ? var_11 : var_5))) : var_9))));
                    var_91 = ((((!(((var_7 ? var_3 : var_11)))))));

                    /* vectorizable */
                    for (int i_45 = 0; i_45 < 12;i_45 += 1)
                    {
                        var_92 = ((-var_1 ? -var_10 : -var_1));
                        var_93 -= var_3;
                        var_94 |= ((!(((var_11 ? var_5 : var_0)))));
                    }
                }
                for (int i_46 = 0; i_46 < 1;i_46 += 1)
                {

                    for (int i_47 = 0; i_47 < 12;i_47 += 1)
                    {
                        var_95 = (!var_6);
                        var_96 = var_3;
                        var_97 -= (((((var_11 ? (!var_5) : (var_10 + var_12)))) ? (((((var_12 ? var_4 : var_12))) ? var_12 : (var_11 % var_3))) : ((max((var_2 % var_14), (!var_9))))));
                        arr_171 [i_33] [i_33] [i_33] [i_33] [i_33] |= var_2;
                        arr_172 [i_43] = (!(((var_14 | (7865692610243803619 == 255)))));
                    }
                    /* vectorizable */
                    for (int i_48 = 0; i_48 < 12;i_48 += 1)
                    {
                        var_98 += var_8;
                        var_99 = ((var_13 ? var_3 : var_1));
                        var_100 = var_6;
                    }
                    var_101 ^= ((~(((!var_13) << (var_7 > var_1)))));
                    arr_175 [5] [5] [i_43] [1] = (((((((min(var_8, var_3))) ? var_4 : var_1))) ? (((var_12 % var_14) ? ((var_9 ? var_0 : var_0)) : (1 + 1))) : (((((var_4 << (var_4 - 93)))) ? (var_7 % var_2) : ((var_1 ? var_4 : var_4))))));
                    arr_176 [i_0] [i_0] [1] [i_43] [i_33] = ((((((var_1 * var_9) ? var_14 : var_8))) % var_6));
                }
            }
            arr_177 [i_33] [3] = (min(-var_7, ((((var_5 ? var_7 : var_14)) | var_14))));
        }
        for (int i_49 = 0; i_49 < 12;i_49 += 1) /* same iter space */
        {

            for (int i_50 = 0; i_50 < 1;i_50 += 1)
            {

                for (int i_51 = 0; i_51 < 12;i_51 += 1)
                {
                    var_102 *= ((1 ? 1 : 17907567490920587088));
                    arr_185 [i_0] [i_0] [i_50] [i_51] |= (((((max(var_2, var_4))))) ? ((var_3 ? var_13 : var_1)) : ((max(((var_8 ? var_6 : var_2)), (((var_7 ? var_2 : var_12)))))));
                    var_103 ^= var_4;
                    var_104 ^= max(((var_10 ? (var_9 * var_6) : var_12)), var_4);
                    var_105 = var_9;
                }
                for (int i_52 = 0; i_52 < 1;i_52 += 1)
                {
                    var_106 = (((min(var_6, var_1)) * var_13));
                    arr_189 [i_49] [10] |= (((((!(var_10 * var_7)))) * (((!(((var_3 ? var_0 : var_2))))))));
                }
                var_107 = (((((min(var_10, var_1)) * (var_13 / var_1))) + (var_3 - -var_2)));
            }
            var_108 = (((((var_3 + ((var_10 ? var_10 : var_1))))) ? var_7 : (((((var_0 ? var_4 : var_1))) ? (var_8 + var_4) : var_7))));
        }
        for (int i_53 = 0; i_53 < 12;i_53 += 1) /* same iter space */
        {
            var_109 -= var_5;
            var_110 = (((var_13 ? ((var_5 ? var_9 : var_7)) : (((var_9 ? var_0 : var_11))))) << (((((var_10 == var_10) ? -var_14 : ((var_3 ? var_7 : var_0)))) - 8045)));
            var_111 |= ((1 ? 21093 : ((2088258295 ? -32767 : -1094158411707441139))));
            var_112 = ((((var_5 ? var_6 : ((var_0 ? var_12 : var_10)))) > ((((((var_3 ? var_1 : var_10))) ? var_2 : var_13)))));
        }
        for (int i_54 = 0; i_54 < 12;i_54 += 1) /* same iter space */
        {
            arr_196 [i_54] [6] = (((((-var_3 > (var_5 * var_1)))) + (min(((var_12 ? var_2 : var_2)), var_5))));
            var_113 = var_7;
            arr_197 [i_0] [i_0] = var_12;
        }
        arr_198 [i_0] &= (((var_13 == var_14) << (var_4 > var_12)));
    }
    #pragma endscop
}
