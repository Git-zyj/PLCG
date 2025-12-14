/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [3] = ((-(((((max(25607, (arr_1 [i_0] [i_0])))) != ((max((arr_3 [i_0]), (arr_1 [i_0] [i_0])))))))));
        var_17 |= arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = ((-((21611 - (39914 + 34778)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [4] [i_4] [i_2] = ((-(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (39872 - 39864)))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_2] [i_0] [i_0] = (max((((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_13 [i_0] [i_4] [i_2] [i_3] [i_1]))), (arr_13 [i_0] [i_1] [i_2] [9] [i_4])));
                                var_19 = (((max((((arr_8 [i_0] [i_1] [2]) ? 2003 : (arr_9 [i_1] [2]))), ((var_3 ^ (arr_10 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1]))))) ^ ((max((arr_12 [i_0] [i_0] [i_0] [5] [i_0] [i_2]), 39923)))));
                                arr_16 [i_1] [i_2] [i_3] = var_9;
                            }
                        }
                    }
                    var_20 = 39907;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] = arr_22 [i_8];
                                arr_32 [i_5] [i_5] [i_7] [i_8] [i_9] = (((arr_24 [i_5] [i_6] [i_9] [i_5]) < (var_8 | 19)));
                            }
                        }
                    }
                    arr_33 [i_7] [i_5] [i_5] [i_5] = 39879;
                }
            }
        }
        arr_34 [8] |= ((25629 ? 0 : 25628));
    }
    var_21 = min((var_16 == var_7), (max(var_13, 39923)));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            {
                arr_41 [24] [8] = (((~25638) & (((arr_37 [i_11 + 1] [i_10 - 1]) ? (arr_37 [i_11 - 1] [i_10 + 1]) : 59289))));
                var_22 += max(5106, (min(var_0, var_5)));
            }
        }
    }
    #pragma endscop
}
