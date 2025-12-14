/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_3 + var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [7] [7] &= (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3 - 2] = (arr_9 [1] [i_1] [i_1] [1] [i_1]);
                            var_21 = ((((((max(805222721815359493, var_0))) ? var_14 : ((max(12194, 12200)))))) ? 53355 : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]));
                            arr_12 [10] [12] [i_0] [10] [10] [i_0] = (arr_8 [4] [8] [i_1] [i_1] [i_0]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_5] [12] = var_15;
                        arr_18 [i_1] [i_5] [i_5 - 3] = (arr_13 [i_5 - 3] [i_4] [i_1] [i_0]);
                        var_22 = (arr_10 [i_0] [i_4] [i_1] [i_0]);
                        var_23 = (((var_2 ? (arr_2 [i_1 + 1]) : (arr_16 [i_1 + 1] [i_1 - 1]))));
                    }
                    for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_24 = var_14;
                        var_25 += ((((max((arr_16 [i_0] [i_0]), -5935642885180883117))) ? (arr_10 [i_0] [i_1] [i_4] [i_0]) : (arr_22 [4] [i_1] [i_4] [i_1 + 1])));
                    }
                    arr_23 [i_0] [i_1 + 1] [1] = var_15;

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_26 = ((-(((((arr_27 [i_7 - 1] [i_0] [i_0]) != var_6)) ? var_11 : (arr_6 [3])))));
                        var_27 = (((arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 1]) >> (((max((arr_20 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]), 17641521351894192105)) - 17641521351894192089))));
                        var_28 = 805222721815359479;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_29 = (max(var_29, (((((max(((var_15 ? (arr_14 [i_1] [i_4] [i_4]) : (arr_21 [i_0] [i_0] [10] [i_0]))), (arr_25 [i_0] [i_0] [7] [7] [i_0])))) ? (arr_0 [i_1 - 1]) : (arr_16 [i_1 - 1] [i_1 + 1]))))));
                        var_30 += 0;
                    }
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_37 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_11] = (max(9223372036854775807, (arr_27 [i_0] [i_9 + 2] [i_9 + 2])));
                                var_31 = ((max((arr_13 [i_1 - 1] [i_9 - 1] [5] [i_9]), (arr_13 [i_1 - 1] [i_9 + 2] [1] [6]))));
                                arr_38 [i_11 - 4] [i_10 - 2] [i_9] [i_1 + 1] [i_0] [i_0] [i_0] = ((var_13 ? 40434 : ((((var_5 ? var_18 : var_15))))));
                                arr_39 [i_0] [i_0] [i_0] [9] [i_11] = (arr_36 [i_0] [i_1] [5] [i_1] [i_1]);
                            }
                        }
                    }
                    arr_40 [i_9 + 3] = ((var_18 ? var_11 : (arr_22 [i_0] [i_9 + 1] [i_9 + 2] [i_1 + 1])));
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_32 = (max((((var_11 % var_8) ? (arr_31 [i_0] [i_0] [i_0] [i_0]) : 7161163601454100262)), ((+((1 ? (arr_24 [i_0] [i_0] [i_12]) : 216))))));
                    var_33 = (arr_25 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
