/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (max(-1, (((arr_0 [i_0] [19]) - ((min(110, 15872)))))));
                    arr_9 [i_2] [i_1 + 1] [i_0] = (((((8807665273830902307 ? 5 : var_10))) == 232));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 - 2] [i_3] [i_3] [i_4 - 2] [i_3] = ((((((((0 ? (arr_1 [16]) : var_17))) ? (arr_0 [i_0] [i_0]) : (arr_10 [i_1] [i_2] [i_4 + 1] [i_4] [i_4 - 1])))) && (arr_7 [7] [i_0])));
                                var_19 += var_4;
                                var_20 = (((-(arr_4 [17] [i_2] [23]))));
                                arr_17 [i_3] [i_2] [i_1] [i_3] = 8807665273830902300;
                                arr_18 [i_0] [i_1 - 2] [i_3] = ((-(((((arr_10 [i_4] [i_3] [i_2] [3] [i_0]) ? (arr_1 [23]) : (arr_6 [i_0] [i_0] [i_0]))) ^ var_2))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_23 [i_5] = (arr_12 [i_5] [i_5 - 3] [i_5] [1]);
        var_21 = ((-16 ? ((min((arr_20 [i_5 + 2]), (arr_20 [i_5 - 1])))) : var_3));
        var_22 = (min((arr_21 [i_5]), (max((min(var_12, 35182224605184)), (~var_4)))));
        var_23 = ((153 ? (0 ^ 1) : (min(18446744073709551599, (arr_8 [i_5] [i_5] [i_5 + 3] [i_5])))));
        arr_24 [i_5] [i_5] = (arr_2 [i_5] [i_5 + 2]);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_33 [i_8] [i_8] [i_6] = (min((arr_11 [i_6] [i_7] [i_6]), 153));
                    arr_34 [i_6] [i_6] [14] [1] = arr_19 [i_6];

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_38 [i_6] = 1;
                        arr_39 [i_6] [i_6] = ((min((arr_0 [13] [i_8]), (arr_32 [i_6]))));
                        var_24 = (min(var_2, (~0)));
                    }
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        arr_43 [i_6] [i_6] [i_8] [i_6] = (!(((((var_5 + (arr_20 [i_10]))) ^ (((8807665273830902312 ? var_6 : (arr_7 [i_10] [i_7]))))))));
                        var_25 -= (-(((!((min((arr_42 [i_6] [i_7]), var_15)))))));
                        var_26 = (arr_14 [i_10] [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10]);
                    }

                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_27 = (((-(arr_40 [i_6]))));
                            var_28 = ((~((-((((arr_1 [i_12]) && (arr_48 [i_6] [i_11] [i_6] [i_11 + 1] [i_8] [i_8]))))))));
                        }
                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            var_29 = (9 + 103);
                            var_30 = 14;
                            arr_51 [16] [i_11] [i_8] [i_6] [i_11] = -22750;
                            var_31 = min(1, -113);
                        }
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            var_32 = var_5;
                            arr_54 [1] [i_6] [1] [9] [i_6] [i_6] = 93;
                            arr_55 [i_6] [2] [i_11] [7] [i_7] [10] [i_6] = ((0 * (arr_52 [i_11 - 2] [i_11 - 2] [i_6] [i_7] [i_6])));
                            arr_56 [i_8] [13] [1] [i_11] [i_11 + 2] [i_6] = -1;
                        }
                        var_33 = -32760;
                    }
                }
            }
        }
    }
    var_34 = var_0;
    #pragma endscop
}
