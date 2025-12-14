/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = ((25545 ? 31 : ((((min((arr_3 [i_0]), (arr_4 [i_1])))) ? (min(16, var_5)) : (min(-31, var_7))))));
                                arr_17 [i_0 + 2] [i_1] [i_1] [i_1] [i_1] [i_4 - 1] [i_1] = ((var_5 - (arr_6 [i_0] [i_1])));
                            }
                        }
                    }
                    arr_18 [i_0 + 1] [i_1] [i_1] [4] = ((((((var_0 ? (arr_10 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]) : var_9)) == (0 - -32))) && (((((min(var_7, (arr_10 [i_0] [i_2 + 1] [i_0] [i_1])))) ? (((31 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) : ((3 ? 1 : (arr_8 [i_0] [i_1] [i_1] [i_2 - 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_24 [i_0 - 1] [i_1] [i_1] [24] [i_2 + 2] = ((max((arr_0 [i_0 - 1]), (arr_0 [i_6]))));
                                var_11 = (max(var_11, (((max((min((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] [i_6]), var_2)), var_3))))));
                                var_12 = ((!((((25426 * 0) ? (max((arr_1 [6]), (arr_5 [i_0] [i_1] [i_1]))) : (((max(237, var_3)))))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_29 [i_0] [3] [i_0 - 1] [i_1] = ((~var_0) > (((min((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_27 [1] [i_0 + 2] [i_2 + 2] [i_7] [i_7]))))));
                        var_13 = (min(var_13, 0));
                        var_14 = (max(var_14, 0));
                        var_15 = (max(var_15, (-1206718999 && 14)));
                        var_16 += ((((arr_3 [i_1]) ? -1 : ((min(var_4, var_3))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                arr_35 [6] [i_8] [i_8] = max(1, (min(127, (arr_0 [i_8]))));
                var_17 = (min(var_17, var_2));
            }
        }
    }
    #pragma endscop
}
