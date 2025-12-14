/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (min(((((((arr_4 [12] [i_0] [5]) & var_1))) ^ (arr_3 [i_0] [i_0] [i_0]))), (-22 ^ -3794231554248996646)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (max(((((!(arr_6 [i_4] [i_0] [i_0]))) ? ((var_1 ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]) : (arr_7 [1] [i_2] [i_0] [i_3 + 1]))) : (arr_13 [10] [i_1] [i_1] [i_1 + 1] [i_1]))), (((var_11 ? ((var_1 ^ (arr_9 [12] [12] [i_2] [12] [8] [12]))) : var_1)))));
                                arr_15 [i_0] [i_1] [i_2] [7] [i_4] = (((min((arr_8 [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3]), var_1)) != (arr_9 [i_0] [5] [i_1 - 1] [i_4 + 2] [i_4] [i_3 + 2])));
                                var_13 = ((max((arr_11 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 1]), (arr_11 [13] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [i_5] = ((max((max(var_3, (arr_3 [13] [13] [i_5])), (arr_18 [i_0] [i_1] [i_0] [i_0])))));
                    var_14 += -var_1;
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_23 [i_0] [i_1] [i_0] = ((((min(var_3, (arr_20 [i_0] [i_6])))) ? (max((arr_4 [i_0] [i_1] [i_6]), (max((arr_4 [i_0] [6] [i_6]), var_4)))) : (((((arr_8 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1]) < (((arr_11 [i_6] [i_6] [2] [i_1] [13] [i_0]) / (arr_22 [i_0] [i_0] [i_1 + 1] [i_6])))))))));
                    arr_24 [i_6] = (min(((((arr_17 [i_0] [i_1] [i_1 + 1] [13]) ? (arr_17 [i_0] [i_0] [i_1 - 2] [i_1 - 2]) : (arr_17 [i_0] [i_0] [i_1 + 1] [i_0])))), (arr_17 [i_0] [i_1] [i_1 - 2] [i_0])));
                }
            }
        }
    }
    var_15 |= var_12;
    var_16 = var_6;
    #pragma endscop
}
