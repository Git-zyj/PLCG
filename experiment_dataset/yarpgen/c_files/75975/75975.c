/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 &= (((((~((var_5 ? var_0 : var_11))))) ? ((var_5 ? (((arr_3 [i_0] [10]) ? 1 : 6)) : ((-12 ? 1 : 25431)))) : ((min(((((arr_0 [i_1]) && var_9))), (min(56844, var_10)))))));
                var_13 = (min(var_13, ((min(var_6, -7)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [9] [i_2 + 1] [i_1] = max(16632, 16647);
                            arr_9 [i_1] [i_1] [i_2] [i_3 + 1] [i_3] = (arr_2 [i_1] [i_1]);
                            arr_10 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] = (((arr_3 [i_2] [i_1]) ? ((((243 & var_1) ^ 600002497))) : (max((arr_3 [i_3] [i_1]), ((min((arr_6 [i_0] [7]), (arr_5 [11] [i_1] [i_1]))))))));
                            var_14 = ((15147422285723650352 ? 1 : 3299321787985901283));
                        }
                    }
                }
                arr_11 [6] |= (max((((((var_8 >> (var_5 + 19025)))) ? var_6 : (arr_5 [12] [10] [8]))), var_0));
                var_15 = (((arr_0 [i_1]) - ((min(1, 48888)))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((~((3013127293066970282 ? 1 : 1))));
        var_16 = 13192653174573480632;
        var_17 = (min(var_17, var_5));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_18 = ((min(((122 ? var_7 : var_6)), var_4)));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_20 [i_5] [i_5] = (arr_12 [i_5 + 1] [i_6 + 1]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_27 [i_5] = -3299321787985901239;
                        var_19 = (((max(99, (min(3013127293066970290, -3013127293066970275)))) + var_5));
                        var_20 = (min(var_20, 15147422285723650329));
                        arr_28 [0] [i_6 - 2] [i_5] [7] = (min((arr_4 [i_5 - 2] [3] [i_7] [i_8]), var_1));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_33 [11] [11] = var_0;
        var_21 = (min(var_21, 2));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_46 [i_12] [i_12] = (min((arr_44 [i_11] [i_11] [i_11] [10] [i_11]), (min(27079, var_7))));
                                arr_47 [i_9] [i_12] [11] [0] [i_13] = ((max((min(0, -3013127293066970275)), var_10)));
                                arr_48 [i_12] = (((((1 ? ((115 ? var_5 : var_2)) : (min(var_2, var_11))))) ? var_3 : ((~(((arr_40 [i_9] [i_9] [i_9] [i_11] [i_9] [i_13]) ? 3801480429 : 8691))))));
                                var_22 = (arr_36 [11] [3] [i_11]);
                                var_23 = (max(((-var_3 ? 16615 : (arr_38 [i_9] [i_9] [i_9]))), var_3));
                            }
                        }
                    }
                    arr_49 [i_9] [i_10] [3] [i_11] = 8691;
                    var_24 = ((((min(-1, ((var_1 >> (var_5 + 19028)))))) ? (((var_8 ? var_3 : (arr_45 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10])))) : (((((var_10 << (var_1 - 118))))))));
                    var_25 = (((!var_11) && ((max(((var_8 ? (arr_40 [i_9] [5] [i_10] [i_11] [i_11] [i_11]) : var_7)), (var_6 > var_11))))));
                }
            }
        }
    }
    var_26 = (((min((max(3013127293066970281, 0)), 33)) + (((min((var_8 || var_7), 4642))))));
    var_27 |= (!-1640244350);
    #pragma endscop
}
