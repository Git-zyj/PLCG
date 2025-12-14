/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1804807862;
    var_16 = var_8;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = max(var_10, ((var_13 << (((arr_0 [i_0 + 1]) - 279466389)))));
        arr_3 [i_0] = ((((min(((max(var_5, -13))), 3380225305))) / ((13 ? ((2490159424 ? var_9 : (arr_2 [i_0]))) : (max(var_8, 13326))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_18 = ((((arr_5 [i_0 + 1] [1] [i_0 + 1]) ? var_8 : var_4)));
            arr_6 [i_0] = (((((18 ? var_1 : -13317))) ? ((max(1, var_13))) : (((((18446744073709551615 ? var_12 : (arr_0 [i_0 - 1])))) ? var_14 : (~7)))));
            var_19 = (190 <= 250);
        }
        var_20 += ((max(var_9, 61)));
        var_21 = 13320;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_22 = ((-(arr_9 [i_2 - 1])));
        var_23 = 2625842421007728017;
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 = -914741990;
                                var_25 = (((var_12 ? var_11 : var_10)));
                                var_26 &= ((var_6 ? ((((min(var_0, 3824764880135108901))) ? ((var_11 ? var_1 : 8738867910461614827)) : (((var_1 ? (arr_11 [i_4]) : (arr_17 [10])))))) : var_7));
                            }
                        }
                    }
                    arr_26 [i_5] [i_4] [i_4] [i_3 + 1] = 119;
                    var_27 = ((((max(2085585780, ((var_14 ? var_5 : (arr_17 [i_4]))))) + 2147483647)) >> (((min(-111, (arr_13 [i_3] [i_3 - 1]))) + 1376251470956892933)));

                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_28 = (arr_31 [i_3 + 1] [6] [i_4]);
                            var_29 = (var_8 <= 2490159400);
                            var_30 = (min(-16383, ((((var_1 ? (arr_23 [i_3] [i_4] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : var_1)) >> (((arr_22 [i_3 + 3] [i_3] [i_3 + 1] [i_3]) - 15846359859282110937))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_31 = (((((arr_22 [i_8 + 2] [i_8 - 3] [i_8 - 1] [i_8]) + 2147483647)) << (((!((max(1610509632, 87))))))));
                            var_32 += 2684457659;
                            var_33 |= (min((var_7 + var_1), var_5));
                            var_34 = (max(var_34, var_1));
                            var_35 = (var_0 == -5738);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_36 = (((arr_24 [22] [i_11] [22] [i_3 + 1]) ? var_2 : (arr_24 [i_3] [i_8] [i_3] [i_3 + 1])));
                            var_37 = (-4185417729 * var_13);
                        }

                        for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                        {
                            var_38 = -31462;
                            var_39 = ((!((min((min(var_8, var_1)), (arr_20 [i_3] [i_3 - 1]))))));
                            var_40 *= (((((var_9 ? 1208 : (arr_27 [4] [i_4])))) ? var_3 : (((var_3 % -725481135) | var_14))));
                            var_41 = -13;
                            var_42 = (((var_5 ? (arr_37 [i_3] [i_3] [i_8] [i_12]) : (((arr_37 [i_12] [i_4] [i_4] [i_4]) ? var_12 : var_8)))));
                        }
                        for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                        {
                            var_43 = (-((var_14 ? var_3 : var_10)));
                            var_44 = ((((-((4294967291 ? var_2 : var_8)))) + var_12));
                        }
                        arr_40 [i_3] [i_3] [i_5] [i_4] [i_5] [i_8] = var_5;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_45 &= ((-((((-17 ? -16 : 0)) - 4653041329894772371))));
                        var_46 = (max(((2238670379 ? 9 : 1804807871)), (var_13 * 1)));
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (max(((min((0 * 28150), ((-14 ? 2490159431 : 37387))))), var_1));
                        var_47 += var_3;

                        for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_48 ^= (!-29);
                            var_49 = -6809;
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_50 = 24059;
                            var_51 = var_12;
                            arr_52 [i_3] [i_3] [i_5] [i_15] [i_4] = 53618;
                        }
                        var_52 = var_7;
                    }
                    for (int i_18 = 1; i_18 < 23;i_18 += 1)
                    {
                        arr_55 [i_3] [i_4] = ((var_6 ? var_3 : (((~((0 << (32767 - 32749))))))));

                        for (int i_19 = 4; i_19 < 22;i_19 += 1)
                        {
                            var_53 = (max((arr_56 [i_19 - 2] [i_19 + 2]), ((var_1 != (arr_56 [i_19 - 1] [i_19 - 2])))));
                            var_54 = (((((arr_53 [i_18] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1]) != (arr_37 [i_3 + 1] [i_18 - 1] [i_19 - 1] [i_19 - 1]))) ? (((((var_11 | (arr_44 [i_4] [i_4] [i_4])))))) : (var_11 / var_9)));
                            var_55 = (((((-843249025 ? 9223372036854775794 : 24065)) >= ((var_1 ? -1127719922 : var_6)))));
                            var_56 = (-86584280 + 1);
                        }
                        for (int i_20 = 1; i_20 < 23;i_20 += 1)
                        {
                            var_57 &= var_8;
                            var_58 = 2684457659;
                            arr_61 [i_4] [i_4] = (~var_4);
                        }
                        var_59 = var_14;
                    }
                }
            }
        }
    }
    var_60 &= (((~(var_7 | var_8))) != var_2);
    #pragma endscop
}
