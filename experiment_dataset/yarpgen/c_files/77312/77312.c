/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((-(max(6989281131618773777, 2038647311))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_2] [i_3] = 0;
                        var_16 = ((-(arr_6 [i_0] [i_1 - 1] [i_2 - 1] [0] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_1] = (arr_2 [i_0] [i_2] [i_2]);
                        arr_14 [i_4] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0] = ((arr_3 [i_1] [i_4]) || (arr_1 [i_0] [i_2 + 1]));
                        arr_15 [i_0] [i_1] [i_2 + 1] [9] = (((arr_5 [i_1] [0] [i_1] [i_4]) ? (arr_11 [10] [10] [10] [10] [i_4]) : -1));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 |= (arr_8 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_6 - 1]);
                                arr_21 [i_1] [15] [i_2] [i_5] [i_2] = 0;
                                var_18 = ((arr_11 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]) < 2368312827);
                                var_19 = (max(var_19, (arr_5 [i_5] [i_5] [i_2] [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_20 = ((~(arr_23 [i_1])));
                                arr_26 [i_8] [i_1] [i_1] [i_0] = (arr_20 [18] [18] [i_2] [i_2] [i_1]);
                            }
                        }
                    }
                    var_21 = 0;
                    arr_27 [i_1] [i_0] [i_1] = ((!(arr_22 [i_0] [11] [i_0] [i_0] [i_2 + 1])));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_22 = (min(var_22, (((~(min((max(2441017971858291889, (arr_10 [i_0]))), (((!(arr_12 [1] [i_9])))))))))));
                    arr_31 [i_0] [i_1] [i_1] = (((((arr_28 [i_0] [i_1 + 1] [i_1 + 1] [i_9]) ? (arr_28 [i_1] [i_1 - 1] [i_1] [i_9]) : (arr_28 [i_1] [i_1 + 1] [i_9] [i_9]))) < (((arr_28 [i_0] [i_1 - 1] [i_1 - 1] [i_1]) | (arr_28 [1] [i_1 - 1] [i_9] [i_9])))));
                }
            }
        }
    }
    var_23 = (max((max(2368312833, (1 & var_6))), (((18926 ? var_10 : var_6)))));
    var_24 = (max((var_4 | var_4), ((((max(var_6, var_1))) ? -0 : ((1 ? var_10 : 1134907106097364992))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_39 [i_12] [1] [i_12] [i_10] = max((((-1127320079 ? (arr_30 [i_10] [i_11] [i_10]) : ((-1 ? (arr_12 [i_10] [i_10]) : 42))))), (((arr_10 [i_10]) ? ((265 ? var_3 : (arr_20 [i_10] [i_10] [i_10] [i_11] [i_10]))) : 1134907106097364992)));
                    arr_40 [i_10] [i_11] [i_12] = arr_38 [7];
                }
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_46 [i_10] [i_10] [i_10] [1] [i_14] = arr_29 [i_14];
                            var_25 = (((arr_1 [i_10] [i_11]) ? (max((max((arr_7 [i_10] [i_11 - 1] [i_10] [i_14]), 18446744073701163008)), (arr_18 [i_10] [i_13] [i_10] [i_10]))) : ((((arr_45 [i_10] [i_10] [i_10] [i_10]) | ((18938 ? (arr_30 [i_14] [i_13] [i_14]) : (arr_30 [i_10] [i_13 + 1] [i_10]))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((!(8754900974012114677 <= 18446744073701163008)));
    #pragma endscop
}
