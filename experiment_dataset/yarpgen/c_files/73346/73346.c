/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_10 -= (arr_4 [18] [1] [i_2 + 3]);
                    arr_6 [i_0] [i_1] [i_0] = (3200393691 | 3200393686);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 += -var_9;
                                var_12 += max(var_5, ((min(var_2, var_2))));
                                arr_11 [i_0] [i_0] [i_2] [1] [i_0 - 1] [i_3] [i_3] = ((1094573604 ? 3200393691 : (min(3200393716, 1094573580))));
                            }
                        }
                    }
                    var_13 += (max(var_3, (max(((max((arr_7 [i_0 + 1] [i_1] [i_2] [6]), (arr_5 [i_0] [14])))), (((arr_0 [i_2]) ? (arr_10 [i_2] [i_2] [6] [20] [6] [i_0 - 1] [i_0]) : var_5))))));
                    var_14 &= ((max(var_2, (arr_10 [i_0] [i_0 + 2] [22] [10] [4] [i_1] [i_1]))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_5 + 2] [1] [i_0] [i_7] = max((min(var_1, (~var_4))), (max((~var_3), (max(var_6, (arr_1 [i_0]))))));
                                arr_21 [0] [16] [i_0] [i_6] [i_7] = ((-((min((arr_17 [i_6] [i_0 + 2] [3] [21]), (arr_17 [i_1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] = (max((arr_13 [i_1]), (((!(((var_9 ? var_0 : (arr_3 [i_0])))))))));
                }
                var_15 = (((~(arr_17 [i_0 - 1] [14] [1] [1]))));
                var_16 = (arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [11]);

                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    var_17 = (min(var_17, (((3200393722 | (max(3200393691, 1094573574)))))));
                    var_18 = (min(var_18, var_5));
                    arr_26 [i_0] [i_0] [i_8] = (max(((max((arr_9 [i_8] [i_1] [i_8 + 1] [i_1] [i_8] [i_0 + 1] [10]), (arr_9 [19] [i_8] [i_8 + 1] [i_0] [i_0 + 2] [10] [i_8])))), ((-(arr_9 [i_0] [7] [i_8 - 2] [i_1] [i_0 - 1] [i_1] [5])))));
                    arr_27 [i_0] [i_0] [i_1] [i_8] = (((max((arr_9 [i_8 - 2] [13] [i_8] [i_8] [i_8] [11] [i_8 + 1]), var_3)) & (((arr_4 [i_0] [9] [9]) + var_0))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_32 [1] [i_1] [i_0] [1] [i_10] = ((~(min((arr_9 [i_0] [i_0] [8] [1] [i_0 + 2] [i_1] [i_1]), (~1094573596)))));
                                var_19 = (min(var_19, var_9));
                                arr_33 [9] [i_0] [i_8] [i_9] [i_10] = (!var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 7;i_12 += 1)
        {
            {
                arr_38 [1] [i_12] = (arr_23 [i_11] [i_11] [i_11] [i_12]);
                arr_39 [i_11] [3] [6] = (((max(((var_7 ? (arr_15 [i_12] [i_11]) : var_5)), (arr_16 [i_11]))) + (min(var_1, (arr_10 [i_12 + 3] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))));
            }
        }
    }
    #pragma endscop
}
