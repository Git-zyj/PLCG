/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [4] [i_0] [i_0] [i_2] [15] [15] [i_4] = -var_11;
                                arr_12 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 - 2] [0] = var_13;
                                var_16 = (max(var_14, (((((var_14 ? (arr_4 [i_1] [i_1] [i_1]) : (arr_1 [i_0] [i_1])))) ? (arr_4 [i_0] [i_0] [i_2]) : (min(var_13, var_0))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [14] = (min(var_5, (arr_5 [i_0] [3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 += (((((((min(2811969351, (arr_18 [i_0])))) ? (arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [1]) : (arr_16 [i_1])))) ? (((max((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]), var_4)))) : (max(-5, var_14))));
                                var_18 = (max(var_18, ((min(var_8, (((((!(arr_10 [8] [i_0] [i_0] [i_0]))) ? var_4 : 2147483647))))))));
                                var_19 *= (arr_17 [1] [1] [i_1 + 2] [i_1] [i_1 + 2] [1] [i_6]);
                                var_20 = (min(var_20, ((max((arr_7 [14] [14] [i_2] [i_5] [i_6]), ((((arr_9 [i_0] [0] [i_6] [0] [i_1 + 1] [6]) ? (arr_9 [i_6] [i_6] [i_2] [i_2] [i_1 - 2] [i_2]) : (arr_5 [i_1 - 2] [i_6])))))))));
                                var_21 = (max(var_21, ((max(-127, (-var_14 / var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            {
                var_22 = 14307832029874059130;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_23 = ((!((((arr_25 [i_7]) ? ((((arr_29 [i_7] [i_10]) ? (arr_0 [i_9] [i_9]) : (arr_0 [i_10] [i_7])))) : ((-1042390495 ? (arr_4 [i_8] [0] [16]) : (arr_23 [i_10]))))))));
                            var_24 += ((!(((((max(var_2, var_7))) ? var_14 : ((-(arr_10 [i_7] [i_7] [i_7] [9]))))))));
                        }
                    }
                }
                var_25 += ((((((var_6 * (arr_0 [i_7] [2])))) ? (min((arr_14 [i_8] [5] [i_8] [1] [1]), (arr_8 [5] [5] [0]))) : (arr_30 [i_8 + 2] [i_8] [i_8 + 2] [i_8 - 2]))));
                arr_32 [i_7] [i_7] = (max((((arr_7 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_7] [i_7]) * var_6)), (((min(var_7, var_7))))));
            }
        }
    }
    #pragma endscop
}
