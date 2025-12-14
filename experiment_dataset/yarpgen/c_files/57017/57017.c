/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (((var_13 <= 6565479499001995685) ? ((~(arr_0 [i_0] [i_3]))) : (arr_0 [i_0] [i_0])));
                                var_15 = (((max((arr_4 [i_3] [i_0] [i_0] [i_0]), var_9)) <= (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = (17714155115191610296 + 11881264574707555931);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] = var_11;
                                arr_20 [i_2] [i_0] [i_0] [i_0] [i_2] = (arr_18 [i_2] [i_6] [i_2] [i_1] [i_1]);
                                var_16 = (max(var_16, (((((min((arr_15 [0] [i_5 - 1] [i_5 - 1] [16] [i_6]), (arr_9 [i_5] [i_5] [i_5] [i_6] [i_5])))) ? var_6 : var_5)))));
                            }
                        }
                    }
                    var_17 = (((~(arr_16 [i_0 + 1] [i_1] [i_1] [i_1]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_28 [i_9] [i_7] = (((-(min(17700886892131447016, var_3)))) ^ (max((arr_25 [i_8] [i_7]), -6565479499001995701)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_18 |= ((((6565479499001995701 ? (arr_23 [17] [i_10]) : (min(7831540497141982286, var_3))))) ? (min((arr_31 [i_7] [i_11] [i_11] [i_9] [i_9]), 1546738883)) : ((((max(var_2, var_5)) == var_12))));
                                var_19 += 10615203576567569329;
                            }
                        }
                    }
                    var_20 = (max(var_20, ((((arr_23 [i_7] [i_7]) ^ var_5)))));
                    arr_34 [i_7] [i_8] [i_7] [i_9] &= (-((6557834210205707527 ? (((-1430771012 + 2147483647) << (((((arr_26 [i_7] [i_7] [i_7] [i_9]) + 491244626)) - 7)))) : (arr_29 [i_7] [i_7] [i_9] [i_7] [0] [i_7]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((~((6565479499001995680 ^ (arr_23 [i_12] [i_13 + 2]))))))));
                                var_22 = (max(var_22, (((max(6745187532471859370, 11338534521922069951)) & -1430771012))));
                                arr_40 [i_7] [i_7] [i_9] [3] [i_7] = (((min((arr_29 [i_13] [i_13] [i_13] [i_13 - 2] [i_13 + 1] [i_13 + 2]), (arr_29 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 2] [4])))) ? -1555071025 : var_13);
                                var_23 = ((((((((var_0 ? var_3 : (arr_38 [i_8] [i_8] [i_13] [i_8] [i_12] [i_12] [i_8])))) ? (-420586826 || var_4) : (-420586832 <= var_11)))) || (arr_22 [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
