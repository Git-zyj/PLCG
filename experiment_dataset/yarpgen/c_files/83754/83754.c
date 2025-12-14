/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 <= (var_8 & var_7));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_2 [6] = (((arr_1 [i_0 + 4]) & 1348105220));
        var_15 = var_1;
        var_16 += (arr_1 [1]);
        var_17 = ((~(((var_13 != ((((246 == (arr_1 [i_0]))))))))));
        var_18 = ((((~(var_7 * var_6))) % (arr_1 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = ((~((~(arr_3 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [8] [i_1] = ((~(arr_7 [i_1] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_15 [6] = var_5;
                                var_20 = ((((((arr_13 [i_4]) > (arr_11 [14] [12] [i_2])))) != ((var_9 | (arr_12 [4] [i_4] [i_3] [i_4])))));
                                arr_16 [i_5] [i_4] [i_3] [i_2] [i_1] |= var_6;
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] = 0;
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = var_7;
        var_21 = (~var_5);
        var_22 = var_8;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_23 |= ((((((((~(arr_20 [0]))) == (((var_8 + (arr_25 [i_6] [11] [11] [i_6])))))))) == (min(2689745770, (arr_24 [i_6] [i_6])))));
                    arr_27 [i_6] [i_8] [i_7] [i_7] = (((((arr_23 [i_6] [i_8 + 2]) & var_13)) >> (((((arr_19 [i_6] [i_7]) * (arr_25 [i_8] [i_7] [i_6] [i_6]))) - 107747738))));
                    arr_28 [i_8] [i_7] [i_6] = (arr_25 [i_8 - 1] [i_7] [i_6] [i_6]);
                    arr_29 [i_6] = 2946862076;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                {
                    var_24 = 1348105212;
                    arr_36 [i_9] [i_10] [i_10 + 2] [i_6] = (max(var_6, (((-32767 - 1) <= (~var_0)))));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {
                        arr_47 [i_12] [i_12] [i_12] = (arr_46 [i_13 + 1] [i_11 - 2] [i_11 - 3]);
                        arr_48 [3] [1] [i_12] [i_12] = (arr_32 [i_11] [i_11] [i_11] [i_11]);
                    }
                }
            }
            arr_49 [i_11 - 1] = var_10;
            arr_50 [i_11] [i_6] = (var_11 <= 430924851);
            var_25 = ((arr_25 [i_11 + 1] [i_11] [i_11 - 3] [i_11]) > var_10);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_26 = ((var_6 >= (((!(arr_32 [i_6] [i_14] [i_6] [i_6]))))));
            arr_53 [i_14] [i_14] = (-(arr_32 [i_14] [i_14] [i_14] [i_14]));
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {
                    arr_63 [i_15] [i_16] [i_17] = var_4;
                    var_27 = (((-3184 - (80845571 && 32759))) ^ var_0);

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_28 = ((var_11 >> ((((-(min(-1515917586, (arr_56 [i_17]))))) - 1515917569))));
                        var_29 = (min(var_29, ((((min(var_6, var_3))) * (((arr_58 [i_16 + 1]) - (1 == var_1)))))));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_30 = var_9;
                        var_31 = var_4;
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_32 = ((!(arr_64 [i_15] [i_15] [i_15])));
                        var_33 *= arr_54 [i_17] [i_20];
                    }
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        arr_75 [i_15 + 1] [i_15] [i_15] [4] [i_15] |= ((~(((var_13 != 27461) + var_2))));
                        var_34 = (arr_62 [i_15]);
                        var_35 = (arr_62 [i_16]);
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            {
                                arr_81 [i_15 - 1] [i_22] [i_15 - 1] [i_15] [i_15] [i_17] [i_15] = var_9;
                                var_36 |= ((var_2 && ((((arr_65 [i_15] [i_22] [i_15 + 1] [i_15 + 3] [i_15] [i_17]) & (arr_65 [i_15] [13] [i_23] [i_15 + 2] [i_23] [i_17]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = var_0;
    var_38 = (((((max(var_3, var_6)))) >= ((var_2 - (~4214121722)))));
    #pragma endscop
}
