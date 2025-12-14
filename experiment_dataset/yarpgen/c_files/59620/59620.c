/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((min(((var_6 ? var_0 : var_4)), var_3)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-var_7 ? ((-(arr_0 [i_0 + 3] [i_0 + 3]))) : ((((arr_1 [i_0 + 2]) != var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = var_0;
                                var_18 -= (((((((((arr_8 [i_3]) ? var_9 : (arr_6 [i_0] [i_1] [i_2])))) ? (max(var_5, var_6)) : var_9))) ? (~var_4) : ((-((max(-115, 0)))))));
                                arr_12 [i_2] = var_2;
                                var_19 ^= (((var_5 ? var_14 : (arr_9 [i_2]))));
                            }
                        }
                    }
                    var_20 = var_1;
                    var_21 = (((((-927523601 ? 964939919369555007 : (arr_10 [i_0 + 2])))) ? ((var_14 ? var_11 : var_0)) : (((var_14 ? var_10 : (arr_10 [i_0 + 2]))))));
                    var_22 &= (max(((max((arr_8 [i_0]), (min((arr_3 [i_0] [i_1]), var_1))))), ((-((2473122490 ? 35 : 18010000462970880))))));
                    var_23 = (min(var_23, var_3));
                }
            }
        }
        arr_13 [i_0] [i_0] = var_8;

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_24 += ((((!var_9) ? (((arr_6 [i_0 + 3] [i_0] [i_5]) ? (arr_5 [i_5] [1]) : var_11)) : var_3)));
            var_25 = var_2;
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
        {
            arr_19 [i_6] = var_13;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_26 = (((var_12 ? var_1 : (arr_5 [i_6] [i_6 + 1]))));
                        arr_26 [i_8] |= var_9;

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_27 = var_2;
                            var_28 = (max((((var_2 <= ((var_10 ? var_10 : var_7))))), var_9));
                            arr_29 [i_8] [i_8] [i_6] = ((var_2 ? 5293 : 7));
                        }
                        var_29 = ((((~var_2) ? var_13 : var_12)));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
        {
            arr_33 [i_10] = var_1;

            for (int i_11 = 3; i_11 < 11;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_30 = ((!(((-28068 ? 11251631663408839293 : (arr_34 [i_11] [i_11 - 2] [i_10 + 3] [i_0 + 2]))))));
                    arr_39 [i_10] = (((((~((var_3 ? var_10 : (arr_35 [i_0] [i_10 + 1] [i_10])))))) && (((((var_8 + 9223372036854775807) << (var_15 - 3366360027263042360))) == var_0))));
                    var_31 = (max(-var_13, (((var_5 ? var_12 : var_6)))));
                    var_32 = (min((((var_5 ? ((var_5 ? 32623 : 1755707644)) : var_10))), (max(var_4, var_7))));
                }

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_33 = (min(var_33, ((((!var_12) ? -1 : var_2)))));
                    arr_43 [i_0 + 3] [i_0 + 3] [i_11] [i_0] [i_0] [i_10] = var_9;
                }
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        arr_52 [i_0] [i_0] [i_14] [i_15] [i_10] = ((+(((arr_5 [i_0 + 2] [i_10 - 1]) ? (arr_7 [i_0 + 1] [i_10 + 2] [7] [i_15] [i_16]) : (arr_38 [i_10] [i_10 + 3] [i_10 + 3] [i_10] [i_10 - 1] [i_10 - 1])))));
                        var_34 *= ((+((var_15 ? (arr_15 [i_0 + 1]) : var_14))));
                        arr_53 [i_0 - 2] [i_10] [i_14] [i_15] [i_16] = ((var_8 ? (arr_20 [i_0] [i_10 + 2]) : (arr_0 [i_10 + 2] [i_0 + 3])));
                    }
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_35 = (391715008 ? (-131071 >= 0) : var_8);
                        var_36 = (!1);
                        var_37 -= var_15;
                    }
                    var_38 = (min(var_38, var_11));

                    for (int i_18 = 4; i_18 < 9;i_18 += 1)
                    {
                        var_39 = var_7;
                        var_40 = (!var_11);
                        var_41 = (((max(1, 2029110181150419215)) > ((((var_9 ? var_7 : var_8))))));
                    }
                    arr_59 [i_10] [i_10] [i_10] = (~var_0);
                }
                var_42 = (max(var_42, ((((((var_1 ? (!var_4) : ((var_0 ? var_14 : var_2))))) ? ((((var_8 ? var_12 : (arr_9 [9]))))) : (~var_10))))));
                arr_60 [i_0 - 1] [i_10] [i_14] = (arr_41 [i_0]);
                arr_61 [i_0] [i_10] = ((((((((var_15 ? var_11 : var_5))) ? var_8 : (!var_1)))) ? (((arr_50 [i_10 + 1] [i_10] [i_14] [i_14] [i_10] [i_10 + 2] [i_14]) ? var_14 : -var_9)) : (~938158102)));
                arr_62 [i_10] = ((var_0 ? var_13 : (max((var_14 || var_6), ((var_15 ? var_13 : var_15))))));
            }
        }
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            var_43 |= var_7;
            var_44 = var_5;

            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                var_45 = (!1);
                arr_67 [i_0] [i_0] [i_19] = (~(((var_6 * var_10) ? var_6 : var_3)));
                arr_68 [i_19] [i_20] = (!-var_10);
                var_46 -= ((var_15 ? var_10 : ((-37 ? 3903928783277731853 : 6917310091662855514))));

                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    arr_73 [i_0 + 3] [i_19] = var_3;
                    var_47 |= ((((((var_3 ? var_5 : var_3)))) ? (((arr_55 [i_0 + 2] [i_0 + 2] [i_19] [i_19 - 1] [i_19 - 1]) ? ((var_2 ? (arr_34 [i_0] [i_0] [i_20] [i_0]) : var_14)) : ((((-127 - 1) != 16444))))) : var_9));
                    arr_74 [i_0 - 2] [1] [1] [i_19] = (~-var_11);
                }
                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    arr_78 [i_19] = (((((arr_38 [i_19] [i_19] [i_19 - 1] [i_22] [i_22] [i_22]) ? var_4 : var_4)) > ((max(var_10, (arr_38 [i_0] [i_19 + 1] [i_19 - 1] [i_22] [i_22] [i_22]))))));
                    arr_79 [i_22] [i_19] [i_19] [i_0] = (((var_14 ? var_15 : -var_14)));
                    var_48 = (max(var_48, (((-((-(arr_15 [i_22]))))))));
                }
                for (int i_23 = 1; i_23 < 11;i_23 += 1)
                {
                    arr_83 [i_20] [6] [i_19 + 1] [i_20] &= (~var_8);
                    var_49 ^= var_3;
                    arr_84 [i_0] [i_19] = var_10;
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 20;i_24 += 1)
    {
        arr_87 [i_24] [i_24] = ((~(((arr_86 [i_24]) ? ((var_10 ? var_5 : var_9)) : -var_10))));
        arr_88 [i_24] = -10392770299100094176;
    }
    #pragma endscop
}
