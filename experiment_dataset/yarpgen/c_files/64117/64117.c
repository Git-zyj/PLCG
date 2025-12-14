/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 >> (((-32767 - 1) + 32769))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= (arr_4 [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] = ((var_0 < ((~(arr_0 [i_0])))));
                            var_12 = (((((-(((arr_2 [i_3 - 1]) ? 0 : 32324))))) ? 65535 : 65535));
                            var_13 ^= (max((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), 0)), (arr_8 [i_0 - 1] [i_1 + 3] [9])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [17] [i_1] [7] [i_5] [i_4] [i_4] = (((arr_10 [1] [i_1 + 1] [5] [i_1 - 1]) ? (((((1176952023875442368 ? (arr_9 [i_0 + 2] [i_1] [i_4]) : (arr_5 [i_0]))) - (arr_14 [i_4 - 1] [i_4] [i_4] [i_4 + 1])))) : (arr_8 [i_0 + 4] [i_1 + 1] [i_0 + 4])));
                            var_14 += ((var_4 ? (((arr_10 [i_0] [i_4 + 1] [i_1 - 1] [i_5]) - (arr_4 [17] [i_1 + 3]))) : ((((!65535) ? (!-20) : (0 != 4610560118520545280))))));
                        }
                    }
                }
                var_15 ^= ((((max(3289266159, 23271))) ? (((min(var_6, (arr_5 [i_0 + 1]))))) : (arr_15 [19] [i_0] [i_1] [i_1] [i_1 + 3])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_16 = (((((((max((arr_5 [i_6]), var_4))) ? (!0) : 65535))) ? (((4211318996117096051 ? -6508116824160260559 : 1))) : ((~(max((-2147483647 - 1), 15))))));
                    arr_30 [0] [i_7] [i_7] [0] = (((arr_26 [i_6] [5] [i_8]) != (max((((arr_8 [i_6] [3] [3]) / var_4)), ((((arr_10 [i_6] [i_6] [3] [i_6]) >> (4080 - 4055))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 14;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_46 [2] [8] [i_10] [i_12] [i_13 - 1] &= (arr_1 [i_10]);
                                arr_47 [i_9 + 2] [i_9 - 1] [i_9 + 2] [6] [i_10] [i_9 - 1] [i_9] &= (arr_5 [i_9]);
                                arr_48 [i_13 + 2] [16] [i_11] [i_12] [i_10] [i_9 - 1] [i_9] = (arr_34 [1]);
                                arr_49 [i_9] [i_9 - 2] [i_12] [i_9 + 1] [i_9 - 2] = ((!((max((((~(arr_10 [i_9] [i_10 - 4] [i_9] [i_13 - 1])))), 65535)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_58 [i_9 - 2] [16] [i_9 - 2] [13] = 0;
                                arr_59 [i_9] [i_9 + 2] [i_9] [i_9] = (arr_36 [i_9] [i_9] [i_9]);
                                var_17 = (min(1, 8));
                                var_18 = ((((min(3289266157, 1))) - (arr_38 [i_14 - 1] [i_14 - 1])));
                            }
                        }
                    }
                }
                arr_60 [i_9] = (((0 / -57) - (arr_36 [i_9] [i_9 + 2] [i_10])));
            }
        }
    }
    var_19 = (var_9 - var_1);
    #pragma endscop
}
