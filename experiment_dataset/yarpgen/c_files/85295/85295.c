/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (~148);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (!4294967295);
                        var_15 = (min(var_15, (arr_5 [i_0] [i_0] [8])));
                        var_16 = 511;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            var_17 += (!82);
                            var_18 &= ((1 ? -512 : -504));
                            var_19 |= 490;
                            var_20 = 841667143;
                            var_21 = ((3661133355 ? 1 : 3661133361));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 = (max(var_22, 8504069164633127316));
                            var_23 *= var_4;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 ^= (~1);
                            var_25 ^= 4294967295;
                            var_26 = (~-841667147);
                            var_27 = var_3;
                        }
                        var_28 &= 3086815430;
                        var_29 = (max(var_29, var_10));
                        var_30 = (max(var_30, 3));
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_31 ^= (((arr_12 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_8 + 1]) & (arr_12 [i_0 + 1] [0] [i_2 - 1] [i_8 + 1])));

                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            var_32 = var_11;
                            var_33 = (var_5 % 3500410581);
                            var_34 &= 1;
                        }
                    }
                    var_35 ^= (498 - 841667149);
                    var_36 &= ((~(arr_13 [6] [6] [6] [i_2 + 1])));
                }
            }
        }
        var_37 &= ((((arr_4 [i_0]) ? 841667153 : var_0)));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_38 = (min(var_38, ((((((~(((3770838342 || (arr_26 [3] [3]))))))) ? ((var_8 ? var_11 : 9942674909076424292)) : (!8504069164633127318))))));
        var_39 = ((((((min(var_6, var_11)) - (arr_25 [1] [13])))) % (var_4 + var_4)));
    }
    var_40 = (max((((min(2, var_10)))), (((max(var_9, var_3)) >> (236 + 27)))));

    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_41 = ((((max(var_5, var_7))) ? (min(((min(19, 1))), (min(201, var_8)))) : ((max((var_11 | 161), (arr_31 [i_11] [i_11]))))));
        var_42 = (min((max(var_9, -1)), (37 != 27)));
    }
    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        var_43 = 2369677641;
        var_44 = (((var_5 || var_2) ? (min(0, var_6)) : ((((arr_35 [i_12 - 2] [i_12 - 2]) - (arr_32 [i_12 - 1]))))));

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_45 *= ((~(max(var_8, (arr_33 [i_12 - 1])))));
            var_46 = (!(1 - 16));
        }
        for (int i_14 = 3; i_14 < 23;i_14 += 1)
        {
            var_47 = 184;

            for (int i_15 = 0; i_15 < 0;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                {
                    var_48 = ((!((max(var_6, 204)))));
                    var_49 = (min(((max(28, 23))), (max(6968418812202931986, 1))));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                {
                    var_50 = (max(var_50, var_7));
                    var_51 -= ((~(~var_7)));
                    var_52 ^= (arr_32 [i_12 - 1]);
                }

                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    var_53 = var_2;
                    var_54 ^= max(var_4, ((min(184, 3086815445))));

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_55 -= 511;
                        var_56 = (~3086815430);
                        var_57 = ((var_5 << (((arr_41 [i_12 - 2] [i_14 + 1]) - 831060305))));
                        var_58 = (max(var_58, 255));
                    }
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                {
                    var_59 = (min(var_59, ((min((((1608809609 ? 151 : 151))), 17)))));
                    var_60 = -var_2;
                    var_61 = (121 + 633833943);
                    var_62 = (min(var_62, 0));
                }
                for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                {
                    var_63 = (-31 ^ 55);
                    var_64 = 1;
                }
            }
            var_65 = (min(var_65, ((max(7, 57)))));
        }
    }
    var_66 = var_9;
    #pragma endscop
}
