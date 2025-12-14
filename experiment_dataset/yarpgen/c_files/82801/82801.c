/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_16 -= ((arr_2 [i_0]) ? (((arr_1 [i_1 - 2] [i_1 + 1]) ? (arr_1 [i_1 - 1] [i_1 - 2]) : 1)) : ((var_6 ? (arr_1 [i_1 - 1] [i_1 - 1]) : 255)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = ((var_13 || ((!(arr_9 [i_2] [i_4])))));
                                var_18 = -var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_17 [i_1 - 2] = 6;
                                arr_18 [i_0] [i_1] [i_2] [i_0] [3] = -860481495;
                            }
                        }
                    }
                    var_19 = (min((max(18446744073709551610, -1)), (((var_10 <= (((arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 2] [i_1] [i_2]) ? 115 : var_9)))))));
                    var_20 = 255;
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_21 = 255;
                    var_22 -= (min(var_6, (~var_13)));
                }

                /* vectorizable */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_23 = (((arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 2]) ? (arr_22 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])));
                                var_24 ^= ((var_11 ? 18446744073709551609 : -1210679793));
                            }
                        }
                    }
                    var_25 = (var_7 % 14312173735656628791);
                    var_26 = (arr_26 [i_0] [i_1 - 2] [i_8] [i_1 - 2] [i_8]);
                    var_27 = (((((115 ? 125227936 : -6518244105639495196))) ? (((arr_30 [i_0] [i_1] [i_1] [i_1] [i_8] [i_1] [i_0]) ? (arr_19 [i_0] [i_8]) : -1)) : -1));

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_28 = 6;
                        var_29 ^= ((-(arr_24 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_8 + 1])));
                        var_30 = ((((255 * (arr_4 [i_0] [i_0])))) ? (arr_22 [i_1 - 1] [i_8 - 2] [i_8]) : var_4);

                        for (int i_12 = 3; i_12 < 14;i_12 += 1)
                        {
                            var_31 = (((arr_6 [14] [i_1] [17] [i_1]) ? (arr_21 [i_0]) : -7523922575597963839));
                            var_32 = (arr_28 [i_1 - 2] [i_8 - 1] [i_8 + 1]);
                            var_33 = ((~(arr_27 [i_8 + 1])));
                            var_34 = 0;
                        }
                        var_35 = (max(var_35, 3700440270281706779));
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_36 = var_7;
                        var_37 = var_3;
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 16;i_15 += 1)
                        {
                            var_38 = (var_12 / 4375);
                            var_39 = (((arr_15 [i_0] [i_1 + 1] [i_8 + 2] [i_15 + 2]) ? 31 : (arr_15 [i_0] [i_1 + 1] [i_8 + 2] [i_15 + 2])));
                        }
                        var_40 = ((var_6 / (arr_37 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_8 - 1] [i_8 - 2] [i_8 - 2])));
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_41 = (((var_13 ^ var_6) != ((var_9 ? var_14 : var_0))));
                    var_42 = ((2047 ? -860481495 : var_2));
                    arr_46 [i_16] [i_1] [i_0] [i_0] = (((arr_40 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 1]) - var_9));
                }
                var_43 = (min((((arr_37 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_0]) ? (arr_28 [i_1 - 2] [i_1] [i_1]) : 7)), ((((223 ? var_6 : (arr_2 [i_1]))) % ((min(var_0, (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_44 = ((((~(arr_5 [i_19] [i_20 - 2] [i_20 - 3])))) ? var_9 : ((max(((max(var_10, 2237220640))), var_4))));
                                arr_59 [i_17] [i_18] [i_19] [i_20] [i_18] = -2057746655;
                            }
                        }
                    }
                    var_45 = (max(var_45, ((min(((((max(var_10, (arr_44 [i_17] [i_17] [i_17])))) >> (var_11 % var_11))), ((~((var_14 ? (arr_11 [i_17] [i_17] [15] [i_17] [i_17] [i_18] [i_19]) : 1)))))))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 13;i_23 += 1)
                        {
                            {
                                arr_64 [7] [i_18] [i_18] [i_18] [i_18] = ((((min(-114, var_8))) ? ((((((-38 ? var_11 : 32))) || ((((arr_54 [i_17] [i_17] [i_17] [i_22] [i_23]) - 46)))))) : var_4));
                                var_46 = (min((((7 ^ 255) ? (arr_57 [i_17] [i_17] [i_19] [i_18] [i_17] [i_22] [i_22]) : ((min(3, (arr_15 [i_17] [i_18] [i_18] [i_23])))))), ((((arr_47 [i_18]) | (~116728372))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
