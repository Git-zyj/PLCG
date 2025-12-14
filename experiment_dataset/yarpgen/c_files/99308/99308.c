/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [12] &= (((arr_1 [i_0]) ? (arr_1 [i_0]) : -var_0));
        var_10 = (max(var_10, 41807));
        var_11 = (((arr_3 [i_0 + 4]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])));
        arr_5 [i_0] [8] = (arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            {

                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_1] = (arr_6 [i_2 - 1] [i_3 - 1]);
                    arr_13 [i_1] [i_2 + 2] [i_1] = (((((arr_8 [i_2 + 2] [i_3 - 1]) ? (arr_10 [i_2 + 2] [i_3 - 1] [i_3 - 1]) : (arr_8 [i_2 + 2] [i_3 - 1])))) ? (arr_10 [i_2 + 2] [i_3 - 1] [i_3 - 1]) : (arr_6 [i_2 + 2] [i_3 - 1]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_12 = ((-14 ? 0 : -14));
                                arr_20 [4] [i_1] [i_2] [i_1] [i_4] [i_5] = var_9;
                                var_13 |= min(var_0, (((((1 - (arr_6 [21] [i_2])))) ? ((-(arr_9 [i_5]))) : 40)));
                            }
                        }
                    }
                }
                var_14 = ((152307932 ? (max((arr_8 [i_2] [i_2]), var_7)) : (arr_10 [17] [i_1] [i_2 - 1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_1] [6] [i_1] [i_2] [i_1] [i_7] = ((+((min((arr_15 [i_6] [i_6] [i_2] [i_1]), (arr_10 [i_1] [i_2 + 1] [i_7]))))));
                            var_15 = (arr_15 [i_7] [i_6] [i_1] [i_1]);
                        }
                    }
                }
                var_16 = ((~(min((arr_11 [i_2 - 1] [i_2] [i_2]), (arr_11 [i_2 + 2] [i_2 + 2] [9])))));
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
