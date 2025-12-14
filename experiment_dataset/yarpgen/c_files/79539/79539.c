/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((~(min(-1, var_4))));
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = ((((var_5 ? (arr_0 [i_0] [i_0]) : var_7)) < var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 4470));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((-7107832256904502274 ? (((arr_8 [i_0] [i_1] [i_3] [i_4]) & 7107832256904502264)) : -684071013));
                                var_14 |= ((-(-6 - var_1)));
                                var_15 |= (-32767 - 1);
                                arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] |= var_3;
                            }
                        }
                    }
                    var_16 = (max(var_16, (arr_5 [i_0] [i_2])));
                    var_17 = (min(var_17, ((((var_8 > (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] &= 18446744073709551591;
                                var_18 = (arr_9 [i_0]);
                                var_19 = (((((-(arr_6 [i_0] [i_1] [i_5])))) ? (arr_10 [i_0] [i_0] [i_6] [i_5] [i_0]) : -446128524));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_24 [i_7] = (((arr_20 [i_0] [i_0] [i_8]) >= ((~(arr_1 [i_0])))));
                    var_20 = 7107832256904502300;
                    var_21 = (max(var_21, ((((((arr_15 [i_0] [i_7] [i_8] [i_7] [i_8]) ? var_8 : var_0)) >= (arr_11 [i_0 + 2]))))));
                }
            }
        }
        var_22 = -var_3;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            {
                var_23 = ((max((arr_14 [i_9] [i_9] [i_9] [i_10] [i_10 + 2] [i_9]), (((arr_15 [i_9] [i_10] [i_10] [i_9] [i_10]) - -7107832256904502265)))));
                var_24 = (max(var_24, (arr_19 [6] [i_10] [i_10])));
                arr_30 [i_9] = ((-((((arr_9 [i_9]) < var_9)))));
                var_25 ^= (max(3517263559, (((var_6 && (((-7107832256904502251 - (arr_10 [i_10] [i_10] [i_9] [i_9] [i_9])))))))));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
