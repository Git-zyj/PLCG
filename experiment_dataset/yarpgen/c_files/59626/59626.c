/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((((((arr_2 [i_2 + 1] [i_0] [i_0]) + (arr_5 [1])))) ? ((-(1 != 1))) : ((-(arr_0 [22])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = (max(((-(arr_0 [i_3]))), (arr_5 [6])));
                                var_13 = (arr_9 [i_0 - 2] [i_4]);
                                var_14 = (max(var_14, ((((max((arr_10 [21] [i_0 + 1] [20] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 + 1])))) ? (arr_10 [i_0] [i_0] [i_2 + 1] [i_3]) : ((~(((arr_2 [i_0] [19] [19]) ? 1 : (arr_1 [4] [4])))))))));
                                var_15 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [21] = arr_4 [10];
                                arr_21 [i_0 - 2] [i_2] [1] [i_0 - 2] [11] = ((-((-(arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_16 = (((arr_22 [4] [4] [2]) ? ((~(arr_10 [22] [0] [0] [i_7]))) : (arr_10 [i_0 - 2] [13] [8] [i_0 - 2])));
                        var_17 = (2147483646 ? (arr_16 [9] [9] [i_2] [0]) : ((18446744073709551615 ^ (arr_19 [0] [20] [i_2] [i_7]))));
                        arr_24 [i_2] [i_2] = (((arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_17 [i_0 - 2] [i_0 - 2] [1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_18 = (((((var_11 ? -32749 : (arr_25 [1] [i_1 - 2] [i_8] [22])))) ? (((arr_10 [i_0] [8] [1] [i_8]) ? (arr_6 [1]) : (arr_5 [i_0]))) : (arr_17 [i_8] [i_2 - 1] [i_1] [i_0])));
                        var_19 = ((-(arr_11 [i_2 + 1] [i_1 - 1] [i_0 + 1] [1] [i_0 - 2])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_20 = ((-(arr_2 [i_1 - 2] [22] [i_1 - 1])));
                        arr_30 [1] [i_2] [i_9] [i_9] [16] = (arr_17 [i_1 + 1] [15] [3] [i_9]);
                        var_21 = (((((-(arr_28 [i_0 + 1])))) ? (((arr_2 [i_0] [1] [i_2]) ? (arr_15 [17] [i_2] [10] [i_9]) : (arr_27 [i_0] [i_1 - 2] [i_2] [i_9]))) : (((32767 ? (arr_9 [i_0 - 1] [15]) : var_3)))));
                        arr_31 [i_0 + 1] [i_2] [i_0] [i_0 - 2] = ((-((-(arr_6 [i_0 + 1])))));
                    }
                    var_22 |= (max(((-((max(var_9, (arr_3 [i_0 - 2] [i_0 - 2])))))), (((0 && (-32767 - 1))))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_7));
    var_24 = max(((var_1 ? ((max(var_11, var_7))) : var_11)), var_7);
    #pragma endscop
}
