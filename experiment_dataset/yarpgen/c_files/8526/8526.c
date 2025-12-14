/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = var_10;
                    arr_7 [i_0] [i_1 - 1] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = arr_3 [i_1 - 1];
                                var_12 = arr_11 [1] [1] [i_2] [0] [1] [i_2];
                                arr_15 [1] [1] [i_2] [i_0] [i_4 - 1] [i_0] = ((1 ? 1 : 1));
                                arr_16 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_0] = ((~((var_5 ? 1 : (arr_9 [i_0])))));
                                var_13 -= var_10;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((arr_4 [i_0] [i_0] [i_0] [i_0]) == (min(((max(var_10, 1))), (0 - 1))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_0] [i_1] = (min((max(((min((arr_18 [i_0] [i_0] [1] [i_0]), var_4))), ((1 ? (arr_1 [i_0]) : 1)))), (((!(max(var_8, 1)))))));
                    var_14 = 0;
                    arr_21 [i_0] [i_1] = 1;
                    arr_22 [1] [i_0] [1] = ((0 ? (((((0 | (arr_11 [i_0] [i_0] [i_1] [i_1 - 1] [i_5] [i_5])))) ? ((min(1, 1))) : ((min((arr_9 [i_0]), var_2))))) : (((!(((1 ? var_8 : 0))))))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_15 *= ((~(arr_13 [i_0] [i_0] [i_6] [i_6] [i_6])));
                    var_16 &= (min(((min((max(var_2, var_2)), (min(1, 1))))), (max((var_7 / var_9), (arr_13 [i_0] [i_1] [i_1] [i_6 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [0] [i_1 - 1] [i_1 - 1] [i_7] [i_1 - 1] &= ((((1 || (arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [1]))) ? (max(((0 ? (arr_4 [1] [i_1 - 1] [i_7] [1]) : (arr_10 [i_8] [i_1 - 1] [i_6 - 1]))), ((max(1, 1))))) : (((!(~0))))));
                                arr_30 [i_0] [i_0] [i_7] [1] = (((arr_13 [i_0] [i_1 - 1] [i_6] [i_7] [i_8]) ? (arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((arr_12 [i_7] [i_1 - 1] [i_0] [i_7] [i_6 - 1] [i_1] [i_8]) + ((max(1, 1)))))));
                                arr_31 [i_0] [i_1] [i_0] [i_7] [i_1] = ((1 / ((-((max(1, (arr_23 [i_0] [i_0] [i_0]))))))));
                                var_17 = (min(var_17, ((((arr_26 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] [i_0]) + 1)))));
                                var_18 = (max(var_18, ((min(-var_9, (arr_11 [i_1] [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_7]))))));
                            }
                        }
                    }
                    arr_32 [i_0] = (((((~(arr_13 [i_0] [i_0] [i_0] [i_1] [i_6 - 1])))) ? (((((1 ? 1 : 1))) ? var_9 : ((max((arr_23 [i_1] [i_1] [i_1 - 1]), 1))))) : (arr_12 [1] [i_1] [i_0] [i_0] [i_0] [i_0] [1])));
                    var_19 = ((((var_3 ? 1 : 1)) + ((min((arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]), 1)))));
                }
                arr_33 [i_0] [i_0] = 1;
                arr_34 [0] &= arr_11 [i_0] [i_0] [i_0] [1] [i_1] [1];
            }
        }
    }
    var_20 = ((min((max(var_6, 1)), var_10)) || 1);
    var_21 = max(var_3, 0);
    #pragma endscop
}
