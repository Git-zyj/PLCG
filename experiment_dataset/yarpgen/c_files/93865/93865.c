/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_4 + var_8);
    var_16 = (((((var_6 >> ((((var_1 ? var_7 : var_6)) - 1665837869))))) && var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -1077360720)))));
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (((arr_2 [i_1]) ? 0 : (arr_2 [i_1])));
        var_20 = (arr_3 [i_1]);
        var_21 = (((arr_3 [i_1]) > (((arr_2 [i_1]) ? (arr_3 [15]) : (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (~(arr_6 [i_2]));
        var_22 = (((((((~(arr_5 [i_2])))) ? 1789 : (arr_3 [i_2]))) >> (((min((((arr_1 [i_2] [i_2]) ? (arr_6 [i_2]) : 15217014691623905657)), (((-(arr_0 [i_2])))))) - 2777180468))));
        var_23 = (min(var_23, ((((((((arr_5 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_2 [i_2]))) - (((min((arr_3 [i_2]), (arr_5 [5]))))))) >> (((!((!(arr_3 [i_2])))))))))));
        arr_8 [i_2] = (max((max((arr_2 [i_2]), (((var_12 || (arr_2 [i_2])))))), (((((var_3 ? -6838815381723840514 : 65522))) ? (max((arr_2 [i_2]), (arr_1 [5] [7]))) : (((max((arr_4 [i_2] [i_2]), 8531))))))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = ((-(max(((4294967295 ? 547374889849224951 : var_5)), (((arr_13 [i_3]) ? 1 : 18442832490102547838))))));
                        var_25 *= (min(((!(arr_1 [i_3] [i_5]))), (((arr_1 [10] [i_3]) || (((var_13 ? (arr_11 [i_3] [i_2]) : (arr_11 [i_2] [i_2]))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    arr_28 [i_8 + 1] = var_14;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_26 = var_7;
                                var_27 += (((!1) ? var_14 : (((((arr_23 [1]) || (arr_5 [i_7])))))));
                                var_28 = ((+(((arr_4 [i_7] [i_9]) ? (-9223372036854775807 - 1) : (arr_3 [i_10 - 1])))));
                                arr_35 [i_6] [i_7] [i_8 + 1] [i_9] [i_9] [i_9] = (~(((!(arr_10 [i_6] [i_9] [i_8])))));
                                var_29 = (((((arr_15 [i_6]) ? (arr_20 [i_8] [i_7]) : var_4)) * 229));
                            }
                        }
                    }
                    var_30 ^= ((arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1]) * (arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1]));
                }
            }
        }
        var_31 = (((arr_1 [i_6] [i_6]) ? (arr_1 [i_6] [i_6]) : (arr_1 [i_6] [14])));
        var_32 = (arr_16 [i_6] [i_6] [i_6] [i_6] [1] [i_6]);
        var_33 = (arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [2]);
    }
    #pragma endscop
}
