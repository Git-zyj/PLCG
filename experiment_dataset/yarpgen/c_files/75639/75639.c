/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((~((((arr_2 [i_1 - 2]) <= -112)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_20 = (((arr_8 [i_0 + 3] [i_1 - 2] [i_2 + 1]) ? var_14 : var_4));
                        var_21 |= 18;
                        var_22 = (((-1 <= 2147483647) ? -1 : ((var_18 ? 94 : 0))));
                        var_23 = ((-5893859994666054668 ? 27 : -2147483647));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_24 ^= var_5;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_25 = var_8;
                            var_26 = (~(~var_7));
                            var_27 = (max(var_27, (arr_12 [i_1 - 2] [i_2 - 1] [i_4] [i_5])));
                            var_28 -= var_11;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, (arr_4 [i_2 + 1])));
                            var_30 ^= (((((var_12 > (arr_8 [i_2 - 1] [i_1 + 1] [i_0 + 3])))) << (((min(3730660742, (arr_8 [i_2 - 1] [i_1 + 1] [i_0 + 3]))) - 803406872))));
                            var_31 |= (min((-6907987176540394976 / 3730660719), (arr_17 [i_0] [i_1] [i_2] [i_2 + 1] [i_4] [i_4] [i_6])));
                            var_32 |= (((min(52911, var_11))));
                            var_33 = (-1 / -2147483647);
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_34 = ((45 ? 0 : 1046175505368036015));
                        var_35 &= (var_11 % 21254276);
                        var_36 = 2147483647;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_37 ^= 112;
                            var_38 = ((1 ? var_12 : var_18));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_39 = 0;
                        var_40 = var_13;
                    }
                    var_41 = (min((min(var_13, var_10)), (((-8 ? (((-2147483647 - 1) ? 216172782113783808 : 37161)) : 14)))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_42 = (max(var_42, (arr_7 [i_0 + 3])));
                            var_43 = var_16;
                        }
                        var_44 = (arr_15 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_10] [i_10] [i_10]);
                    }
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        var_45 = (((((!(arr_33 [i_0 + 1] [i_1] [i_1] [i_1] [i_2] [i_12 + 1])))) & var_14));
                        var_46 = 28374;
                    }
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_47 = 2032964254;
                        var_48 = (max(var_48, var_3));
                    }
                }
            }
        }
    }
    var_49 = (min(var_49, (((var_12 ? (((18446744073709551613 > (31 >> 0)))) : 1)))));
    /* LoopNest 2 */
    for (int i_14 = 4; i_14 < 9;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            {
                var_50 = (min(var_50, (((((((!var_8) - 2147483647))) ? ((((arr_24 [i_14 + 1] [i_14 + 1] [i_15]) && 564306550))) : var_6)))));
                var_51 = (1 ? var_9 : 4194303);
            }
        }
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_52 += (-33 == 32);

        /* vectorizable */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {

            for (int i_18 = 1; i_18 < 20;i_18 += 1)
            {
                var_53 = -1;
                var_54 = (((~var_0) < 564306586));
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                var_55 = ((-20 | (arr_23 [i_16] [i_17] [i_16] [i_19] [i_19] [i_16] [i_19])));

                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    var_56 |= (arr_21 [i_19]);
                    var_57 &= var_16;
                }
            }

            for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
            {
                var_58 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (var_9 - 442889664)));
                var_59 = (arr_21 [i_17]);
            }
            for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
            {
                var_60 = (((arr_13 [i_16] [i_17] [i_22] [i_22]) % var_17));
                var_61 = (((-3733756804487891234 + 9223372036854775807) << 0));
            }
        }
    }
    #pragma endscop
}
