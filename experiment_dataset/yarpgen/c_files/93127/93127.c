/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_4 ? (((var_9 ? var_15 : var_9))) : ((var_2 ? -2921812398194895974 : var_15)))), (((-2921812398194895963 == (max(var_3, -4586373363854835397)))))));
    var_21 = ((max(var_14, ((var_15 ? 2921812398194895997 : var_12)))) + (~-2921812398194895974));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((arr_0 [i_0 - 1] [i_0 + 1]), var_7))) ? (!62) : (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : var_5))));
        var_22 = (min((((!((((arr_1 [i_0]) + (arr_1 [0]))))))), (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0 + 1] [i_0 - 1])))));
        arr_3 [i_0] = (((((arr_1 [i_0 + 1]) ? var_8 : (arr_1 [i_0 + 2]))) <= ((((!(arr_1 [i_0 + 2])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [12] = (((((+((var_14 ? (arr_4 [i_1]) : var_14))))) ? (max(-var_7, (arr_4 [i_1]))) : ((-(arr_4 [10])))));
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);
        var_23 = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [14] = ((((max((arr_9 [i_2] [i_2]), ((var_18 ? -2921812398194895974 : (arr_4 [i_2])))))) ? (arr_5 [18] [18]) : ((((arr_8 [i_2] [i_2]) && (2921812398194895977 | -1))))));
        arr_11 [i_2] = (((((~(((arr_4 [i_2]) ? (arr_5 [i_2] [i_2]) : 96))))) ? (arr_5 [i_2] [i_2]) : (((-(arr_9 [i_2] [15]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_24 = ((((arr_9 [15] [i_3 - 1]) > (arr_9 [i_3 + 3] [i_3 + 1]))) ? (min((arr_9 [i_2] [i_3 + 3]), (arr_9 [i_3] [i_3 + 3]))) : (arr_9 [i_3] [i_3 + 2]));
                    var_25 = (((min((arr_15 [i_2] [i_3 - 1] [i_3 + 4]), (arr_15 [18] [18] [i_3 + 1]))) != ((~(arr_12 [i_3 + 3])))));
                    var_26 = ((+(((arr_4 [i_3 + 2]) ? var_6 : var_7))));
                    var_27 = (((~-63) ? (((arr_16 [i_3] [1]) ? (arr_16 [i_3 + 1] [i_4]) : (arr_14 [i_3]))) : ((((max(var_12, var_13))) ? ((min(var_8, (arr_8 [i_2] [i_3])))) : (arr_14 [i_2])))));
                }
            }
        }
    }
    var_28 = (!var_8);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [i_5] [i_5] = ((((arr_13 [i_5] [i_5]) == var_9)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_34 [i_5] [i_5] [i_6] [i_7] [12] [i_6] = ((max(((!(arr_28 [i_5] [4] [i_6] [i_6] [i_5] [i_6]))), (var_11 && var_6))) ? var_0 : var_11);
                                var_29 = ((((((arr_33 [i_5] [i_6] [i_7] [0] [i_9 - 1]) % (arr_25 [i_6] [i_7] [i_7] [i_9 + 1])))) ? ((min((max(var_10, var_5)), (((!(arr_24 [i_5] [i_5] [i_5] [i_5]))))))) : ((((arr_31 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 1]) && (((var_7 ? -39 : (arr_28 [1] [i_9] [0] [1] [i_5] [i_5])))))))));
                                var_30 = ((var_1 % ((((min((arr_5 [i_5] [16]), 1253567081))) ? ((var_19 ? (arr_17 [i_5]) : 32212254720)) : 649931830475670492))));
                                var_31 = (arr_9 [i_9 - 1] [i_6]);
                                var_32 = max(((((arr_24 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) && (arr_24 [i_9 + 1] [i_9 - 3] [i_9 - 1] [i_9 - 3])))), -var_11);
                            }
                        }
                    }
                    var_33 = (((arr_12 [14]) ? var_15 : (((!(arr_33 [6] [i_6] [i_7] [i_6] [3]))))));
                    arr_35 [i_5] [i_5] [i_5] = ((~(((arr_15 [i_5] [i_6] [i_5]) ? (var_9 + var_8) : (arr_29 [i_5] [i_6] [i_6] [i_7] [i_7] [i_7])))));
                }
            }
        }
    }
    #pragma endscop
}
