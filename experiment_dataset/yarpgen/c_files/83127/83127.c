/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (1696513780 ? (((2870845979 ? 33950502 : 46893))) : 1424121343);
        var_15 = (min(var_15, var_9));
        var_16 ^= ((-891400073 ? (arr_1 [i_0 + 1]) : (-308557807 / var_1)));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_13 [1] [1] [2] [3] [6] = (max(((-((var_10 ? var_2 : var_7)))), 74));
                        arr_14 [i_1 + 1] = ((var_13 ? 4294967295 : (2870845979 >= var_7)));
                        arr_15 [i_3] [i_3] |= (((arr_7 [i_2]) & (((max(var_8, 255))))));
                        var_17 = 103;
                        var_18 -= (arr_10 [i_1] [i_2] [i_2] [i_3] [i_1] [2]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 += (~1424121317);

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_22 [i_5] &= (arr_12 [i_1] [i_2] [i_1] [i_2 + 1]);
                            var_20 = (arr_2 [i_1 + 1] [i_1 - 2]);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_21 = (max(var_21, -891400073));
                            arr_27 [i_1] [i_1 - 2] [i_1] [i_7] [i_1] = (+-1);
                            var_22 += 181;
                            var_23 = (((arr_2 [4] [i_2]) | var_0));
                        }
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_24 = ((-(((arr_21 [i_1 - 1] [1] [i_3] [5] [i_3]) ? var_11 : (((arr_21 [6] [6] [4] [i_3] [i_8]) ? (arr_10 [9] [9] [i_3] [i_8 - 1] [i_2 - 2] [i_3]) : 1424121309))))));
                        var_25 ^= var_4;
                        arr_32 [i_8] = ((+((((arr_11 [i_3] [i_3] [i_3] [i_3]) && var_0)))));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_26 = (+(max(-var_9, ((max((arr_2 [i_8] [i_2]), (arr_12 [i_1] [i_1] [i_1] [i_1])))))));
                            var_27 |= (arr_33 [i_9] [i_2] [i_9] [i_9] [i_9]);
                            var_28 = (min(((-20391 ? (((arr_25 [i_1] [i_1 - 1] [i_2 - 1] [i_2] [i_2] [7] [i_9]) ? var_12 : var_8)) : (arr_30 [i_1] [i_1] [i_8] [i_9]))), ((+(((arr_3 [i_8]) * 1))))));
                            var_29 = (min(var_29, (max(((145 ? 255 : -17677)), (arr_9 [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            var_30 = (-(arr_20 [i_1 - 1] [i_2 + 1] [i_3] [i_8] [i_2 + 1]));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_8] = (arr_0 [i_2 - 2]);
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_31 = (max(((-(((arr_9 [i_1]) / (arr_38 [0] [6] [i_3] [1] [6] [i_11] [i_3]))))), ((min(((-(arr_0 [i_3]))), (arr_37 [i_11] [7] [i_2]))))));
                            var_32 = (arr_41 [i_8]);
                            var_33 = (max(var_33, var_2));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_34 = (min(var_34, -1506034259));
                                arr_50 [i_12] &= 177339262;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 9;i_15 += 1)
                        {
                            {
                                arr_55 [5] [i_2] [i_3] [i_2] [i_3] [i_3] [i_2] = 59246;
                                var_35 *= (-2147483647 - 1);
                                arr_56 [i_1] [i_2] [10] [i_14] [i_2] = ((-(arr_43 [i_3] [i_3] [1] [i_2 - 2] [10] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = (min((-2147483647 - 1), (-0 / var_0)));
    var_37 = var_8;
    #pragma endscop
}
