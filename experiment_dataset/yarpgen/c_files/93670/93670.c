/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~var_3), -39));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 ^= ((((min(-1446557053400167291, (((arr_4 [i_4] [i_4]) ? (arr_6 [i_0]) : -1446557053400167291))))) && ((min(31, 1056964608)))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_1] = (((arr_7 [i_3] [i_0 + 2] [i_0]) - (arr_2 [i_0])));
                                arr_14 [i_1] [i_1] [i_1] [i_1] = ((((min(((max(101, 1))), 63165))) ? ((((min(-1056964598, 4494803534348288))))) : 5182990701384793734));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = min(var_1, (max((~var_10), (min(var_2, var_12)))));
                                var_17 = (((4494803534348288 ? var_10 : (((arr_19 [i_0] [0] [i_2] [i_5 + 1] [i_6] [i_2] [i_2]) - var_1)))));
                                arr_21 [i_0] [i_1 + 1] [i_2] [6] [i_1] = ((((((arr_17 [i_6] [i_0] [i_1] [i_0] [i_6]) == ((min(var_13, (arr_2 [i_0]))))))) - (arr_11 [2] [0] [i_2] [i_2] [2] [i_6] [i_1])));
                                arr_22 [i_1] [i_1] [i_1 + 3] [9] [i_1 - 1] = ((((~(max((arr_0 [i_0]), var_5)))) != ((((max((arr_6 [i_0]), (arr_7 [4] [4] [i_6]))))))));
                                var_18 = (min(var_18, (~var_4)));
                            }
                        }
                    }
                    var_19 = ((-((min((arr_1 [5]), (arr_1 [i_0 - 1]))))));

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_20 -= (((-var_7 ? ((min(37099, 1056964587))) : (var_10 * var_11))));
                        arr_25 [9] [i_1] [9] [9] [i_0 + 1] = -123;
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_21 = (arr_7 [i_1] [i_1 - 1] [9]);
                        arr_30 [i_1] [i_0 - 1] [i_0] = (((((var_12 ? 0 : 1026052592))) ? (arr_27 [i_1 + 3] [9] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 1]) : (arr_3 [i_0 + 3])));
                        var_22 *= ((~((((arr_19 [i_0] [i_0] [i_1 + 3] [i_1 + 1] [i_0] [i_2] [i_8]) <= (arr_15 [i_0] [i_0]))))));
                        arr_31 [i_0 - 1] [i_1] [i_2] [i_8] [i_1] = ((-(2265168780322193943 % var_0)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [i_1] = (((arr_12 [i_0 + 1] [i_1] [i_2] [i_9] [i_9]) != (arr_12 [i_0 + 2] [i_0 + 2] [7] [i_9] [i_10])));
                            arr_40 [i_0] [i_1 + 3] [i_0] [i_9] [i_1] [i_0] = (((14006390667953510739 / 1) ? (arr_3 [i_0 - 1]) : (arr_0 [i_0])));
                            arr_41 [i_0] [i_1] = 1;
                        }
                        for (int i_11 = 4; i_11 < 9;i_11 += 1)
                        {
                            var_23 = (min(var_23, (((-var_9 % (~var_9))))));
                            arr_44 [i_0 + 2] [8] [i_2] [i_2] &= -1170197093;
                            var_24 = (max(var_24, ((((var_13 ? var_7 : var_12))))));
                            var_25 = (min(var_25, var_6));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_26 -= 119;
                            var_27 = (min(var_27, (arr_5 [6] [i_2] [i_2])));
                        }
                        var_28 = var_8;
                        var_29 = 4611686009837453312;
                        var_30 = 0;
                    }
                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        var_31 = (min((min((arr_48 [i_0] [i_0] [i_0] [i_13 - 1]), var_6)), ((min(((min((arr_1 [i_0 + 2]), (arr_19 [i_0] [i_0] [i_2] [i_0] [i_2] [6] [i_2])))), 1359620106)))));
                        arr_49 [3] [i_1 - 1] [i_1] [i_1] [i_2] = ((((((0 && var_7) ? ((~(arr_2 [i_0 + 3]))) : ((max(7819, 53043)))))) - (max((14 && -1359620106), (4294967295 | var_1)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            {
                arr_56 [i_15] [i_14] [8] = (min(((max((min(-2019689678, 1712383818)), var_1))), (min(((var_8 ? var_6 : -6782669062957909976)), (arr_0 [i_15 + 1])))));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_59 [i_15] = (~(~var_1));
                    var_32 = ((((!(arr_46 [i_14] [i_15])))));
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    var_33 = (max((arr_2 [i_14]), 1008));
                    var_34 = -2019689663;
                }
            }
        }
    }
    #pragma endscop
}
