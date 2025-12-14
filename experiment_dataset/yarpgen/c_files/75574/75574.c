/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_2] [9] [i_2] [i_3] = (arr_8 [i_0] [i_1] [i_0] [i_3 + 2] [10]);
                        var_11 -= ((!(arr_7 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 2])));
                        arr_10 [i_0] [i_2] [2] [i_3 + 1] [i_0] [i_2] = 241;
                        var_12 = (min(var_12, (((-92 ? (((arr_4 [i_0] [3]) ? 728507636 : 92)) : var_8)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_1] = (((arr_13 [i_4] [i_4 - 2] [i_2] [11] [i_4]) ? (arr_13 [i_4 - 1] [i_4 - 2] [i_2] [i_4] [i_1]) : (arr_13 [i_4] [i_4 - 2] [i_2] [i_4] [7])));
                        var_13 = (max(var_13, (((!(arr_4 [2] [i_4 + 1]))))));
                    }
                    arr_15 [i_2] = ((((92 ? 2536270392 : 33)) >> ((((7 ? (min(var_1, (arr_8 [i_2] [2] [i_0] [5] [14]))) : -1758696902)) - 52356))));
                    var_14 -= (min(((min(var_8, var_2))), ((((((!(arr_8 [i_0] [i_0] [5] [i_1] [i_2]))))) & var_3))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_15 = (arr_20 [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_16 = 1758696924;
                                var_17 -= (arr_22 [0] [2] [i_7 - 1] [2] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 249;
    var_19 = var_7;
    #pragma endscop
}
