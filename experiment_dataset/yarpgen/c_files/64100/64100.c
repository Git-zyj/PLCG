/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [2] [i_4] = (max((((arr_5 [i_0] [i_1]) / var_2)), (arr_2 [i_4])));
                                var_12 = 0;
                                arr_15 [i_0] [3] [i_0] [i_0] [i_0] [i_0] = ((var_5 ? (((arr_12 [i_4 + 1] [i_4] [i_4] [10] [i_4 - 1] [i_0]) + (arr_10 [i_4 - 1] [i_4 - 3] [i_4 + 1] [i_4] [i_4 - 1]))) : var_9));
                            }
                        }
                    }
                    var_13 = ((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) / (((max((arr_4 [i_0] [i_0]), var_8)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_14 = var_6;
                                arr_28 [i_5] [i_5] [i_7] [i_8] [i_7] [i_9] = ((((arr_27 [i_5] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_5]) ? (arr_27 [i_5] [i_5] [i_5] [i_7] [i_7 + 1] [i_5]) : (arr_27 [i_7 + 1] [0] [i_7 + 1] [0] [i_7 + 1] [i_5]))));
                            }
                        }
                    }
                    var_15 = (max(var_15, ((max(((((arr_21 [i_7 + 1] [i_6 + 3] [i_6 - 2]) >= var_0))), (arr_2 [i_5]))))));
                    arr_29 [i_5] [i_5] [4] = (arr_7 [i_5] [i_5] [1] [i_5]);
                    arr_30 [i_5] [i_5] [i_7] = ((1 | var_0) <= (max((arr_26 [i_5] [i_7 + 1] [i_7 + 1] [i_6 + 2] [i_5]), (arr_3 [i_5] [i_5]))));
                }
            }
        }
    }
    var_16 &= ((var_10 + (1 ^ 0)));
    #pragma endscop
}
