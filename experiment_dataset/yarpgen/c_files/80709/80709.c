/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 ^= (((!(arr_9 [i_0 + 2] [i_3 - 1] [i_2] [i_3] [3]))) ? (((min(0, 0)))) : (arr_9 [i_0 + 3] [i_3 + 2] [7] [i_3 + 2] [i_4]));
                                var_20 -= (((((arr_9 [i_0] [i_0 + 4] [i_3 + 2] [i_1 - 1] [i_3 + 1]) < (arr_9 [i_0 + 1] [i_0 + 4] [i_1 + 2] [i_1 - 1] [i_3 + 1]))) ? (arr_9 [2] [i_0 + 4] [i_2] [i_1 - 1] [i_3 + 1]) : (((arr_9 [i_3] [i_0 + 4] [i_1 + 1] [i_1 - 1] [i_3 + 1]) ? (arr_9 [i_3] [i_0 + 4] [i_2] [i_1 - 1] [i_3 + 1]) : 0))));
                                arr_13 [i_1] [i_1] [i_2] [3] [i_4] = (((((min((arr_12 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]), (arr_12 [i_3] [i_3 + 1] [i_3] [0] [i_3 + 1] [i_3]))))) * (max(1, 168710822))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_18 [i_1 - 1] [i_1] [i_2] [i_1] [i_0] = 1;
                                var_21 = arr_16 [i_0] [i_0] [i_1] [i_6 + 2] [i_6];
                                var_22 = min(((((arr_11 [i_6 + 2] [i_6 + 1] [i_6] [i_5] [i_2] [i_1] [i_0]) ? ((1593384749 ? -1593384749 : 3700736486678414434)) : (arr_4 [i_1] [i_1 - 1] [i_1])))), (min((((!(arr_3 [i_1])))), (min(4261168931, 279223176896970752)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_23 = (((((var_7 && (arr_20 [i_7]))))) <= (((arr_20 [i_7]) ? 1 : (arr_20 [i_7]))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_25 [i_7] = (1432300594 ? 4123291726 : 1);
            var_24 = var_13;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_25 = max((0 | 144385239), (((-0 ? 15119 : var_5))));
            var_26 = ((((min(-15131, 2)))) / ((1 ? (~15728640) : 61144)));
            var_27 = (arr_22 [i_7]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_30 [i_7] = ((var_2 || (arr_26 [i_7 + 2] [i_7 + 1] [i_7 + 2])));
            var_28 *= 18167520896812580863;
        }
        var_29 = arr_27 [i_7 + 1] [i_7 + 2];
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                {
                    arr_38 [19] [i_13] [i_12] = var_0;
                    arr_39 [i_12] [i_12] [8] = (max((~1), (((0 != (arr_31 [i_13 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
