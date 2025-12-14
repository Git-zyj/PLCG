/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(arr_1 [4])))));
        arr_4 [i_0 - 1] = 9223372036854775807;
        var_12 = ((-(~4294967295)));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_13 |= (max((min((min((arr_6 [i_1]), 1639224468170547010)), (max(var_10, (arr_7 [i_1] [i_1]))))), var_5));
        arr_9 [i_1] [i_1] = (!255);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = ((-(((var_4 + var_5) + 48892))));
            var_15 &= (((min((!48874), var_8)) <= ((((max((arr_5 [1]), var_7))) ? (max(20, var_8)) : var_5))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (((arr_14 [i_3]) ^ (~48873)));
            var_17 = 78;
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_18 [2] [i_4] = var_7;
            var_18 = (max((((((max(16662, -3326)))) + (min(1152917106560335872, (arr_5 [i_1]))))), (((+(((arr_13 [i_4] [i_1] [i_1 - 1]) & 69)))))));
        }
        var_19 = var_11;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_20 -= ((48895 / (max(var_6, 8176))));
        var_21 = ((max(var_6, var_9)));
        var_22 = (max(var_22, ((min(var_6, var_9)))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 &= (46604 + 2411380373);

        /* vectorizable */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_24 = (max(var_24, (~var_10)));
                arr_32 [i_6] [i_7] [i_6] [2] = 6044811655970199474;
                var_25 = ((-65535 + (arr_0 [i_6])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_26 = (var_1 + var_9);
                            arr_39 [i_6] [i_7] [14] [i_6] [i_10] = var_10;
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_42 [i_7] = arr_38 [i_7] [i_11 - 1] [i_11 - 1] [10] [i_7];
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_27 |= 61965;
                            var_28 = -65535;
                            var_29 *= (arr_16 [i_6] [i_7] [i_11]);
                            var_30 = (max(var_30, 236));
                            var_31 = (min(var_31, ((((~var_3) + -239811718)))));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
            {
                arr_52 [i_14] [i_14] [10] &= -168;
                var_32 = ((-((~(arr_25 [i_6] [i_7] [i_7])))));
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_33 = 237;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 14;i_17 += 1)
                    {
                        {
                            arr_61 [i_17] [i_15] [i_15] [i_15] [i_6] &= ((-(((arr_25 [i_6] [i_6] [i_15]) + 4294967295))));
                            arr_62 [i_6] [i_6] [i_6] [1] [i_6] [i_15] [i_6] &= (arr_46 [3] [i_16] [i_15] [i_7] [i_6]);
                            var_34 = (1508604314 & 1883586922);
                            var_35 = var_4;
                        }
                    }
                }
                var_36 = var_1;

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_37 *= (168 + var_3);
                    arr_65 [i_6] [i_7] [i_7] = (var_6 <= 18446744073709551598);
                    var_38 ^= var_9;
                }
            }
            arr_66 [1] &= (arr_20 [i_7 + 1]);
            var_39 = (max(var_39, (arr_44 [i_6])));
        }

        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_40 = (max((var_8 * var_5), (min(2815350880, -1))));
            var_41 = (min((((!var_8) & 217)), ((-(((!(arr_54 [i_6] [i_6] [i_19] [12]))))))));
            var_42 = var_3;
            var_43 *= (max(var_0, var_3));
        }
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 13;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                {
                    arr_77 [7] [i_20] = 48882;
                    var_44 = (0 & 62);
                    arr_78 [i_20] = ((-(((var_0 <= var_11) ? (15670945206758804477 & -62) : (arr_20 [i_21])))));
                }
            }
        }
    }

    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        var_45 = 65535;
        var_46 -= var_3;
    }
    for (int i_23 = 2; i_23 < 15;i_23 += 1)
    {
        var_47 = (max(var_47, (((-1 / (max((arr_6 [i_23 - 2]), -var_4)))))));
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 17;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 15;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 17;i_26 += 1)
                {
                    {
                        var_48 = (min(184, (max(63, 71987225293750272))));
                        arr_97 [i_23 + 1] [i_23 + 2] [i_23] [i_23] = -17293826967149215743;
                    }
                }
            }
        }
        var_49 = 103;
    }
    for (int i_27 = 0; i_27 < 22;i_27 += 1)
    {
        var_50 = ((-(var_3 / 124)));
        var_51 = (arr_99 [i_27] [i_27]);
    }
    #pragma endscop
}
