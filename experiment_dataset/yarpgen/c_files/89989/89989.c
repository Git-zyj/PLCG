/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (((((var_9 ? 56359 : (max(var_11, var_17))))) ? (((max(var_12, var_12)))) : (max(var_14, ((var_17 ? (-9223372036854775807 - 1) : var_13))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((1028306004 ? 1594 : 56367));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = var_12;
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_4] = (((arr_6 [i_0]) ? (-127 - 1) : (arr_6 [i_0])));

                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_21 = (~18);
                    var_22 = (~var_6);
                    arr_17 [i_0] [i_4] [i_0] = (arr_4 [i_4 - 1] [i_3] [i_4 - 1]);
                    var_23 = ((var_14 && ((((arr_1 [i_0] [i_3]) ? var_4 : (arr_15 [i_0] [i_4 - 2] [i_4] [i_4 - 2]))))));
                    var_24 &= (~-25194);
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_25 = 1;
                    var_26 = (~var_15);
                }
                arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((var_3 ? 16910 : var_8));
            }
            for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_27 = 2;
                var_28 = ((0 ? -25 : 3354353551));
            }
            arr_24 [i_0] [i_3 + 1] [i_0] = var_12;
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_29 = (((var_10 ^ var_16) ? ((((arr_23 [i_8] [i_8]) ? 4230195444 : 3))) : var_7));
                arr_30 [i_8] [i_8] [i_9] = ((-73 ? var_15 : 172));

                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    var_30 = (min(var_30, 72));
                    var_31 &= (arr_0 [i_9]);
                    arr_33 [i_8 - 1] [i_8] [i_10] = (((((arr_31 [i_0] [i_8 + 1] [i_9] [i_8]) - var_0))) ? var_12 : 9176);
                    var_32 = 79;
                }
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    var_33 ^= var_4;
                    arr_36 [i_0] [i_8] [i_8] [i_11 + 1] = (((arr_13 [i_8 + 1] [i_8]) ? (((var_17 == (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : -4179));
                    var_34 *= ((200778271 != (~var_10)));
                    var_35 = (~(~56367));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_41 [i_8] [i_8] [i_9] = (-117 % 1);
                    var_36 = (min(var_36, (((var_17 ? (~var_9) : var_0)))));

                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        var_37 = (((var_13 | 61943) ^ (arr_13 [i_13 - 1] [i_13])));
                        var_38 = (max(var_38, var_0));
                    }
                    arr_44 [i_8] = ((var_1 ? var_13 : (arr_4 [i_8 + 1] [i_8 - 1] [i_9])));
                }
                var_39 = (((var_2 / 44) != var_10));
            }
            arr_45 [i_0] [i_8] = 2;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_40 = (min(var_40, ((((1099478073344 / 3851774563) || (!var_9))))));
                        arr_52 [i_14] [i_14] [i_8] [i_8] = var_11;
                        var_41 *= (~200778275);
                        arr_53 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (var_14 + (arr_25 [i_8] [i_8] [i_15]));
                        arr_54 [i_0] [i_8] [i_8] [i_15] [i_15] [i_8 + 1] = var_13;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 15;i_17 += 1)
                {
                    {
                        var_42 -= (arr_37 [i_8] [i_8] [i_8] [i_8 + 1]);
                        arr_61 [i_0] [i_0] [i_0] [i_8] = ((var_3 ? (((!(arr_35 [i_0] [i_8 - 1] [i_0])))) : -1));
                    }
                }
            }
        }
        for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
        {
            var_43 = ((((((((18446744073709551615 ? 1 : 1))) ? (var_5 ^ var_11) : ((var_0 ? (arr_7 [i_18] [i_18 + 1] [i_18] [i_18]) : (arr_60 [i_18] [i_0] [i_0] [i_0])))))) ? ((((min(72, -110))) ? (var_10 == 56359) : ((var_17 ? -33 : 98)))) : ((-17955 ? 189 : -1))));
            var_44 = (((min((arr_22 [i_18 - 1] [i_18 - 1]), var_4)) + (((min(155, (arr_0 [i_18 - 1])))))));
        }
        arr_64 [i_0] = (98 ? (arr_22 [i_0] [i_0]) : 1);
    }
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_45 = (((~1) ? ((min(var_4, 7518692637276220257))) : (max(732997218, (~13143084368456036318)))));
        arr_69 [i_19] = (min(1, (min((!-31443), (!-2)))));
        var_46 += (arr_38 [i_19] [i_19] [i_19]);
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
    {
        var_47 += ((arr_59 [i_20] [i_20] [i_20] [i_20] [i_20]) ? (((-732997213 + 2147483647) >> (var_7 - 6661550227092796299))) : ((var_10 ? var_18 : (arr_48 [i_20] [i_20]))));
        var_48 = var_11;
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        var_49 -= ((~((((!134152192) && ((min(732997218, (arr_72 [i_21])))))))));
        var_50 = (((((-(~1)))) + ((~(min(2017630233, 16932213686391237224))))));
    }
    var_51 = var_1;
    #pragma endscop
}
