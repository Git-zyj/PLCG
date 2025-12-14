/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 ? var_7 : (max((((var_5 >> (var_5 - 59024)))), (min(var_1, var_2)))));
    var_12 = (min(var_2, (((~2147483136) ? var_6 : var_8))));
    var_13 = ((32736 / ((min(-1, -32737)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((((arr_0 [i_0] [1]) * (max(4294967295, (arr_1 [i_0] [i_0 - 1]))))) < (((arr_0 [i_0] [i_0 - 1]) / (arr_0 [i_0] [i_0 + 1])))));
        var_14 = (max(var_14, var_6));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_15 = (((((~32736) + 2147483647)) >> (var_6 < 2147483121)));
        var_16 = (~((var_9 & (arr_5 [i_1]))));
        var_17 = 91021433;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_1] [21] = (arr_3 [i_1]);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_18 ^= (var_0 & -2176);

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_19 = var_5;
                            var_20 = 32736;
                        }
                        arr_18 [i_1] [0] [i_2] [13] [0] [2] = (arr_9 [i_3] [i_1 - 2] [i_1]);

                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_21 = (arr_20 [i_2] [6] [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_22 = (i_1 % 2 == zero) ? ((((((arr_13 [i_1] [i_3] [i_1 - 2] [i_1]) + 2147483647)) << (((((arr_13 [i_1] [i_6] [i_1 + 2] [i_1]) + 24069)) - 9))))) : ((((((arr_13 [i_1] [i_3] [i_1 - 2] [i_1]) + 2147483647)) << (((((((arr_13 [i_1] [i_6] [i_1 + 2] [i_1]) + 24069)) - 9)) - 9677)))));
                        }
                        arr_22 [i_1] [i_1] [4] [i_3] = ((((~(arr_9 [i_4] [6] [i_1]))) < (arr_17 [i_1] [i_3] [i_2] [i_1])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_23 *= (5559586709855003348 || 2152);
                        var_24 |= ((((min((arr_9 [i_8 - 1] [i_8 + 1] [i_8 + 2]), (arr_9 [i_8 - 1] [i_8] [i_8 + 2])))) - (((((arr_25 [i_10] [i_7]) + (arr_20 [i_7] [i_8] [i_8] [i_8] [i_9] [i_10] [i_10]))) - ((max(var_5, var_1)))))));
                        arr_31 [i_9] [i_8] [i_9] [i_7] [i_9] = ((((~var_1) ? ((-(arr_11 [i_9]))) : ((-(arr_19 [i_9] [i_10] [i_8]))))) * ((((!(arr_12 [i_8 + 1] [i_10]))))));
                        var_25 = (max(var_25, 20935));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_26 = (((((arr_14 [i_12] [i_11] [i_11] [i_12] [i_12]) + 2147483647)) >> (((arr_33 [i_12] [i_12]) - 3301905999))));
                    var_27 = (((~11491) != (((!(!var_9))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_28 -= (~(((arr_3 [i_14]) ? (arr_23 [i_12] [i_12]) : var_1)));
                                var_29 += (((((-18745 ? 1731 : (arr_1 [i_12] [i_12])))) != ((~(arr_29 [i_7] [i_12] [i_13] [i_14])))));
                            }
                        }
                    }
                    var_30 = ((((((((arr_26 [i_12]) * var_7))) * 3819091170579912459)) - ((((arr_16 [i_11]) ? var_10 : (arr_16 [i_11]))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_31 = (min((((+(((arr_45 [5] [i_12] [i_7] [i_16]) ? (arr_41 [i_11 - 1] [i_7] [i_11 + 1] [i_7] [i_11]) : 4294967285))))), (min((arr_38 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1]), (arr_39 [i_11] [i_11] [i_11] [i_11])))));
                                var_32 = ((!(arr_11 [i_12])));
                                var_33 = 18446744073709551605;
                            }
                        }
                    }
                }
            }
        }
        var_34 = (max(var_34, var_10));
        arr_48 [i_7] = 5056765491614268436;
    }
    #pragma endscop
}
