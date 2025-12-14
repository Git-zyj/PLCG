/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, ((28477 ? -28700 : var_1))));
    var_16 = (((var_12 || ((max(var_5, var_10))))));
    var_17 = (((var_0 + 9223372036854775807) >> (((((((var_2 ? 27 : var_8))) ? ((var_14 ? 14778 : var_4)) : (var_7 && -2147483645))) - 14749))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [9] [i_4] [i_3 - 1] [i_4 - 3] = (((-14778 + (((arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 2] [12]) - var_3)))));
                                var_19 *= ((-8224118712703735183 ? (arr_0 [11]) : (((var_11 == (((arr_3 [i_4]) / (arr_11 [i_1 + 1] [i_1 - 1] [18] [i_2] [i_0]))))))));
                                var_20 = (min((arr_6 [i_0] [i_0] [i_2]), ((max((arr_6 [i_0 - 1] [i_1] [i_2]), (arr_10 [i_0] [i_1 + 1] [i_2 + 4] [i_3] [i_3 + 2] [i_0] [i_0 - 1]))))));
                                arr_13 [i_0] [i_4] [9] [i_3 + 2] = (arr_8 [i_3 + 2] [i_4] [i_4] [i_4 - 3]);
                                var_21 -= (min((arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]), (max(((((((arr_10 [14] [3] [i_2] [i_3] [14] [i_4] [i_4]) + 2147483647)) << (var_8 - 1211870574)))), -8224118712703735196))));
                            }
                        }
                    }
                    arr_14 [i_2 + 2] = (arr_9 [i_0 - 1] [14] [i_2 + 4] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = ((((((arr_10 [i_1 + 1] [i_2] [i_2 + 3] [i_6 - 3] [i_6] [i_6 - 3] [i_6 + 2]) ? (arr_10 [i_2 + 3] [i_2] [i_2 + 2] [i_6 + 3] [i_6 - 4] [i_6 + 2] [i_6]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_6 + 2] [i_2 + 2] [i_6] [i_6])))) ? (((arr_10 [i_2] [i_2] [i_2 + 2] [i_6 - 4] [i_6 - 1] [i_6] [i_6 - 2]) ? (arr_10 [i_0] [i_0 + 1] [i_2 + 4] [i_6 - 2] [i_6 - 1] [6] [i_6]) : (arr_10 [i_1 - 1] [7] [i_2 + 3] [i_6 - 1] [i_6] [i_6 - 3] [i_6 + 1]))) : (((arr_10 [17] [i_0] [i_2 + 2] [i_6 + 2] [i_6] [i_6] [i_6]) | (arr_10 [i_0] [4] [i_2 - 1] [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1])))));
                                var_23 = (arr_19 [2] [2] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (!var_5);
    #pragma endscop
}
