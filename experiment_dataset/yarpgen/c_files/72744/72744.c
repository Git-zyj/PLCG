/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = (arr_3 [i_0] [i_0]);
                    var_11 = (arr_3 [i_0] [i_2]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        arr_8 [i_3] = (arr_6 [i_3] [i_3 - 2]);

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        var_12 -= (((arr_11 [i_5]) ? (arr_15 [i_3]) : (arr_12 [i_3 - 2] [i_4] [i_5] [i_5])));
                        arr_16 [i_3] [i_5] = ((arr_12 [i_3 + 2] [i_4] [i_5] [i_4]) ? (arr_12 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3 + 2]) : (arr_14 [i_3] [i_3]));
                        var_13 &= ((~(arr_6 [i_5] [i_6 - 1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_14 = (arr_19 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 2] [i_8 - 2] [i_8 + 1]);
                            arr_24 [i_3] [i_4] [i_3] [i_3] [i_3] = (!var_9);
                            var_15 = (((arr_12 [i_3 + 2] [i_8 - 1] [i_7] [i_3 + 2]) < (arr_12 [i_3] [i_8 - 2] [7] [11])));
                            var_16 = ((var_5 ? (arr_15 [i_3 + 2]) : (arr_15 [i_3 + 1])));
                            arr_25 [i_3] [i_4] [i_7] [i_4] [i_3] = (arr_6 [i_3] [i_4]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_29 [i_3] [i_10] = ((!(arr_13 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [10])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_35 [i_3] [i_3] = var_0;

                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            arr_39 [i_13] [i_3] [i_11] [i_3] [i_3] [i_3] = ((3169964822 && (arr_38 [i_3] [9] [i_13 - 1] [i_12] [2] [i_11])));
                            var_17 = (min(var_17, (arr_22 [6] [i_13] [10] [i_13] [6] [i_13] [i_13])));
                            arr_40 [i_3] [i_10] [i_11] [i_10] [i_13 - 2] = ((!(arr_34 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3])));
                            var_18 |= ((((~(arr_36 [i_13] [i_12] [2] [i_10] [i_3]))) | (arr_21 [0])));
                            var_19 = (((arr_28 [i_3] [i_3]) >= (arr_6 [i_3] [i_13 - 2])));
                        }
                        for (int i_14 = 2; i_14 < 10;i_14 += 1)
                        {
                            arr_43 [i_3] [4] [i_14] [i_3] = ((!(arr_37 [i_12] [i_3 + 1] [i_3 + 1] [i_3] [i_14 - 2] [10])));
                            var_20 = (min(var_20, ((((arr_17 [i_3] [i_12]) ? (arr_11 [i_14]) : var_8)))));
                            var_21 *= ((var_0 > (arr_38 [4] [i_14] [2] [i_12 + 1] [2] [i_3])));
                            arr_44 [i_3] [i_3] [i_11] [i_12] [i_14 - 1] = ((!(arr_42 [i_14 - 1] [i_14 + 2] [i_14 + 2] [i_14 + 2] [10])));
                        }
                        var_22 = (arr_27 [i_3]);
                        var_23 = (((arr_37 [i_3] [i_3 - 2] [i_12 + 1] [11] [i_3] [7]) ? (arr_37 [i_3] [i_3 + 1] [i_12 + 1] [5] [3] [1]) : var_6));
                        arr_45 [i_3] [i_10] [i_3] [i_3] [i_12 + 1] [11] = (((arr_19 [3] [i_10] [3] [5] [i_10] [i_10]) ? ((-(arr_12 [i_12 - 1] [i_11] [i_3] [i_3]))) : ((var_2 ? (arr_26 [6] [i_3] [i_11]) : (arr_42 [2] [8] [i_3] [8] [i_3])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 8;i_15 += 1)
    {
        arr_48 [i_15] = (3169964814 != 31895);
        arr_49 [i_15] [i_15 + 2] = ((((((arr_38 [i_15] [i_15] [i_15] [i_15] [9] [2]) ? (arr_27 [i_15]) : var_3))) ? (arr_32 [4] [i_15 - 2] [i_15] [i_15 + 1]) : (arr_2 [i_15 - 2] [i_15 - 1])));
        var_24 = (((arr_6 [i_15] [i_15 - 2]) ? (arr_22 [i_15] [i_15 + 2] [i_15] [i_15 + 1] [i_15 + 2] [i_15 + 3] [6]) : (arr_6 [i_15] [i_15 - 1])));
        var_25 = (min(var_25, var_3));
        arr_50 [i_15] = ((var_2 ? (arr_26 [8] [i_15] [i_15 + 2]) : (arr_26 [i_15 + 2] [i_15] [i_15])));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    {
                        var_26 = (arr_54 [i_16] [i_16]);
                        var_27 = (arr_54 [i_16] [i_16]);
                        var_28 = (((((!(arr_63 [i_16] [2] [i_18]))))) - (arr_61 [i_16] [i_17] [i_18] [i_19]));
                    }
                }
            }
        }
        arr_64 [i_16] = (arr_57 [i_16] [i_16]);
    }
    #pragma endscop
}
