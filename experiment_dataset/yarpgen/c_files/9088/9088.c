/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 >> (((((-75 % 2437) ? (-75 / var_2) : ((34359738367 ? -75 : 50557)))) + 37))));
    var_13 = ((((-(!1068857774))) == var_11));
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 *= (((((19 & (((!(arr_0 [i_0] [i_0]))))))) > ((((((var_10 != (arr_0 [i_0] [i_0]))))) % (arr_0 [i_0] [i_0])))));
        var_16 = var_9;

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_17 = ((-(max(((min((arr_4 [i_1 - 1]), -109))), 15258194170439471097))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 *= 0;
                        var_19 = -8437204114222885288;
                    }
                }
            }
            var_20 = ((((((~(arr_8 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1 + 4]))) + 2147483647)) << (34359738367 - 34359738367)));
            var_21 = (arr_3 [i_0] [i_1]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 ^= var_11;
            var_23 = 15258194170439471093;
            var_24 = (var_2 != 71);
        }
        var_25 = (max(var_25, ((((arr_12 [i_4]) || (-109 || 96))))));

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_26 &= (var_9 < (arr_7 [i_6 - 1] [i_6 + 2] [i_6 + 3]));
            var_27 = ((-8636791680284976120 ^ ((101 ? var_2 : var_8))));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_28 = (arr_19 [i_6 + 3] [i_6 - 1]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_29 = -17647341484188721288;
                            var_30 = (max(var_30, 6144));
                            var_31 = (arr_8 [2] [i_6] [i_7] [i_8] [i_9]);
                        }
                    }
                }
            }
            var_32 = ((var_10 ? (arr_20 [i_6] [14] [14]) : var_10));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_33 = (!0);
            var_34 = 1;

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_35 ^= (var_2 != (arr_17 [i_4] [i_4] [i_4]));
                var_36 = ((var_8 << (((((~9223372036854775807) - -9223372036854775766)) + 83))));
                var_37 = 160;

                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {

                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        var_38 = 59388;
                        var_39 = (~7);
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_40 = -90;
                        var_41 = 18446744073709551596;
                    }
                    for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        var_42 = ((((((arr_7 [i_4] [i_4] [i_4]) * (arr_12 [i_10])))) && ((((arr_23 [10] [i_12] [i_15 - 3]) ? 619304160 : (arr_22 [1] [i_10] [i_11] [i_12]))))));
                        var_43 = (arr_10 [i_15 - 3] [i_15 - 3]);
                    }
                    var_44 = 106;
                    var_45 = 13834005777182653145;
                    var_46 = ((var_11 ? (arr_37 [i_4] [i_11] [1] [1] [i_4]) : var_1));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_47 = -1;
                            var_48 = (((arr_17 [i_16] [i_11] [i_10]) ? (~var_5) : (arr_24 [i_17] [i_16] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            }
            var_49 &= (((-124 + 2147483647) << (15 - 15)));
        }
    }
    #pragma endscop
}
