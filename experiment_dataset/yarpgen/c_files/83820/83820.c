/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 + 1] [i_0] [i_2] [i_3 + 1] = 1;
                            arr_14 [i_0] [6] [i_0] = (((((0 ^ (arr_1 [i_0 + 1])))) | ((~(arr_12 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_3])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_11 = (max((arr_4 [i_0] [0]), 1));
                                var_12 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_2 - ((((1 ? 1 : 1))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                var_14 += ((+(((arr_18 [i_8] [i_8] [i_8] [i_8 - 1]) / (max((arr_20 [i_7] [22] [5] [i_7]), (arr_22 [10])))))));
                var_15 = 1;
                var_16 = 16017316523644378095;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_33 [6] [11] [11] [i_7] [i_8] = ((((max((arr_6 [i_8] [7]), (arr_6 [i_7] [i_7])))) ? (((arr_6 [i_8] [i_8]) ? (arr_18 [23] [23] [17] [i_8 - 1]) : (arr_18 [9] [i_8] [9] [i_8 - 1]))) : (arr_18 [2] [2] [i_7] [i_8 - 1])));
                            var_17 = ((~(((arr_26 [i_7] [0] [i_7]) ? (arr_16 [6] [6] [6] [6]) : (arr_32 [i_7] [i_7] [6] [i_7])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((447972823 ? ((var_10 ? 2003267000 : -26)) : 5684))) ? ((((max(263601326, var_1))) / (var_10 - var_7))) : 3846994447));
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                {
                    arr_40 [1] [i_11] [i_11] = ((((-(arr_7 [i_13] [i_13] [i_13 + 1] [i_11 - 1]))) / (arr_2 [i_12])));
                    var_19 = -1520919577;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_20 = ((((((((arr_18 [i_12] [12] [12] [12]) * -4))) ? (arr_23 [i_13] [i_13] [i_13 + 2] [i_13]) : var_0)) * (arr_9 [6] [i_11 - 1] [i_14] [i_13 - 1])));
                                var_21 = (arr_35 [i_12]);
                                arr_45 [i_11] [1] [i_13] [i_13] [12] [21] [1] = 2429427550065173521;
                            }
                        }
                    }
                    arr_46 [i_13] [i_12] = (~2574277032);
                }
            }
        }
    }
    #pragma endscop
}
