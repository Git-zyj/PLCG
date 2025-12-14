/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((max(var_1, 233))) ? ((min((var_4 || var_10), (arr_6 [i_2] [i_2] [14] [i_1 + 1])))) : var_1)))));
                    arr_7 [4] [4] = (((arr_6 [1] [11] [i_0] [0]) == (arr_2 [i_0] [i_0] [i_0])));
                    var_21 += (min((arr_6 [i_1 + 1] [i_1 + 1] [i_2] [i_2]), (((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] = (min((0 & 1), ((((~(arr_6 [i_0] [6] [i_2] [10])))))));
                                arr_16 [13] [13] [i_2] = (arr_5 [11] [13] [1] [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = var_7;
                                arr_18 [i_0] [15] [15] [i_2] = (((arr_3 [i_2]) / ((1 | (((arr_10 [i_2]) ? (arr_13 [i_0] [i_1] [7] [i_3] [i_2]) : var_1))))));
                                var_22 = (var_2 & (min((arr_8 [i_1 + 1] [i_1] [i_1] [i_1 - 1]), var_18)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
