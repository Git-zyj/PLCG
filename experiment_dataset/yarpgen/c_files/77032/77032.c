/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] = (min((arr_5 [i_1] [i_1] [0]), (max(((var_8 & (arr_7 [i_0] [i_0] [i_2] [i_3]))), ((136 ? var_19 : var_8))))));
                                var_20 = ((-(max(1359360627174455765, (arr_4 [i_0 - 1] [i_0 - 1])))));
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_3 + 2] [9] = (((((-(arr_9 [7] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 3] [i_3 - 1])))) & -5229327383620092696));
                                var_21 = (arr_4 [i_1] [i_4]);
                            }
                        }
                    }
                    var_22 *= (arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_0] [i_1] [8] [i_2] [5] [i_1] = (max((arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]), (arr_11 [1] [i_0 + 2] [i_1] [i_2] [i_5] [i_6])));
                                var_23 = -1817281087;
                                var_24 = (((arr_15 [i_0 + 2] [i_0 - 1]) | -1817281087));
                                arr_21 [i_6] [i_6] [i_2] [1] [i_6] [i_0] = ((136 + (arr_6 [4] [i_6] [i_6])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = ((((~(arr_19 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_0 - 1]))) % (max((arr_6 [i_0] [i_0] [i_0 - 1]), (arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
                        var_26 = 241;
                        var_27 = ((((max((arr_19 [i_0] [i_0] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 1]), (arr_19 [4] [i_0] [i_1] [i_0 + 2] [i_0 - 1] [i_0 - 1])))) || var_12));
                    }
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = (min(var_29, var_10));
    #pragma endscop
}
