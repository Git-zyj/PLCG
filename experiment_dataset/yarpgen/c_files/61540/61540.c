/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min(37978, 37990));
        var_18 = (max(var_18, var_7));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (min(var_19, ((((arr_0 [i_1]) ? ((max(var_14, (arr_3 [i_1] [i_1])))) : (((var_1 ^ 7425) >> ((((~(arr_1 [i_1] [i_1]))) + 16069)))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_3] [i_2] [i_2] [5] = (((arr_10 [i_1] [i_2] [i_3]) < ((max((arr_9 [i_1] [i_2] [i_3] [i_4]), (arr_9 [i_1] [11] [i_3] [i_4]))))));
                        arr_14 [i_1] [i_1] [i_1] = (arr_12 [i_1] [i_1] [i_3] [i_3] [i_1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_7));
                                arr_25 [i_1] [i_8] |= ((((((-(arr_24 [i_1] [i_6] [i_6] [i_7] [i_8] [i_5] [i_7]))))) ? (arr_17 [i_6] [9]) : (((((18939 ? var_14 : var_13))) ? ((var_7 ? (arr_7 [i_1] [i_5]) : var_10)) : (((arr_10 [10] [10] [i_6]) ? (arr_24 [i_8] [i_7] [i_6] [i_7] [i_7] [11] [i_1]) : var_1))))));
                                var_21 *= ((!((((arr_21 [i_1]) >> (((arr_21 [i_1]) - 5207)))))));
                                var_22 *= var_0;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_30 [i_5] [14] [i_5] = (max(((var_8 ? (arr_0 [i_1]) : var_6)), (((var_3 > (~3517694964))))));
                        var_23 *= ((((((~(arr_16 [i_5] [i_5]))) != ((min((arr_26 [i_9]), (arr_4 [i_9] [i_1])))))) ? (arr_10 [i_1] [i_5] [i_6]) : (((!(((7408 ? 1 : 65335))))))));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_33 [i_10] [i_10] [i_6] [i_10] [15] [i_10] = (((min(var_5, (arr_4 [i_10] [i_6]))) >> ((min((arr_4 [i_10] [i_5]), (arr_4 [i_1] [i_5]))))));
                        var_24 = ((!(((max(var_10, (-2147483647 - 1)))))));
                        arr_34 [2] [2] [i_10] [0] = max(var_13, (arr_21 [i_1]));
                        var_25 = max((max(var_4, (arr_32 [i_1]))), var_16);
                        arr_35 [i_10] [i_5] [i_6] [i_10] = (min(((var_9 ? (arr_12 [i_1] [i_1] [i_6] [14] [i_10]) : var_11)), (((0 ? ((min(var_0, 0))) : (1 ^ 7408))))));
                    }
                    var_26 = var_8;
                    arr_36 [i_1] [i_5] [i_6] = (min(((((arr_24 [i_6] [i_6] [i_5] [i_5] [1] [i_5] [1]) ? var_9 : (((arr_21 [i_1]) ? (arr_22 [15] [15] [i_1]) : (arr_17 [i_1] [i_5])))))), ((~(min(var_5, (arr_29 [15] [i_5] [i_5] [i_5] [i_5] [1])))))));
                    var_27 = ((var_6 <= (((((~(arr_32 [i_1]))) << (((((arr_32 [i_5]) + 1686675498)) - 26)))))));
                }
            }
        }
        arr_37 [i_1] [12] = (max(((max((arr_23 [i_1]), (((arr_18 [7] [7] [7] [i_1]) / 65534))))), (((arr_18 [i_1] [i_1] [1] [i_1]) ? var_6 : var_16))));
    }
    #pragma endscop
}
