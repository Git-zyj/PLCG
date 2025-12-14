/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = (((((((max((arr_0 [i_0]), var_8))) ^ 1))) ? ((~(arr_5 [i_0] [i_0]))) : (min((var_9 - -1543374306), (((arr_0 [i_3]) << (1073741823 - 1073741811)))))));
                                var_10 = ((var_1 ? (((~(arr_11 [i_0] [i_1 + 1] [i_3] [i_4])))) : (((((127 ? 62 : 15))) ? ((140 ? var_8 : 1073741823)) : (arr_2 [i_1 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_11 = (((((arr_13 [i_1] [i_2] [i_6]) ? (arr_6 [i_0] [i_2] [i_5] [i_6]) : (arr_15 [i_0] [i_1] [i_5] [i_5] [i_6]))) <= (((arr_13 [i_5] [i_1 - 2] [i_0]) ? (arr_15 [i_0] [i_1] [i_2] [i_5] [i_6]) : var_8))));
                                var_12 -= 1583290282;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_22 [i_7] [i_7] [i_7])));
                    arr_27 [i_7] [i_7] = min(-1, (arr_24 [i_7] [i_7] [i_8] [i_9]));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_32 [i_7] [i_8] [i_11] [i_10] [i_7] [i_8] [i_7] = ((min((((!(arr_19 [i_11])))), (arr_18 [i_11 - 1] [i_10 + 1]))));
                                var_14 = arr_22 [i_7] [i_9] [i_10];
                                var_15 -= (arr_21 [i_11 - 1] [i_9]);
                                arr_33 [i_11 - 1] [i_10] [i_9] [i_8] [i_7] = (((1023 + var_2) ? 255 : ((min((arr_22 [i_11] [i_11 - 1] [i_11 - 1]), var_6)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_39 [i_13] [i_12] [i_12] [i_9] [i_8] [i_7] = (((min((var_3 & var_7), 1522915171)) >= ((((arr_24 [i_13] [i_8] [i_9] [i_12]) ? (arr_22 [i_7] [i_8] [i_13]) : (arr_24 [i_7] [i_8] [i_9] [i_13]))))));
                                var_16 = ((((min((~1583290282), -1583290283))) ? (((min(var_9, -1583290283)) ^ var_7)) : ((((arr_38 [i_12] [i_8]) <= (var_2 + var_0))))));
                                var_17 -= (var_8 ? ((min(209, 23691))) : (arr_19 [i_7]));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                {
                    var_18 = ((~(min(((133397491 ? 11412 : 136)), -1583290283))));
                    var_19 = (min(var_19, ((((2370622561 ? (arr_19 [i_16 + 2]) : var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
