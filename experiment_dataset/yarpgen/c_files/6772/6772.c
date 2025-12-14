/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((max((arr_2 [i_0 + 1]), var_13))) && ((min(((min(var_6, 138))), var_3)))))));
                    arr_9 [7] [11] = ((+(min((176 * var_12), (!var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] |= (max((arr_4 [i_0 + 1] [i_3 + 1] [i_4 + 1]), (max((arr_4 [i_0 + 1] [i_3 + 4] [i_4 - 2]), (arr_4 [i_0 + 1] [i_3 + 1] [i_4 + 1])))));
                                arr_16 [i_4] [i_3 + 3] [i_2] [i_1] [i_0] = ((((!(arr_6 [i_1] [i_2]))) ? ((((((arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] [i_1]) ^ 1))) ? ((var_7 ? (arr_11 [i_0] [i_0] [i_2] [i_0] [2] [13]) : (arr_4 [i_0] [i_1] [i_2]))) : (((var_18 ? (arr_6 [0] [0]) : (arr_3 [i_0 + 1])))))) : 709797085));
                                var_20 &= (!var_11);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_24 [9] [i_5] [9] [i_1] [i_0] = (arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]);
                                var_21 = (((((((222 ? var_11 : 16376))) && (!var_4))) ? 15699986038186690246 : var_3));
                                var_22 = (min(var_22, (((!(((((min(49160, 19743))) << ((var_12 ? (arr_3 [i_0]) : (arr_10 [i_0] [9] [i_1] [i_2] [i_0] [i_6])))))))))));
                                var_23 &= (!-1041602732);
                                var_24 *= ((!(!var_10)));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_25 = (max(var_25, (!22606)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 *= (((arr_30 [i_7] [i_8]) * (-19767 | 188)));
                                var_27 = var_4;
                                var_28 = (((10919 ? (arr_12 [i_8] [i_8] [4] [i_10] [i_10] [i_8] [i_11]) : -27224)));
                            }
                        }
                    }
                    arr_37 [i_7] [i_8] [i_7] &= -19767;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_29 *= (((!18446744073709551615) ? (13278876175971320811 + 18446744073709551607) : var_5));
                                var_30 = (max(var_30, -899170549325592702));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_31 = (!0);
        /* LoopNest 3 */
        for (int i_15 = 4; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        var_32 -= (max((((!(arr_44 [15] [i_14])))), (((arr_44 [i_14] [i_16]) ^ (min(107, 2147483644))))));
                        var_33 |= ((((var_17 ? var_0 : (arr_44 [i_15] [i_15 + 1]))) * 106));
                    }
                }
            }
        }
        arr_56 [i_14] = ((((~(~var_17)))) ? ((~(arr_54 [19] [i_14] [i_14] [18] [18]))) : 107);
        var_34 |= ((32764 || (~var_4)));
    }
    var_35 |= (max(1, ((!(!var_15)))));
    #pragma endscop
}
