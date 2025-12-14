/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 ^= ((-((18446744073709551605 * ((max((arr_4 [i_0] [i_1]), 2251524935778304)))))));
                                var_12 = (min(var_12, 2251524935778297));
                                var_13 = ((18446744073709551605 & (arr_8 [i_0] [i_1] [i_2] [i_0] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] = (min((((((max(24157, (arr_16 [i_0] [7] [i_6])))) & 0))), ((+(max((arr_5 [i_2] [i_5 + 1] [i_6]), -116))))));
                                var_14 *= ((-((var_7 ? (arr_9 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 2]) : (arr_9 [i_1] [5] [i_1] [i_1] [i_5] [i_5 + 2] [i_5 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_15 = (max((((((arr_3 [i_0]) ? 10275 : (arr_12 [i_1] [i_2] [i_0] [i_8]))) ^ var_10)), (((arr_2 [i_2] [i_1] [i_0]) ? (arr_12 [i_0] [i_1] [i_0] [i_7]) : (64 + 55261)))));
                                arr_24 [i_8] [i_8] [20] [i_8] [i_8] &= 1324299757;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_38 [i_9] [i_10] [6] [i_12] [i_13 + 1] = (((arr_1 [i_9]) - (!24151)));
                                var_16 = 32756;
                                arr_39 [i_9] [i_10] [i_11] = (((((arr_6 [i_11] [i_13] [i_12 - 1] [i_11]) - 0)) * (((arr_6 [i_12 + 2] [i_11] [i_12 + 2] [i_11]) ? (arr_6 [i_13] [i_13] [i_12 + 3] [i_9]) : (arr_6 [i_12] [i_12 + 1] [i_12 + 2] [i_10])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 22;i_15 += 1)
                        {
                            {
                                arr_45 [i_14] [i_11] [i_11] [i_14] [i_15] = var_8;
                                arr_46 [i_9] [i_14] [i_10] [i_11] [i_14] [i_15] = (-115 > 1);
                                var_17 -= 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_51 [i_17] [i_10] = ((!(arr_16 [16] [i_17 + 1] [i_17 + 1])));
                                arr_52 [i_17] [i_16] [i_16] [i_11] [i_17] [i_17] = ((+((((arr_17 [i_9] [i_10] [i_17] [i_16] [i_11]) && (arr_17 [i_9] [i_10] [i_11] [i_16] [i_11]))))));
                                var_18 = (max(var_18, (((((!(arr_1 [i_9]))) ? (min((arr_17 [i_9] [i_10] [i_11] [i_16] [i_17 - 1]), (arr_17 [i_9] [i_11] [i_11] [i_11] [i_17 + 1]))) : (-127 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
