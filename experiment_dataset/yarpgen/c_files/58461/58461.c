/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 *= var_7;
                                var_15 = (min(var_15, ((min((arr_11 [i_1] [i_2] [i_2] [i_2]), (((arr_7 [i_3 + 1] [i_1]) << (((max((arr_13 [i_0] [i_0]), (arr_6 [i_3] [i_2]))) - 9535793501991348002)))))))));
                                arr_15 [i_0] &= arr_2 [i_1];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_16 ^= (((arr_12 [7] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 + 1]) || (((var_3 ^ (arr_12 [i_6] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))))));
                                var_17 = (min(var_17, (max((((!(((-(arr_16 [i_5] [i_5] [i_5] [i_5]))))))), (var_8 ^ 230)))));
                            }
                        }
                    }
                    var_18 *= ((-(min(-805395699, var_12))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_26 [i_7] [i_1] [i_2] [i_1] [i_1] [i_7] = (arr_6 [i_7 - 1] [i_8 + 3]);
                                var_19 -= (min((arr_9 [i_0] [i_7 - 1] [i_8 - 1] [i_2]), (max(var_0, (((arr_16 [i_0] [1] [i_2] [i_7]) ? (arr_14 [i_8] [i_7] [i_7] [i_0] [i_1] [i_1] [i_0]) : 1804237270))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_7, (1 * var_5)));
    #pragma endscop
}
