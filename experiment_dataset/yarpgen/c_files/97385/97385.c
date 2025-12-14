/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 = 42122;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = 42131;
            arr_7 [i_0] [i_0] = 23405;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_21 = var_14;

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                var_22 = (((arr_2 [i_0 + 2]) && (arr_2 [i_0 - 3])));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_17 [i_0 - 2] [i_2] [i_0 - 2] [i_0] [i_2] [i_4] = (((arr_6 [i_3 + 3] [i_0 - 1] [i_0]) ? (arr_5 [i_3] [i_3 - 1]) : (arr_6 [i_3 - 1] [i_0 - 2] [8])));
                    arr_18 [i_4] [i_0] [i_2] [i_0] [i_0] = ((~(((arr_11 [i_0 - 2] [i_0 - 2] [i_3] [i_4]) ? var_7 : (arr_0 [i_0] [i_0 - 1])))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_21 [5] [5] [i_0] [i_5] = ((arr_19 [5] [i_0 + 2]) / (arr_12 [i_0] [i_0 + 1] [i_3 + 2]));
                    var_23 = ((!(arr_10 [i_0 + 2])));
                    arr_22 [i_0] [i_0] [i_0] = (arr_6 [13] [i_2] [i_2]);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_25 [i_0] [i_0] = var_4;
                    var_24 = (23414 ? 4294967295 : 0);
                    var_25 = 437302864;
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_26 = ((var_6 ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 2]) : (arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2])));
                arr_28 [i_0] [i_2] [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3]);
                var_27 = (((arr_0 [i_0 - 2] [i_0 + 2]) >= (arr_10 [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] = (arr_31 [i_9 + 1] [i_0 + 1]);
                            arr_36 [i_0] [12] [i_7] [1] [i_9] [i_0 - 1] [i_9] = ((3857664432 < (arr_8 [i_9] [i_0 - 2] [i_9 + 1])));
                        }
                    }
                }
            }
            var_28 = var_7;
            var_29 = ((var_11 ? var_12 : (arr_5 [i_0 + 1] [i_2])));
            var_30 = ((-(arr_23 [i_2] [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_0 - 1])));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_41 [8] [i_10] [i_0] = 42122;
            var_31 = (((((1 > (arr_33 [i_0 - 2])))) - 8533292040252646285));
        }
    }
    var_32 = var_15;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                var_33 = (((((max((arr_43 [i_12]), (arr_43 [13]))))) | ((62582 | (arr_45 [i_12])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_54 [i_11] [i_12] [i_13] [i_14] [i_14] = (((1 * 65535) ? (((((max(var_17, 0)))) % ((62582 ? var_9 : var_10)))) : var_9));
                            var_34 = max(-var_3, (max(3857664432, 10940)));
                        }
                    }
                }
                arr_55 [i_12] [i_11] = (max((((62612 || ((((arr_42 [i_11] [i_11]) << (56682 - 56682))))))), ((var_12 ? 37501 : var_14))));

                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    var_35 = 22184;
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_63 [i_17] [i_17] [i_17] [i_17] [i_17] = (((arr_61 [1] [i_12] [i_16] [i_16] [1]) == (((var_1 && (var_7 || 5359))))));
                                arr_64 [i_15] [i_15] = (arr_59 [i_11] [i_12] [i_15] [i_15]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = max((((!(((var_14 ? 5367 : 22704)))))), (min((var_13 | 0), var_10)));
    var_37 = var_7;
    #pragma endscop
}
