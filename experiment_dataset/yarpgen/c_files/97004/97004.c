/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (min(var_18, ((max(((~(max(var_4, var_14)))), ((((5749121765905846031 + 0) || (14191609456219571894 >= -37)))))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_19 ^= (var_12 ^ var_9);
                    arr_11 [i_0 + 2] [i_1] [13] [i_3] [i_1] &= var_12;
                }
                var_20 = var_5;
            }
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                var_21 -= var_8;
                var_22 = (max(var_22, (var_5 - var_6)));

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, var_13));
                    var_24 = ((((-var_8 > (((max(var_9, var_7)))))) ? (min((var_14 & var_6), (max(var_4, var_0)))) : (((-((var_10 ? var_17 : var_9)))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 ^= (((var_3 ? var_6 : var_11)) % (var_10 != var_17));
                        var_26 = var_6;
                        var_27 = var_13;
                        arr_21 [i_4] = ((!(!var_2)));
                        var_28 = (((-var_13 + 2147483647) >> (-var_3 + 19493)));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_29 ^= (max((((((-76 ? 76 : 129)) << (((min(var_4, var_17)) - 8842))))), -var_0));
                        var_30 = (max(var_30, ((((max((var_9 + var_11), var_2)) << ((((max(var_6, var_4))) - 2463550732)))))));
                        var_31 = -var_5;
                    }
                    arr_26 [i_4] [i_4 + 3] [i_1] [i_4] = ((min((!var_11), (var_6 / var_15))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, var_1));
                    var_33 = (max(var_33, (max(((min((min(var_3, var_10)), (!var_17)))), ((-((max(var_1, var_7)))))))));
                    var_34 = (min(((min((var_0 > var_1), (!var_5)))), (((((var_17 ? var_6 : var_13))) ? (67 / 9223372036854775801) : var_0))));
                    var_35 = ((((max(-var_11, var_6))) ? (!var_5) : (!-56)));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, (max((max(((min(var_17, var_7))), ((var_2 ? var_6 : var_12)))), ((min((~var_1), (var_1 * var_9))))))));
                    var_37 |= ((((max(var_7, var_4))) & var_8));
                    var_38 = (((max(var_9, (var_1 + var_2))) / (((((var_5 ? var_6 : var_12))) ? ((max(var_17, var_13))) : (var_17 & var_17)))));
                }
                var_39 += ((~((~((min(var_7, var_12)))))));
            }
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            var_40 = var_12;

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_41 -= (~var_2);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_42 = ((!(!var_2)));
                            var_43 = (((var_15 < var_8) | var_17));
                        }
                    }
                }
                arr_45 [i_0] [14] [3] = ((-(var_10 & var_14)));

                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    arr_49 [i_0 + 1] = ((-(!var_10)));
                    var_44 = (var_1 == var_16);
                    var_45 = (((var_15 / var_0) - (!var_10)));
                    var_46 = (min(var_46, var_10));
                    var_47 = (((((var_3 ? var_17 : var_2))) == var_5));
                }
                for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    var_48 = (max(var_48, (!var_3)));
                    var_49 = (~16);
                    arr_52 [i_0 - 2] [i_10] [i_11] &= ((((var_15 ? var_2 : var_7))) & (~var_4));
                    var_50 = (min(var_50, (((!(((var_6 >> (var_14 + 33)))))))));
                }
                for (int i_16 = 2; i_16 < 19;i_16 += 1) /* same iter space */
                {
                    var_51 = (max(var_51, (var_5 | var_11)));

                    for (int i_17 = 1; i_17 < 20;i_17 += 1) /* same iter space */
                    {
                        var_52 = (min(var_52, (var_10 == var_7)));
                        arr_57 [i_11] [i_11] [i_11] [i_11] [i_10] |= 4199949913;
                        var_53 = -var_11;
                        var_54 = ((!(!var_5)));
                        var_55 = (min(var_55, var_1));
                    }
                    for (int i_18 = 1; i_18 < 20;i_18 += 1) /* same iter space */
                    {
                        var_56 = var_16;
                        arr_62 [i_0] [i_10] [i_11] [i_16 - 1] [i_18] [i_0] [i_0] = (-var_5 && var_10);
                        var_57 = (((!0) * var_9));
                    }
                    for (int i_19 = 1; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        arr_67 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1] = ((!(var_0 & var_6)));
                        arr_68 [1] [i_10] [i_10 + 4] [i_10 + 4] [i_19] [i_10 + 1] = (!var_15);
                    }
                    arr_69 [i_0] [i_0 - 2] [i_10] [i_11] [i_16] [i_0 - 2] = ((~(~var_2)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                {
                    var_58 = (min(var_58, ((min((!var_14), (!var_7))))));
                    var_59 = max(((min((min(var_0, var_5)), (~var_11)))), (max((max(var_14, var_15)), var_0)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {

        for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
        {
            var_60 = (min(var_60, ((!(((var_10 ? var_5 : var_5)))))));

            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                var_61 = (max(var_61, -var_1));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 12;i_26 += 1)
                    {
                        {
                            var_62 = (max(var_62, (((!(var_13 % var_11))))));
                            arr_92 [i_22] [i_23] [i_24] [i_25] [8] = (var_1 | var_0);
                        }
                    }
                }
                var_63 = (min(var_63, var_13));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 13;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        {
                            arr_99 [i_23] [i_24] = 31;
                            var_64 += (!var_6);
                            var_65 = (min(var_65, ((((!var_16) != var_12)))));
                        }
                    }
                }
            }
        }
        for (int i_29 = 0; i_29 < 13;i_29 += 1) /* same iter space */
        {
            var_66 = -var_6;
            var_67 = ((!(var_8 == var_1)));
        }

        for (int i_30 = 0; i_30 < 13;i_30 += 1)
        {
            var_68 = (var_0 >= var_12);
            var_69 |= (((var_4 >= var_2) != ((var_0 ? var_8 : var_0))));
            var_70 ^= (var_8 == var_15);
        }
        var_71 = (~var_3);
        /* LoopNest 3 */
        for (int i_31 = 2; i_31 < 12;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 13;i_32 += 1)
            {
                for (int i_33 = 3; i_33 < 11;i_33 += 1)
                {
                    {

                        for (int i_34 = 1; i_34 < 11;i_34 += 1)
                        {
                            arr_116 [10] [i_33] [i_32] [i_33] [i_34] = ((((var_16 ? var_10 : var_10)) != var_1));
                            var_72 = (min(var_72, (~var_15)));
                            arr_117 [i_22] [i_33] [i_32] [i_33 - 1] [i_34] = (60 >= var_12);
                        }
                        for (int i_35 = 0; i_35 < 13;i_35 += 1)
                        {
                            var_73 = (var_6 || var_11);
                            var_74 = (((var_2 ? var_15 : var_16)));
                            var_75 += -var_17;
                            var_76 = ((!(-33 && 2674492339)));
                        }
                        var_77 &= ((var_2 - (!var_12)));
                        arr_121 [5] [i_33] = (!-var_12);
                        var_78 = (!var_14);
                    }
                }
            }
        }
    }
    var_79 = (max(var_15, (((((var_1 << (var_11 - 75))) >= (~var_14))))));
    var_80 = (min(var_80, (((((max((var_0 / var_10), (var_9 || var_7)))) ? ((min(-27, -69))) : (((var_2 < var_12) ? var_17 : (!var_8))))))));
    #pragma endscop
}
