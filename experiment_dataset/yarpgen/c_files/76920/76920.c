/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= (((((1800934617 ? 0 : 26))) ? (max(181, (max(23, 3537372798627547575)))) : (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3 - 3] [i_4] [7] [i_0] = 0;
                                arr_15 [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] [i_4] = var_2;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] = 2;
                    arr_17 [i_0] [i_0] [i_0] = (arr_3 [i_2] [i_1] [i_0]);
                }
            }
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_15 = (-17 && 137438920704);
                            arr_30 [i_5] [i_5] = -1601730126;
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_16 = ((~(arr_18 [i_0] [i_0] [i_0])));
                var_17 = (((arr_22 [i_5] [i_0]) ? 13886 : 1));
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
            {
                var_18 = ((14 ? -110 : 1));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_19 ^= (arr_18 [i_5] [i_11] [i_12]);
                            var_20 = (max(var_20, ((((26 - 18248) - 32753)))));
                            var_21 ^= (arr_5 [i_0] [i_5] [i_10 - 1] [i_12]);
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_22 = ((-(arr_0 [i_13 + 1])));
                            var_23 = (max(var_23, (((~((var_3 ? var_8 : -32754)))))));
                            arr_49 [i_15] [i_15] [i_14] [i_13] [i_15] [i_0] = (!18);
                            var_24 = (arr_41 [i_0] [i_5] [i_15] [i_13 + 1] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_25 = (((((arr_0 [i_13 - 2]) ? 65519 : (arr_0 [i_13 + 1]))) - (((((1 ? 56910 : -3711305631966969710))) ? 8 : ((var_6 ? (arr_55 [i_0] [i_5]) : 2))))));
                            arr_56 [i_0] [i_0] [i_0] [i_13] [i_16] [i_17] = (arr_13 [i_5] [i_13] [i_16] [2]);
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        var_26 = ((!((min(65533, 18446744073709551605)))));
        var_27 ^= (min(1, 6043));

        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            var_28 ^= (max((((((1431263218 ? var_9 : 1619218622))) ? ((var_10 ? 1 : var_11)) : (1 < 1))), (2147483642 == 14670)));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 7;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        {
                            var_29 = ((65533 ? 42242 : 23312));
                            var_30 = (min(var_30, 13148110195433931899));
                            arr_71 [i_18] [i_18] [i_20] = 0;
                        }
                    }
                }
            }
            var_31 ^= var_3;
            var_32 = (((arr_41 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]) ? 36028797018963967 : 399048354744316104));
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            var_33 ^= ((16 ? (arr_39 [i_23] [i_18 - 1] [i_23] [i_18 - 1] [i_18]) : (1 + 10550)));
            var_34 = (((arr_46 [i_18] [i_23 - 1] [i_18 - 1] [i_23] [i_23 - 1]) ? 19281 : (arr_46 [i_23] [i_23 - 1] [i_18 - 1] [i_23] [i_23])));
        }
        var_35 = (474903780 * 7);
        var_36 ^= (!(((9223372036854775807 ? -66 : 23414))));
    }
    var_37 ^= var_3;
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 17;i_25 += 1)
        {
            {
                arr_80 [i_24] [i_25] = ((((min(1, 14673))) ? ((8064 ? ((1 ? 1 : var_9)) : (arr_77 [i_24]))) : ((var_8 ? 17 : ((max(-6, 8078)))))));
                arr_81 [i_24] = (~(!-1518029263));
            }
        }
    }
    #pragma endscop
}
