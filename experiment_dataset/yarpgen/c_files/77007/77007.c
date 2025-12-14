/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((((var_9 ? 1213389124 : var_6)) >= var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] = (min((min((1110912880 % 14762), (arr_6 [6] [i_0] [i_1] [i_0]))), (arr_6 [i_2] [4] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 *= var_13;
                                arr_15 [9] [i_2] = (min(-4197829030565473706, (max((arr_13 [i_0 + 1] [i_2] [i_0] [2] [i_0 + 2] [i_2] [i_0 - 1]), (arr_13 [i_0 - 1] [i_2] [i_0] [i_0] [i_0 + 2] [i_2] [i_0 + 2])))));
                            }
                        }
                    }
                    var_20 = ((-(((((-(arr_14 [i_0] [7] [7] [i_1] [i_2] [i_2])))) ? (((-(arr_8 [i_2] [i_1] [1])))) : (var_0 - 1)))));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] = ((!((min((max((arr_13 [i_0 + 2] [i_2] [i_2] [i_5] [i_2] [i_5] [i_2]), (arr_11 [i_0 + 2] [i_0 + 1] [4] [i_0]))), ((min(1, 1))))))));
                        var_21 = (((arr_13 [i_5] [i_2] [i_2] [i_2] [i_5] [i_5] [i_1]) ? (min(4197829030565473705, (min(-2231128528660236746, var_14)))) : ((max((arr_6 [i_0 - 1] [i_1] [i_2] [i_5]), (max(1, (arr_0 [i_1] [10]))))))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_6] [i_2] [i_2] = (arr_4 [i_0]);
                        var_22 &= ((((min((1 / var_11), 1))) / ((((((arr_5 [i_1] [i_1] [i_2]) - (arr_2 [1] [i_1] [6])))) ? (min(9723830549570602380, 124)) : (150208593 / -28432)))));
                        arr_26 [i_2] [i_2] [i_1] [8] [i_2] = ((!(arr_3 [i_0] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_1] [8] [2] [i_1] &= (((arr_23 [i_0] [i_1] [i_0] [i_7]) < (~-1427609685)));
                        var_23 = -111;
                    }
                }
                var_24 ^= (1 * 1055938179);
            }
        }
    }
    #pragma endscop
}
