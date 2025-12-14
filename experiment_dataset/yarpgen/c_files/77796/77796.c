/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_1] [i_1] = (max(((-(arr_8 [i_0] [i_0] [i_1 - 2] [i_1] [i_1 - 3] [i_2 + 1]))), (~1)));
                            var_16 = -9223372036854775797;
                            arr_12 [i_1] [i_2] [15] [i_1] = (18014398509481983 / 9223372036854775807);
                            arr_13 [i_1] [i_2] = (arr_5 [i_0] [i_0] [i_1]);
                            arr_14 [i_3] [20] [i_3] [i_3] [i_3] |= (min(((+((var_6 ? (arr_3 [i_0] [i_3]) : var_9)))), (((((max((arr_8 [i_3] [i_3] [i_3] [i_3] [9] [i_3]), (arr_3 [i_2] [i_2])))) || ((max(9223372036854775807, (arr_8 [i_3] [12] [i_3] [i_3] [i_3] [12])))))))));
                        }
                    }
                }
                arr_15 [i_1] = (min(((-(arr_5 [i_0] [i_0] [i_1]))), (((((-(arr_10 [i_1]))) != -347457026)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_0] = (((max((((arr_7 [i_1] [i_1] [i_1] [i_4] [i_5] [i_5]) / (arr_6 [i_1] [i_1] [i_4]))), 60)) * (((!(~-22))))));
                            var_17 = (max((arr_2 [i_1] [i_5 - 1]), (8557631047465027902 + -5038263914361456028)));
                            var_18 = var_1;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_14;
    var_20 = -var_5;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_32 [1] [i_7] [i_7] [i_7] = ((-(((arr_4 [i_9]) ? var_0 : (arr_17 [i_9] [i_9])))));
                            arr_33 [i_9] [i_8] [i_6] [i_6] = var_9;
                        }
                    }
                }
                var_21 *= ((((!(arr_5 [i_6] [i_6] [14]))) ? (((((arr_25 [3]) || 13)) ? 3 : (max(var_2, var_8)))) : (((-127 ? -5 : 25655)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_38 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_7] [i_6] = (~0);
                            arr_39 [4] |= ((var_12 ? (((max((arr_21 [i_6]), (arr_36 [i_11] [i_7] [10] [i_7]))))) : ((~(arr_35 [i_6 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
