/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (min(var_18, ((max(((-117 ? (arr_2 [i_0]) : (arr_2 [i_0]))), (arr_2 [i_0]))))));
        var_19 ^= -113;

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_1] = var_14;
                var_20 = (min(var_20, var_5));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] = ((-(((arr_4 [i_1]) ? 1909696705 : (arr_4 [i_1])))));
                            arr_16 [i_0] [5] [i_1] [7] [i_0] [i_0] = (((~(arr_3 [i_4 + 1] [i_3 - 1] [i_1 + 1]))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_1] = ((!(arr_12 [i_0] [i_0] [i_3 - 1] [i_4 - 2] [i_4 - 2] [i_0] [i_3 - 1])));
                        }
                    }
                }
                var_21 = (((((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0])))) ? (((!(arr_3 [i_0] [i_0] [i_2])))) : (max(-1874912300, 1)))));
            }
            arr_18 [i_1] [0] = (((arr_11 [i_1]) == (54617 / var_9)));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_22 [i_5 + 1] [i_5 + 1] = ((!(max((!-1073741824), ((!(arr_10 [i_0] [i_5] [0] [i_5])))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_22 = (max(3078756034, (arr_20 [i_5] [i_5 + 1] [i_6 + 1])));
                        arr_28 [7] [i_6] = max((((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6 + 2]) ? (arr_23 [i_5 - 1] [i_5] [i_6] [i_6 + 2]) : (arr_23 [i_5 + 1] [i_5] [i_6] [i_6 + 1]))), ((-(arr_14 [i_5 + 2] [4] [2]))));
                        arr_29 [i_5] [i_0] [i_0] [i_7] [i_0] |= (min(((max(0, -121))), (((-(max(1023935104, 36017)))))));
                    }
                }
            }
        }
        var_23 = (((((1 ? 4229368957 : 499945438))) ^ ((((max(790513115, 0)) ^ ((max(13011, 30311))))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_40 [i_10] [i_10] [i_10] [4] [i_10] [i_10] = (((48717 | 0) ? (arr_35 [i_8] [0] [0]) : (max((arr_13 [i_0] [i_8 + 2] [i_9 - 1] [i_10] [i_9 - 1] [i_8 + 2]), (max((arr_3 [i_0] [0] [i_9]), 2714294240))))));
                        var_24 = (-(arr_14 [i_0] [i_8 + 2] [i_0]));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        var_25 = (((~1) ? (-1 | 4611686018427387903) : (((var_1 ? (arr_42 [i_11] [i_11]) : var_1)))));
        var_26 = (arr_42 [i_11] [i_11]);
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            {
                arr_49 [i_12] [i_12] [i_12] = (max(((((!(arr_44 [i_12]))))), (max((arr_42 [i_13 + 1] [i_13 + 1]), 234567639))));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_27 = (arr_54 [i_12] [i_13]);
                                var_28 = (max(var_28, (arr_48 [i_14 + 1] [i_16])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_1;
    var_30 = 12;
    #pragma endscop
}
