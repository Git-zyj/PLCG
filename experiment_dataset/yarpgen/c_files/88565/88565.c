/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (13708 & 23362);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (var_3 != var_5);
        arr_5 [i_0] = ((((((!var_0) - var_0))) && (var_9 + var_1)));
        var_15 = ((((var_4 - (var_1 <= var_8))) | ((var_7 + (var_2 / var_4)))));
        var_16 = (((var_11 - var_12) / -var_12));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_17 = (var_7 >= var_7);
            var_18 = (((var_9 - var_5) - (var_5 / var_5)));
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_17 [i_1] [i_3 + 3] [i_4] = ((((var_12 ^ (var_5 >= var_7))) == ((((var_13 | var_10) != (var_8 | var_5))))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_19 = (((((((var_2 & var_13) < ((var_6 ? var_2 : var_2)))))) & ((-61930 - (var_0 + var_6)))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((((!var_5) >> (((((var_11 + 2147483647) >> (var_8 - 1990512663))) - 24379)))) >> (((var_5 || (var_1 <= var_8)))));
                        var_21 = (~(6293 / -23353));
                        arr_23 [i_6] [i_6] [i_5] [i_5] [i_4] [i_1] [i_6] = ((23362 >> ((((23362 ? (((var_0 + 2147483647) << (var_4 - 11148))) : (var_3 - var_5))) - 404021319))));
                        arr_24 [i_1] [i_3 - 1] [i_4] [5] [i_6] = (((var_11 / var_12) == (((var_11 < var_1) ? ((var_13 << (var_4 - 11135))) : (var_6 && var_5)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, ((var_12 ? var_12 : var_0))));
                        var_23 = ((var_9 + (var_4 / var_11)));
                        var_24 = (-54 / var_13);
                        arr_27 [i_1] [i_3 - 1] [7] [7] [i_7] = (((var_11 + var_1) / (var_10 + var_5)));
                    }
                }
                arr_28 [i_1] [i_4] [i_4] [4] = var_0;

                /* vectorizable */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    arr_32 [i_8 - 1] [7] [7] [7] [i_8] = ((((var_4 << (var_2 + 1054224877))) <= (var_0 > var_4)));
                    arr_33 [i_1] [i_4] [i_4] [i_3] = (((var_10 + var_8) < var_4));
                }
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    arr_40 [i_1] [i_9] = (((((!(!var_1)))) <= (((var_2 == var_5) >> (((var_7 | var_2) + 164))))));
                    arr_41 [8] [i_3 + 2] [i_9] [i_10] = (((var_12 / var_9) == (var_8 | var_0)));
                    var_25 = (((var_13 * var_12) | (((((var_12 ? var_12 : var_7))) & ((var_11 ? var_5 : var_6))))));

                    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (((var_3 / ((~(((var_11 + 2147483647) >> (var_6 - 9928526962777990329))))))))));
                        arr_45 [i_1] [i_3] [i_9] [i_9] [i_3] [i_11] [i_11] = ((!(((var_13 + (~var_8))))));
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_7 ? var_10 : var_11)) + (var_0 ^ var_13));
                        var_27 = (((~var_10) | (((var_4 != var_7) * (var_5 >= var_12)))));
                        var_28 &= (((~var_1) >> (var_12 < var_3)));
                    }
                    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_29 = ((((~var_0) ? (((var_7 + 2147483647) << (var_10 - 19404))) : (var_5 && var_0))) ^ (((var_8 || (var_2 ^ var_5)))));
                        var_30 = (((((((var_2 ? var_13 : var_12)) + (var_8 & var_8)))) <= (((var_5 | var_0) / (var_6 / var_12)))));
                        var_31 = (963191997 / 89);
                    }
                    for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_1] [i_3] [i_13] [i_1] [i_10] [i_9] = (((~var_2) < var_6));
                        var_32 = (16851 + 23362);
                        var_33 = ((var_9 && (((var_4 ? -var_0 : var_1)))));
                        arr_53 [i_13] [i_13 + 2] [7] [i_9] [i_9] [4] [7] = (var_1 - var_9);
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_34 -= -var_4;
                    var_35 = ((var_12 > (var_12 / var_1)));
                    var_36 = (23362 ? -39 : 16424);
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    arr_59 [i_1] [i_3] [i_9] [i_15] = (((((var_13 - var_7) >> (var_8 > var_2))) + (!var_6)));
                    var_37 = ((((-var_11 == (var_2 & var_10))) || ((!(~var_5)))));
                }
                arr_60 [i_3] [i_3 + 2] [i_3] = (((((var_4 * var_10) % var_3)) > ((((var_1 == var_1) < (23367 + -23367))))));
            }
            arr_61 [i_3] [i_1] [i_1] = ((var_4 & var_10) & (var_2 || var_12));
            var_38 = ((+(((var_1 < var_10) ? (var_5 | var_12) : (var_6 <= var_9)))));
            var_39 = (!21028);
            var_40 = (((((-(var_10 == var_6)))) || (((var_8 > var_1) != (var_7 / var_1)))));
        }
        for (int i_16 = 3; i_16 < 17;i_16 += 1)
        {

            for (int i_17 = 4; i_17 < 17;i_17 += 1)
            {
                arr_68 [i_16] [i_16] |= (var_13 & var_7);
                var_41 = ((var_0 <= -var_13) & ((var_7 + (var_12 + var_0))));
                var_42 += ((-((var_5 ? var_5 : var_3))));
                arr_69 [i_17] = ((var_8 + (72 ^ 17231)));
            }
            for (int i_18 = 2; i_18 < 17;i_18 += 1)
            {
                var_43 = (((var_8 - var_3) ^ (var_9 - var_5)));

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {

                    for (int i_20 = 2; i_20 < 17;i_20 += 1)
                    {
                        var_44 = (min(var_44, var_0));
                        arr_77 [i_20] = (((((!(var_2 <= var_6)))) & var_1));
                        var_45 = (((((var_4 != (var_6 & var_13)))) == ((((var_1 * var_7) <= (var_12 + var_1))))));
                        var_46 = ((((((!(var_10 - var_8))))) < ((var_6 / (~var_5)))));
                    }
                    arr_78 [i_1] [i_1] [i_1] [i_16 - 2] [i_18] = (((((!(var_9 * var_7)))) & ((((var_5 > var_0) >= (var_8 + var_6))))));
                }
            }
            arr_79 [i_1] [i_16 - 3] = ((80 & ((((-23353 ? -17911 : 4868)) & (15268103705562385558 || 20)))));
            var_47 = (((((!((((-64 + 2147483647) << (15003 - 15003))))))) / var_8));
            var_48 = ((var_5 >= ((var_13 & (~1876016463)))));
        }
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            var_49 = (var_7 + var_11);
            var_50 = ((32947 ? 5806 : -116));
        }
        var_51 = ((var_0 > (2952 >= -112)));
        arr_82 [i_1] = ((37930 ? (((106 >> (-23356 + 23373)))) : 3178640368147166057));
    }
    for (int i_22 = 1; i_22 < 13;i_22 += 1) /* same iter space */
    {
        var_52 = (((((((var_0 + 2147483647) >> (var_3 - 637517561))) ^ (var_5 > var_9)))) ? (var_0 & var_12) : (~var_7));
        arr_87 [i_22] = (((-var_5 + 2147483647) << (-var_6 - 8518217110931561267)));
        arr_88 [i_22] = ((((var_8 >> (((~var_6) - 8518217110931561251)))) != -1754067407));
    }
    /* vectorizable */
    for (int i_23 = 1; i_23 < 13;i_23 += 1) /* same iter space */
    {
        arr_92 [i_23] = -var_3;
        arr_93 [i_23] [i_23] |= (23367 == -54170);
    }

    for (int i_24 = 0; i_24 < 24;i_24 += 1)
    {
        var_53 = (~39);

        for (int i_25 = 0; i_25 < 24;i_25 += 1)
        {
            var_54 = ((((((var_5 << (var_4 - 11131))) / (((var_0 + 2147483647) << (var_6 - 9928526962777990349))))) >= ((((var_3 ? var_0 : var_12)) * (var_6 == var_0)))));

            for (int i_26 = 2; i_26 < 21;i_26 += 1)
            {
                arr_102 [i_24] [i_24] [23] [i_25] = (((((109 >> (-23352 + 23365))) / ((16427461507421650879 ? -110 : -2114610095)))) / (2114610095 | -1173343672));
                var_55 = ((((((var_0 & var_1) * (var_5 <= var_3)))) % ((16235515767474670615 / (~var_0)))));
            }
            arr_103 [i_25] = ((-(var_13 - var_13)));
            var_56 = (((((var_6 ^ var_8) + var_10)) < ((((((var_11 + 2147483647) >> (var_1 + 17117))) | (var_8 ^ var_8))))));
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 24;i_27 += 1)
        {
            var_57 = var_11;
            var_58 = (min(var_58, ((((var_5 ? var_5 : var_9))))));
        }
        for (int i_28 = 2; i_28 < 22;i_28 += 1)
        {
            var_59 = (((((((var_5 % var_6) > (var_13 + var_0))))) | ((-(var_6 / var_8)))));
            arr_109 [i_24] [i_28] = ((var_1 < (~17102)));
            var_60 |= ((((((var_12 >= var_13) > var_5))) >> (((((var_4 - var_10) - (var_2 - var_6))) - 9928526963832206940))));
        }
        arr_110 [i_24] = (((89 + -105101706) & ((var_1 / (var_8 % var_4)))));
        var_61 = ((var_7 + 2147483647) >> ((((-(var_3 + var_2))) - 416707269)));
    }
    #pragma endscop
}
