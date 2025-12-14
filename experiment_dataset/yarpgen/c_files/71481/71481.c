/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [19] [i_0] [i_2] [i_3] = ((((((((arr_1 [15]) % (arr_0 [i_2] [i_1])))))) >= (min(((9223372036854775807 % (arr_2 [i_0 + 2] [i_3]))), (arr_9 [i_0] [i_0 - 1] [i_0] [i_1] [i_1] [i_3 - 1])))));
                        arr_11 [i_0] [i_0] [12] [21] = min((((min(3422159783, var_0)) | (arr_0 [i_0] [i_2]))), ((((282836298 ? (arr_1 [i_3]) : 48)) / (((var_4 ? 192 : var_7))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = 0;
                        var_15 = ((arr_3 [i_1] [i_3]) && (((-((-(arr_9 [i_0] [1] [i_0] [i_0] [i_0] [1])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_16 = ((-(arr_5 [i_0 + 1])));
                        var_17 *= (((arr_9 [8] [i_1] [18] [i_0 - 1] [i_0 - 1] [i_1]) ? (arr_9 [17] [0] [i_2] [i_0 - 1] [0] [i_0]) : (arr_9 [13] [i_1] [i_2] [i_0 + 2] [i_4] [12])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_18 = (((((arr_1 [i_2]) * 4294967295)) * (arr_1 [i_0])));
                            var_19 = ((1 ? (arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
                            var_20 = ((-(arr_2 [i_0 - 1] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_22 [24] [i_0] = ((~(arr_0 [i_0 - 1] [i_0 - 1])));
                            arr_23 [i_0] [20] [16] [i_1] [i_0] = -var_3;
                            arr_24 [i_0] [i_1] [i_1] [20] [i_0] [i_0] = (arr_3 [i_0] [i_0 - 1]);
                            arr_25 [i_0] [i_1] [3] [i_4] [i_0] = ((-(arr_0 [i_0] [i_0 + 1])));
                            var_21 = ((-(var_6 % 1)));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_22 = (((arr_14 [i_0 + 1] [i_0 + 2] [i_0] [i_0]) ? (arr_16 [5] [5] [i_0] [i_4] [i_0 + 1] [1]) : (arr_16 [12] [i_1] [i_0] [i_4] [i_0 - 1] [i_7])));
                            var_23 = var_10;
                            var_24 = -1;
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            arr_31 [24] [i_0] [20] [24] [10] [i_4] [1] = arr_18 [7] [7] [i_1] [i_2] [23] [i_8];
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_8] = ((-(arr_19 [i_0] [i_0 - 1] [i_0] [14] [i_0 - 1] [i_0 + 2])));
                        }
                        var_25 = ((-(arr_1 [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        arr_36 [i_0] = ((-(arr_16 [i_9 - 1] [i_9 - 1] [i_0] [20] [i_9 - 1] [i_2])));

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_39 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(var_12 | var_12)));
                            arr_40 [i_0] [i_1] [i_1] [1] [i_1] = ((0 / 1) != (arr_29 [i_0]));
                        }
                        var_26 = (((arr_8 [i_0] [i_1] [i_2]) ? var_2 : (arr_20 [i_0] [i_1] [i_1] [i_1] [i_9])));
                        arr_41 [i_0] = (((arr_37 [i_0] [i_0] [i_2] [i_9 + 1] [i_0 + 1]) == (arr_6 [i_2] [i_1] [i_0])));
                    }
                    var_27 = (((((((arr_4 [i_2] [i_0] [i_2]) / var_14)))) - (((((4294967295 != (arr_19 [i_0] [1] [i_0] [5] [i_0] [5]))) && (((var_12 ^ (arr_18 [i_0] [i_0] [i_0] [1] [i_0] [4])))))))));
                }
            }
        }
    }
    var_28 = (min((((562949953421311 && ((max(1, 0)))))), var_6));
    var_29 &= ((var_6 % (min(var_13, var_1))));
    var_30 = (min(((max((~var_0), -var_12))), (((var_11 - var_3) - (((min(var_0, var_12))))))));
    #pragma endscop
}
