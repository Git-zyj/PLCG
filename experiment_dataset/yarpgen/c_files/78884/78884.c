/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((var_11 - (-var_12 & var_4)));
        var_13 = var_5;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_1] = ((255 <= -5) + (32760 | var_9));
                        arr_17 [i_1] [i_1] = (((var_4 && var_9) ? 11951 : ((((var_2 && var_10) || 110)))));
                        arr_18 [i_1] [i_2] [i_1] [i_2] = (!var_6);
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = (9223372036854775807 < var_12);
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_5] = -42;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_14 += (var_9 && 9223372036854775807);
                            var_15 = var_6;
                            arr_32 [i_5] [i_5] [i_7] [i_8] [i_5] = ((var_9 ? (var_4 | -512) : var_1));
                            var_16 = var_12;
                            var_17 = (-9223372036854775787 ? 11951 : 508);
                        }
                    }
                }
            }
        }

        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_43 [i_10] [i_12] [i_5] [i_10] = var_0;
                            arr_44 [i_5] [i_10] [i_10] [i_12] [i_12] = ((var_2 ? (((1022693890 - var_9) ? (-512 || -1) : var_8)) : (16381575021405852552 > var_1)));
                        }
                    }
                }
            }
            arr_45 [i_5 - 3] [i_10] [i_10] = ((var_11 ^ var_10) / (18416 | var_11));
            arr_46 [4] [i_5] [4] &= (((((~var_2) + 2147483647)) >> ((((var_10 ? 27802 : var_0)) - 27799))));
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            var_18 = (((var_5 - var_7) | (var_7 <= 252201579132747776)));
            arr_49 [i_5] [i_5] [i_14] = (((((var_2 ? var_2 : var_4))) ? ((11951 ? var_10 : var_9)) : (var_3 || var_0)));
            var_19 = (var_7 ? var_12 : ((var_1 ? var_4 : 126)));
        }
        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            arr_52 [i_5] [i_15 + 1] [i_15 + 1] = (-24249 / -11951);
            arr_53 [i_15] = ((58213 << (121 - 116)));
            var_20 += (var_4 ? ((var_2 ? var_4 : (~var_9))) : ((2064205466937886993 ? 512 : 18797)));

            /* vectorizable */
            for (int i_16 = 2; i_16 < 13;i_16 += 1)
            {
                var_21 = 4542966582901735928;
                var_22 -= var_2;
                var_23 = var_9;
                var_24 = var_11;
            }
            for (int i_17 = 4; i_17 < 16;i_17 += 1)
            {
                var_25 *= (9 || var_8);
                var_26 = var_12;
            }
            for (int i_18 = 1; i_18 < 16;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_27 = var_8;
                            var_28 = var_9;
                            arr_68 [i_5] [i_20] [i_5] [i_5] [i_20] = var_11;
                            var_29 = ((((255 ? 12 : 46738)) == (((var_2 - (84 > var_5))))));
                        }
                    }
                }
                var_30 = 9223372036854775807;

                /* vectorizable */
                for (int i_21 = 2; i_21 < 14;i_21 += 1)
                {
                    arr_73 [i_5] = var_5;
                    arr_74 [i_21] [i_21] = (var_6 + var_10);
                    var_31 = (min(var_31, 16634640086986617340));
                    var_32 = (var_2 <= 1);
                    arr_75 [i_5] [i_15 + 1] [i_18] [i_21 + 2] [i_21] |= var_9;
                }
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    var_33 ^= ((((var_4 ^ -8589934592) / (((var_10 ? var_4 : var_0))))) | (((1 ? (var_7 <= var_5) : (var_2 - var_5)))));

                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        var_34 = (2 - 46739);
                        var_35 = (((var_12 - var_10) + (8602554466277248624 - 3401647586553021390)));
                    }

                    /* vectorizable */
                    for (int i_24 = 1; i_24 < 13;i_24 += 1)
                    {
                        arr_83 [i_24] [i_22] [i_24] [i_15] [i_24] = var_4;
                        var_36 = var_2;
                        var_37 = -22809;
                        var_38 = var_6;
                    }
                }

                /* vectorizable */
                for (int i_25 = 1; i_25 < 16;i_25 += 1)
                {
                    var_39 = (min(var_39, var_3));
                    arr_88 [i_5] [i_5] [i_18] [i_5] = (var_1 < 124);
                    var_40 = var_1;
                }
            }
        }
        var_41 ^= (0 - (var_12 + 1));
        var_42 = 206;
        arr_89 [i_5] [i_5 + 2] = var_10;
    }
    var_43 = var_4;
    var_44 = var_0;
    #pragma endscop
}
