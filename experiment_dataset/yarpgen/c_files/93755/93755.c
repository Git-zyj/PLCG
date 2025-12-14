/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 += max((!var_15), ((-var_5 & ((var_15 ? var_2 : var_1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_18 ^= -94;
                            var_19 = (~var_7);
                            var_20 = var_12;
                            arr_13 [i_0] [i_1] [16] [i_3] [i_3] = -21074;
                        }
                    }
                }
                arr_14 [10] [1] [8] [7] = (~(9625 == 21073));
                var_21 -= var_16;
            }
            var_22 = 21087;
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [i_5] = max((min(21074, (min(var_6, 98)))), var_10);

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_23 = ((var_0 ? ((min((24 ^ -25), ((max(39053, 32756)))))) : var_9));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_24 = ((+(((1261225174 * var_10) + -var_13))));
                            var_25 = var_3;
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    var_26 = ((~(--21088)));
                    arr_33 [i_0] [i_5] = ((~-102) | 18446744073709551615);
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_38 [6] [i_5] [i_5] [i_5] [i_5] [i_5] = (((var_9 ? (max(506598210, 12437103353635629605)) : 9633)));
                    arr_39 [i_0] [i_0] [i_5] = ((((~(var_13 < -6062))) >= ((((min(2629245901, var_12)) < var_2)))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_27 = var_16;
                        var_28 *= (~0);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_29 = ((!(!var_4)));
                        var_30 = ((-((var_12 ? -280610945 : 4285225599))));
                        var_31 = (min(var_31, (!-1475776428)));
                    }
                    arr_50 [i_0] [i_5] [i_5] [i_5] [i_0] = (((-280610937 ^ (max(var_4, var_16)))));
                    var_32 = ((((((!((max(var_8, var_14))))))) <= (max((min(var_9, var_1)), -41))));
                }
                arr_51 [i_0] [i_0] [i_0] [i_5] = ((!(((((min(var_4, var_10))) ? var_1 : var_15)))));
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                arr_55 [i_0] [i_5] [i_14] = (min(53532, ((((~0) || -var_6)))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            var_33 = 268304384;
                            var_34 -= ((!((min(-var_1, var_14)))));
                            var_35 += ((max((min(var_11, var_9), var_15))));
                            arr_61 [i_0] [i_5] [i_14] [i_5] [i_16] = ((((min(454177285, 1)) < 20)) ? (((-(53532 + 14008)))) : ((-(max(3033742122, var_14)))));
                            arr_62 [i_0] [i_5] = ((~((~(var_16 && var_5)))));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                var_36 ^= (var_16 / var_16);

                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    arr_68 [i_18] [i_5] [i_5] [12] = (((max(var_7, -260885966))));
                    var_37 = ((((!var_2) ? -60061 : (var_13 == 215))));
                    arr_69 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] |= 3033742128;
                    arr_70 [i_0] [1] &= (1694761321 || 53532);
                    var_38 = (max(var_38, ((((((min(var_13, var_11)))) | ((-18446603336221196288 * (14003 / 325551240638733986))))))));
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    arr_77 [i_0] [i_5] [i_19] &= var_5;
                    arr_78 [i_5] = (((18446603336221196263 ^ var_3) >> (18446603336221196263 - 18446603336221196238)));
                    arr_79 [1] [i_5] [i_19] [i_5] = -30;
                }
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {
                    arr_84 [12] [i_5] [i_5] [i_21] = 0;

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        arr_87 [16] [i_5] [i_0] [i_19] [i_22] [i_19] [i_19] |= (((var_14 - 250) ? -25635 : (~63)));
                        var_39 &= ((!(var_6 - 48)));
                        arr_88 [i_0] [i_5] [i_19] [5] [i_5] = var_6;
                    }
                    var_40 = 915188525;
                    arr_89 [i_0] [i_5] [i_5] [i_21] = (!126);
                }
                arr_90 [i_5] [i_5] [i_5] = (!-27518);
            }
            arr_91 [i_5] [i_5] = (((var_8 / 1690206266) << ((-(!9223372036854775787)))));
        }
    }
    var_41 = -21074;
    #pragma endscop
}
