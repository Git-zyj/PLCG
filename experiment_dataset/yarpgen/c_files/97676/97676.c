/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [6] [i_2] [i_3] [i_4] [i_4] = var_8;
                                arr_12 [i_3] [i_1] = arr_5 [i_2];
                            }
                        }
                    }
                    var_18 = (~72);
                    var_19 = ((arr_10 [i_2] [i_2] [6]) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((arr_10 [i_2] [i_2] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [3]) : (arr_7 [i_0] [i_1] [i_2] [i_2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_6] [i_7] [i_7] = -72;
                            var_20 -= 67;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_34 [i_5] [i_5] [i_9] = (arr_31 [i_9]);
                                var_21 = (min(var_21, (arr_26 [i_5] [i_6] [i_10 + 2] [i_11 - 4])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            arr_41 [i_5] [i_6] [i_12] [i_12 + 1] [i_12 + 1] = (min((max((arr_17 [i_12 + 4] [i_6]), (arr_29 [i_5] [i_12]))), (64 * -70)));
                            var_22 ^= ((((((~var_13) ^ (arr_26 [i_5] [i_5] [i_12 + 1] [i_13])))) ? (arr_24 [17] [9] [19] [i_12 + 1] [i_13]) : ((~(arr_16 [i_13] [i_6] [i_5])))));
                            var_23 = (((arr_28 [i_13] [i_12 + 2] [i_12] [i_13]) == (!63)));
                            arr_42 [i_12] = ((+((+((-78 ? (arr_27 [i_12 + 4] [i_6] [i_5]) : -73))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 3; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                arr_51 [20] [i_6] [i_14 - 1] [i_14] [i_14] [i_14] [4] = (max(77, (max((77 & 64), -73))));
                                arr_52 [i_16] [9] [i_14] [i_14] [i_6] [17] = 72;
                                arr_53 [i_14] [1] [i_14] [i_15] = (((((-(arr_40 [i_5] [i_5] [i_14 - 2] [i_14 - 2] [i_14 - 3])))) ? (((arr_40 [i_5] [i_6] [i_14 + 1] [i_6] [i_14 + 1]) ? (arr_40 [i_5] [i_5] [i_5] [i_15] [i_14 - 3]) : (arr_40 [i_5] [i_5] [i_14] [1] [i_14 - 3]))) : (((((arr_40 [i_6] [2] [17] [i_15] [i_14 + 1]) + 2147483647)) << (((((arr_40 [i_5] [i_6] [16] [19] [i_14 - 1]) + 101)) - 14))))));
                                arr_54 [i_14] [i_6] [i_6] [i_6] [i_6] [i_6] = (-75 + -64);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= (((~(var_17 & var_7))));
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            {
                var_25 = 67;
                var_26 = -94;
            }
        }
    }
    var_27 = (min(var_27, var_4));
    #pragma endscop
}
