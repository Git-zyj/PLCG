/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(29822, 1)))) != 18310110511355615578));
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((max(((var_1 ^ (arr_0 [i_0] [i_0]))), (((!(arr_0 [i_0] [i_0])))))));
        var_17 = ((((((arr_0 [i_0] [i_0]) & ((var_9 ? var_2 : (arr_0 [0] [i_0])))))) ? (arr_0 [i_0] [i_0]) : ((-((((arr_1 [i_0] [i_0]) != (arr_0 [i_0] [9]))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = ((-(arr_2 [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [2] [i_3 + 1] [i_4] = ((~(arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_2 + 1] [i_2 + 1])));
                            arr_15 [i_4] [i_0] [i_3] [i_0] [i_0] [i_0] = ((var_7 ? (arr_9 [i_1] [i_0] [i_1 - 2]) : (arr_9 [i_0] [i_0] [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-(arr_3 [i_0]))) == (((arr_4 [i_0]) + (arr_11 [i_0] [12])))));
                            var_18 = (((arr_10 [i_1 + 2] [i_1] [i_1 + 2] [i_2 - 1] [i_0]) <= ((~(arr_8 [i_4])))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_1 - 1] [i_1 - 2]) ? ((var_6 ? var_13 : (arr_2 [10]))) : 2305216565850862790));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_21 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
            var_19 = (-2147483647 - 1);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (arr_7 [i_0] [i_6] [i_6]);
                    var_21 = max((var_2 != var_13), var_10);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_6] [i_7] [i_8] [i_0] [i_8] [i_9] = (arr_1 [i_0] [i_0]);
                                arr_33 [i_0] [i_0] [i_0] [i_0] [5] = (max((arr_27 [i_0] [i_0]), var_0));
                                var_22 = (((arr_18 [i_0]) ? (arr_18 [i_0]) : (((arr_18 [i_0]) | (arr_18 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
        arr_34 [i_0] = (((((!(var_6 / var_3)))) != (arr_0 [i_0] [8])));
    }
    #pragma endscop
}
