/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [4] [i_0 + 1] &= (arr_0 [i_0] [1]);
        arr_3 [i_0] = (1 == var_3);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (max((((arr_5 [i_1] [i_1]) * (arr_7 [i_1]))), (!18446744073709551596)));
        arr_8 [1] |= ((max((arr_7 [10]), (arr_7 [2]))));

        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] [i_4] = (var_13 >> 19);
                    var_17 = (((~(arr_9 [i_1] [i_1]))));
                    arr_17 [i_2] [i_1] [i_2] [1] [i_2] = (((!-1) != (arr_0 [i_4 - 2] [i_2])));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_18 |= (arr_14 [i_1] [1] [i_3] [1]);
                    arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = (!18446744073709551600);
                    arr_21 [i_1] [i_1] [i_3] [i_5] = (!var_8);
                    var_19 |= var_9;
                }
                var_20 = (~18446744073709551591);
                arr_22 [i_1] [i_2] [i_1] = (arr_14 [i_1] [i_1] [12] [i_3]);
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_30 [i_1] [i_2 - 3] [2] [i_1] [i_7] = 1;
                            var_22 = (arr_18 [i_7] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 + 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_36 [i_1] [i_2] [7] [i_1] = var_4;
                        arr_37 [i_1] = arr_9 [i_2 - 3] [i_1];
                        var_23 = ((-620372247 != (min((min((arr_25 [i_1] [i_8] [i_1] [i_1] [i_1] [i_1]), var_6)), var_1))));
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_24 = arr_23 [i_1] [i_1] [i_1] [i_1] [i_10] [i_10 + 1];
            arr_42 [i_1] = ((!(arr_38 [4] [i_10 - 2] [i_10 - 1])));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_25 = (min(((max((arr_18 [i_1] [i_10 - 2] [i_10] [i_10 - 3] [i_11 + 1] [i_12]), ((!(arr_40 [i_13])))))), var_14));
                            var_26 = ((!(arr_10 [i_1] [i_10 - 2] [i_1])));
                        }
                    }
                }
            }
            var_27 |= ((min((arr_40 [i_1]), (arr_13 [16]))));
            arr_52 [i_1] = (min((~-744129331), ((((arr_35 [i_1] [i_10 - 1]) == (arr_0 [i_1] [2]))))));
        }
        for (int i_14 = 3; i_14 < 17;i_14 += 1) /* same iter space */
        {
            var_28 += var_7;
            arr_57 [6] [i_1] &= ((!(((arr_15 [2]) || (arr_29 [i_14] [i_14 + 1] [i_14 - 2] [2] [i_14])))));
            arr_58 [10] [i_1] = (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                arr_65 [i_1] [i_1] [i_1] = (!(arr_1 [i_16]));
                var_29 = (arr_60 [i_15]);

                for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                {
                    arr_69 [i_1] [i_17] [i_16] [i_15] [i_15] [i_1] = var_8;
                    var_30 = (arr_0 [i_15] [i_16]);
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    var_31 = ((!(arr_49 [9] [13] [i_16] [i_16] [i_18])));
                    var_32 = 21975;
                }
                arr_74 [i_1] [i_16] [0] [i_16] |= (arr_18 [i_16] [i_16] [i_15] [i_1] [i_1] [i_1]);

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    arr_77 [i_1] [i_15] [i_16] [i_1] = 1;
                    var_33 = (min(var_33, (!-1779116423)));
                    arr_78 [i_1] [i_15] [i_15] [i_15] [i_1] [i_19] = var_10;
                    var_34 += var_5;
                }
            }
            /* vectorizable */
            for (int i_20 = 3; i_20 < 15;i_20 += 1)
            {
                arr_81 [i_1] [i_20] [i_1] [i_20 - 2] = (arr_27 [i_20] [i_1] [i_1]);
                var_35 = arr_25 [i_1] [i_1] [i_1] [i_15] [i_15] [i_1];
                var_36 &= ((-14655 ^ (-2147483647 - 1)));
            }
            for (int i_21 = 2; i_21 < 17;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 18;i_23 += 1)
                    {
                        {
                            arr_89 [i_1] [i_15] [i_15] [i_21 - 1] [i_22] [i_1] = (((((620372241 == ((min(0, (arr_34 [i_1] [i_1] [i_1] [i_1]))))))) != var_11));
                            arr_90 [i_1] [i_1] [i_21] [i_1] [i_1] = (arr_75 [i_1] [i_1] [i_15] [i_21 - 2] [i_21 + 1]);
                            var_37 = 8852331372587801645;
                            arr_91 [0] [i_1] [i_22] [i_23] = var_12;
                            arr_92 [i_1] [i_1] [i_1] = ((-(arr_53 [i_1] [i_1])));
                        }
                    }
                }
                var_38 |= (max((-127 - 1), 40));
                var_39 |= 15573275577785178474;
            }

            for (int i_24 = 1; i_24 < 15;i_24 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 18;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        {
                            var_40 = (min(var_40, ((min(-744129319, ((max((arr_67 [i_1] [i_15] [i_15] [i_24] [i_24 - 1] [i_24]), 57))))))));
                            arr_100 [i_15] [i_24] [i_1] = (min(var_9, (min(var_15, (arr_83 [i_1])))));
                        }
                    }
                }
                var_41 = (arr_63 [i_1] [i_15] [i_24 + 2]);
            }
            for (int i_27 = 1; i_27 < 15;i_27 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_28 = 0; i_28 < 18;i_28 += 1)
                {
                    var_42 = (var_10 * -41);
                    arr_105 [i_1] [i_15] [9] [i_1] = (arr_5 [i_1] [i_1]);
                    var_43 = (arr_64 [i_1] [i_15] [i_27 + 3]);
                }
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 18;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 18;i_30 += 1)
                    {
                        {
                            var_44 *= (((arr_109 [0] [0]) && (var_13 && 3549477026)));
                            arr_113 [i_1] [i_1] [i_15] = (arr_11 [i_1]);
                            arr_114 [i_1] [i_15] [i_1] = (!var_14);
                        }
                    }
                }
            }
            var_45 = 3549477018;
        }
        for (int i_31 = 2; i_31 < 17;i_31 += 1)
        {
            var_46 = (max(var_46, (((~((745490270 | (~18446744073709551615))))))));
            var_47 = (max(18446744073709551596, (((!(~21))))));
            var_48 += ((~(~var_12)));
        }
    }
    var_49 = (58352 | 4294967262);
    var_50 &= (((~-18446744073709551588) <= (~24959)));
    #pragma endscop
}
