/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_0) ? ((max(-1922844745, (max(0, 17818))))) : ((~(max(var_3, -17390))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = max(((min((((arr_2 [i_2 + 1] [i_1]) ? var_10 : var_9)), -18730))), (arr_8 [i_1] [i_1] [i_1] [i_0 + 1]));
                            var_13 = (min(var_13, (arr_5 [i_3] [i_1 + 3] [i_0 + 1])));
                            var_14 = (18446744073709551605 | -5846083940805418082);
                        }
                    }
                }
                var_15 = ((2147483647 ? -2147483647 : 2147483647));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = ((-(max((((~(arr_0 [i_5 + 1])))), (((arr_2 [i_5] [i_5]) | var_6))))));
                                var_17 ^= 33;
                            }
                        }
                    }
                }
                arr_17 [i_1] = (arr_13 [i_0] [i_0]);
                arr_18 [i_0] [1] |= (max(var_3, ((min((arr_3 [i_0 - 1]), (arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_1]))))));
            }
        }
    }

    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_18 = (arr_12 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
        var_19 = ((39 ? (~var_5) : (max(var_4, -2147483623))));
    }
    for (int i_8 = 3; i_8 < 8;i_8 += 1)
    {
        arr_25 [i_8] [i_8 + 1] = var_10;
        var_20 ^= (max((((arr_16 [10] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 3] [i_8 - 3] [10]) | 2147483624)), (((115 >> (var_4 + 5995))))));
        var_21 = (((-32749 ? 1 : -5)));
    }
    for (int i_9 = 1; i_9 < 7;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                {
                    arr_34 [i_9] [i_10] [i_9] = var_9;
                    arr_35 [i_9] [i_9] = (~var_2);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 6;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 6;i_13 += 1)
                        {
                            {
                                arr_41 [i_10 - 1] [i_10] [i_10] [i_12 + 1] [7] [i_12] [i_9] = (!(((((min((arr_33 [2] [5] [0] [i_12]), var_5))) ? var_10 : (~65519)))));
                                var_22 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 8;i_15 += 1)
                        {
                            {
                                arr_47 [i_9] [4] [i_10] [i_10] [i_14] [i_9] = ((((min(2147483624, 2147483641))) * (max(var_1, 2))));
                                var_23 = var_0;
                                var_24 = ((-(228 < 702255317)));
                            }
                        }
                    }
                    arr_48 [i_11 + 1] [i_9] [i_9] [3] = ((((arr_13 [i_11] [i_9 + 2]) >> (var_8 - 22358290130515356))));
                }
            }
        }

        for (int i_16 = 1; i_16 < 9;i_16 += 1) /* same iter space */
        {
            arr_52 [i_9] [i_9] = ((-55 ^ (~-769935997)));
            var_25 *= (((!var_5) >> (8371644733905824104 - 8371644733905824086)));
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 6;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 8;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 9;i_19 += 1)
                    {
                        {
                            var_26 = -2495080156253588230;
                            var_27 = (((!10075099339803727512) ? ((((arr_4 [i_9]) ? (arr_4 [i_9]) : (arr_4 [i_9])))) : 1));
                            var_28 *= (((((arr_2 [i_16 + 1] [i_17 + 2]) < var_10)) ? (3555811390381831108 | 4) : ((((arr_2 [i_16 + 1] [i_17 + 3]) | (arr_2 [i_16 + 1] [i_17 - 1]))))));
                            var_29 = ((31 < ((var_6 ? ((max((-127 - 1), 2003613393))) : (max((arr_15 [i_9] [1] [i_18] [i_19]), 1141799499))))));
                        }
                    }
                }
            }
        }
        for (int i_20 = 1; i_20 < 9;i_20 += 1) /* same iter space */
        {
            var_30 = ((((((((max(var_1, var_7)))) | (max(var_3, -32))))) ? (arr_42 [i_9] [i_20 + 1] [i_20 + 1] [i_9 + 1]) : var_10));
            arr_62 [i_9] = 127;
        }
    }
    #pragma endscop
}
