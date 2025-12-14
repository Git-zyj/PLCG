/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [2] [i_0] [i_0 + 2] = (~var_2);
                        arr_11 [17] [i_0] [i_3] = var_17;
                        var_18 = (-6985 / 1818457132);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_19 -= ((var_10 & ((var_12 ? var_7 : var_2))));
                    var_20 = var_9;
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_21 [i_7] [i_5] [i_4] [i_0] = (var_1 / var_14);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = (((((var_12 ? var_5 : var_14))) ? ((var_1 ? var_11 : var_12)) : ((var_16 ? var_11 : var_11))));
                        var_22 |= ((var_8 ? (!var_2) : var_16));
                        arr_24 [i_0] [4] [1] [i_7] [14] = ((!(((var_8 ? var_4 : var_1)))));
                    }
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_23 = ((1243993587 ? 1 : 1249265598718316556));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_30 [i_0] [i_4] [i_5] [i_4] [i_4] [i_10] &= ((var_9 ? ((1249265598718316556 ? -1 : 17197478474991235059)) : (var_12 > var_17)));
                        var_24 = (((~var_12) <= var_0));
                        var_25 = (max(var_25, var_13));
                        var_26 = (max(var_26, ((((!var_11) ? (var_8 != var_17) : (!var_14))))));
                    }
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        arr_34 [7] [i_4] [16] [i_5] [i_9] [i_9] [i_11 + 1] = ((-var_1 ? (var_11 <= var_8) : var_10));
                        var_27 = var_7;
                    }

                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        var_28 = var_15;
                        var_29 = (((((var_12 ? var_12 : var_16))) ? var_15 : ((var_16 ? var_8 : var_4))));
                        arr_37 [i_12] = ((var_11 ? (!-71) : ((var_0 ? var_10 : var_3))));
                    }
                    for (int i_13 = 4; i_13 < 23;i_13 += 1)
                    {
                        arr_40 [i_13] [i_9] [i_5] [i_4] [12] [12] = ((!(((var_10 ? var_13 : var_11)))));
                        arr_41 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_0 + 3] [i_0] = (((18446744073709551606 != -113) & ((var_11 ? var_6 : var_8))));
                    }

                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [12] [i_0] [i_0] |= var_0;
                        var_30 -= var_5;
                        var_31 = ((var_8 ? (((var_16 ? var_11 : var_5))) : ((12728839425044737110 ? 4 : 5686634239881853189))));
                        var_32 -= ((-(var_6 <= var_0)));
                        var_33 ^= (((var_3 ? var_6 : var_1)) - var_7);
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        var_34 = ((-var_10 ? var_6 : var_5));
                        arr_47 [i_0 + 3] [i_4] [i_5] [i_9] [i_15] = ((-var_14 * (var_0 <= var_4)));
                        var_35 = (max(var_35, (((9 ? -5686634239881853185 : (!5686634239881853182))))));
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                    {
                        var_36 = (max(var_36, var_3));
                        var_37 ^= var_3;
                        var_38 = var_0;
                        var_39 = (min(var_39, (((((var_8 ? var_5 : var_12)) - (var_11 < var_13))))));
                    }
                    for (int i_17 = 1; i_17 < 20;i_17 += 1)
                    {
                        arr_54 [i_4] [i_17] [i_4] = ((var_12 ? var_11 : -var_11));
                        var_40 = (!5686634239881853189);
                    }
                    var_41 |= ((!(((var_16 ? var_1 : var_10)))));
                }
                var_42 = ((((var_10 ? var_12 : var_14)) - ((var_9 ? var_12 : var_15))));

                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_43 = var_10;

                    for (int i_19 = 2; i_19 < 21;i_19 += 1)
                    {
                        var_44 = ((!(0 * 1914301624)));
                        var_45 ^= (((((var_12 ? var_16 : var_17))) != var_8));
                        var_46 = (min(var_46, (((var_4 ? var_16 : ((var_4 ? var_11 : var_13)))))));
                    }
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        var_47 = ((5686634239881853189 ? 32370 : 5686634239881853185));
                        var_48 |= (var_2 != -32370);
                        var_49 = (~var_9);
                        var_50 -= (((((var_8 ? var_4 : var_3))) ? var_12 : (var_11 - var_11)));
                        var_51 = (((((var_3 ? var_3 : var_14))) ? var_2 : ((var_1 ? var_8 : var_2))));
                    }
                }
            }
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                var_52 = ((((var_16 ? var_13 : var_10)) ^ -var_17));
                var_53 = var_12;
                arr_65 [i_4] = var_4;
            }
            arr_66 [i_0] [i_0] = var_14;
            var_54 -= -255;
            var_55 = (max(var_55, (((5686634239881853189 ? 18637 : 2147483647)))));
        }
        for (int i_22 = 1; i_22 < 23;i_22 += 1)
        {

            for (int i_23 = 1; i_23 < 23;i_23 += 1)
            {
                var_56 = ((((!(-2147483647 - 1))) && (!-5686634239881853185)));
                var_57 &= var_10;
            }
            var_58 = var_14;
            var_59 += (-5686634239881853194 / 16383);
            var_60 = (max(var_60, var_3));

            for (int i_24 = 3; i_24 < 23;i_24 += 1)
            {
                var_61 = var_11;
                var_62 -= var_17;
                arr_74 [i_24] [i_22] [i_24] = (-16293 ^ 2097151);
            }
        }
    }
    var_63 ^= var_5;

    for (int i_25 = 0; i_25 < 15;i_25 += 1)
    {

        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {
            var_64 *= ((-(((~var_5) * (!var_4)))));
            var_65 = (27516 ? -1 : 1249265598718316556);
        }
        arr_80 [i_25] [i_25] = var_4;
    }
    #pragma endscop
}
