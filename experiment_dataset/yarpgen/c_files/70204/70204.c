/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1 / 1899059296791708473);
    var_21 = ((-1899059296791708472 * (((((-1899059296791708490 < -22519) == (1899059296791708475 == 22518)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = 1;

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] = (((-5102099182733239211 + 186) != (1899059296791708474 != 1495767304)));
                        arr_10 [i_3] [0] [i_0] [i_1] [i_0] = 33838;
                    }
                    var_23 = (min(var_23, 118));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_24 += (((((-22519 + 2147483647) >> 1)) * (554712092358738761 <= 65535)));
                                var_25 += (((37 % 1) << (-108 != -1)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        var_26 = (max(var_26, (34 || 0)));
                        arr_25 [i_0] [i_7] = ((-1 || (1 || -119)));
                    }
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, ((((9 || 4113373331386524053) | (1 * 7141025796825465353))))));
                            arr_33 [i_7] [i_7] [4] [i_7] [i_9] [i_10] = 1;
                            arr_34 [i_7] [i_7] = (((18446744073709551615 || 20540) < -2013905445));
                        }
                        for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_11] [i_7] [i_7] [i_6] = (1 || (((16 >> (221 - 214)))));
                            arr_38 [i_7] [i_6] [5] [i_9] [i_11 + 1] = 1;
                            arr_39 [i_7] [i_6 + 1] [i_7] = 1;
                        }

                        for (int i_12 = 4; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [6] = ((1104211377 < (1663613367925411981 >= 1)));
                            var_28 = (min(var_28, 7981133541595326394));
                        }
                    }
                    arr_43 [3] [i_7] [i_7] [i_0] = 24289;
                    var_29 += 8112734912906056403;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        arr_52 [i_0] [i_0] [i_0] [12] [i_15] = (65535 && -24290);
                        arr_53 [i_0] [i_0] [i_15] [13] [i_14] = 0;
                        var_30 = 65140;
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 12;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_64 [i_16] [i_17] [i_18] = 1;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_31 = (((36513 | 4294967295) + ((0 - (32767 | 7981133541595326394)))));
                                arr_69 [i_20] = 207;
                                arr_70 [i_16] [i_16] [i_20] = 22260;
                            }
                        }
                    }
                    arr_71 [i_17] = (1 || -1);
                    arr_72 [i_16] [i_17] [i_18] = 1;
                }
            }
        }
        var_32 = 65535;
        var_33 = (min(var_33, 15));
        var_34 ^= (-117 / 13890849197630167698);
    }
    var_35 = 1;
    #pragma endscop
}
