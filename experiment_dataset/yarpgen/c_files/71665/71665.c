/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((min(var_6, 634179527))) ? (var_14 + var_2) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 ^= ((-11 ? (max((((arr_0 [i_2]) ? 4294967295 : 4294967295)), 0)) : ((((!(1 && 3660787768)))))));
                                var_18 = 0;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 3; i_5 < 7;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [i_1] [i_0] = 153;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] = ((1022 ? (103 % 13853) : ((18444 % (arr_18 [i_0] [6] [2] [5] [i_1] [1])))));
                                arr_24 [7] [i_1] [i_1] [5] = var_10;
                            }
                        }
                    }
                    arr_25 [i_1] [5] [5] [i_1] = (i_1 % 2 == 0) ? (((((-13853 ? (arr_12 [i_0] [i_0] [i_0] [8]) : 154)) >> (((arr_8 [i_1] [i_1]) - 6503186409862931094))))) : (((((-13853 ? (arr_12 [i_0] [i_0] [i_0] [8]) : 154)) >> (((((arr_8 [i_1] [i_1]) - 6503186409862931094)) + 2950993356781659358)))));

                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        arr_29 [i_1] [1] [1] = (arr_8 [i_1] [i_1]);
                        var_19 = 1046573653;
                        var_20 = (min(var_20, (var_11 * var_14)));
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_21 = (((-1367294211 ^ var_1) ? (min(3660787767, (var_7 / 24859))) : (((min(13859, (min(0, 29269))))))));
                    arr_33 [2] [i_1] [i_0] = 62;

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_22 ^= (min((((!((min((arr_21 [i_0] [2] [9] [i_9] [i_9] [i_10]), 102)))))), (max(((-3834733261633845515 ? 3960279297 : 4294967295)), (((-(arr_31 [1] [i_1] [5]))))))));
                        arr_36 [8] [1] [4] [i_1] = ((65534 ? 3660787742 : (((-((3660787782 ? var_10 : 13853)))))));
                    }
                }
                var_23 = 14114;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    arr_46 [i_13] = (min((max((max(1046573653, 18446744073709551595)), -3660787764)), 29273));
                    var_24 = (min(var_24, var_11));
                }
            }
        }
    }
    var_25 -= (((~var_4) ? var_9 : ((min((min(var_11, var_7)), (1046573664 | var_15))))));
    #pragma endscop
}
