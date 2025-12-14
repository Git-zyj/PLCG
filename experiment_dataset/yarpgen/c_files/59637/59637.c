/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((var_1 > var_1), var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = -1;
                var_12 = (((arr_1 [i_0]) >= (arr_1 [i_0])));
                arr_5 [i_0] [i_1] [i_1] = (max((((!(arr_4 [i_0 + 1] [i_1 - 2])))), ((((min(var_6, -86))) - ((max(129, (arr_4 [i_1] [i_0]))))))));
            }
        }
    }
    var_13 = ((1 ? var_1 : ((max(162, var_4)))));
    var_14 = (max((((93 | 1) ? (~var_3) : (var_5 | var_7))), (((max(var_7, var_9))))));

    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = (arr_3 [i_2] [i_4] [i_2]);

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_15 -= ((((((arr_12 [i_4] [i_5]) ? (arr_6 [i_2] [i_2]) : 27))) && 4));
                        var_16 = (((arr_13 [i_2 - 1] [i_3] [i_4] [i_5 - 1]) ? (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_13 [i_2 - 1] [i_3] [i_3] [i_5 + 2])));
                        var_17 = (((-(arr_7 [i_2]))));
                        arr_17 [1] [1] [1] [i_5 + 1] = (arr_15 [0] [i_5] [i_5] [i_5 - 1]);

                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_18 = ((-(arr_6 [i_6 + 1] [i_5 + 2])));
                            arr_20 [i_2 - 1] [i_3] [i_6] [i_5] [i_5] [4] = ((((((arr_4 [i_3] [i_3]) ? 118 : (arr_1 [i_6])))) / (((arr_3 [i_2] [i_6] [i_2]) ? 1 : (arr_7 [i_3])))));
                            arr_21 [i_2] [i_3] [i_6] [i_5] [1] [i_6] = (((arr_13 [i_2] [i_4] [i_6] [i_6 - 1]) / (arr_13 [i_6] [12] [i_6] [i_6 + 3])));
                            arr_22 [i_2] [i_6] [i_4] [i_4] [7] [i_3] [11] = (~255);
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_19 = (arr_18 [i_3] [i_4] [i_7 + 1] [i_7] [i_7 - 1]);
                        var_20 = 1;
                    }

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        arr_28 [i_2] [i_2 - 1] [i_8] = (arr_13 [i_2] [i_2 - 1] [i_2] [i_2]);
                        var_21 = (((-95 | var_5) ? (!233) : -426502386));
                        arr_29 [i_4] [i_3] [i_8] [i_2] [i_2] [i_8] = (arr_27 [i_2] [i_3] [i_8] [i_2] [i_8] [i_8 + 1]);
                        var_22 = (((arr_18 [i_8] [i_8] [i_8] [i_8] [i_8 - 2]) ? (arr_18 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1]) : (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8 - 2])));
                    }
                }
            }
        }
        var_23 = (arr_18 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]);
        var_24 += ((((~(arr_11 [i_2 + 1] [2] [1]))) ^ (((((arr_9 [i_2] [7]) ^ (arr_19 [1] [1] [1] [1] [i_2]))) ^ (arr_13 [10] [i_2 + 1] [i_2] [i_2])))));
        arr_30 [i_2 - 1] = ((((~((min((arr_13 [i_2 + 1] [i_2] [i_2] [1]), var_3)))))) || ((min((((254 > (arr_2 [i_2 - 1] [i_2])))), (((arr_15 [11] [11] [i_2] [i_2]) ? (arr_8 [i_2]) : (arr_18 [i_2] [i_2] [i_2 + 1] [7] [i_2 - 1])))))));
        var_25 = (((min((max((arr_10 [4] [i_2] [4]), (arr_7 [i_2]))), (~18)))) ? (((!(77 == 26844)))) : ((-((233 / (arr_4 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_26 = (arr_8 [i_9]);
        var_27 = (min(var_27, ((((arr_27 [i_9] [i_9] [8] [i_9] [i_9] [i_9]) != (arr_31 [i_9 - 1] [1]))))));
        arr_33 [i_9] = (((arr_13 [0] [i_9] [i_9] [i_9]) ? (((var_9 > (arr_19 [i_9] [i_9] [7] [1] [i_9])))) : (arr_13 [i_9] [i_9 + 1] [i_9 - 1] [i_9])));
        arr_34 [i_9] = ((((-637277205 ? (arr_23 [i_9] [10] [i_9 - 1] [i_9]) : (arr_26 [i_9 + 1] [i_9 + 1] [i_9] [i_9]))) << ((-(arr_32 [i_9])))));
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] [i_10] = (max((((((arr_27 [i_10] [i_10] [1] [i_10] [i_10 + 1] [i_10]) >> (((arr_16 [i_10]) - 2024130813)))))), (((((arr_16 [i_10]) ? (arr_4 [i_10] [13]) : (arr_1 [6]))) << (arr_11 [i_10 + 1] [i_10 - 1] [i_10])))));
        var_28 = (max((((((var_6 ? 352613420 : (arr_4 [i_10] [i_10 + 1])))) ? ((-334943472 ? 562949886312448 : 3)) : ((((arr_9 [i_10] [i_10 - 1]) & 94))))), ((((arr_16 [i_10]) ? 94 : (var_5 & 1))))));
    }
    #pragma endscop
}
