/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_7;
    var_20 = (min((max(var_15, (var_18 + -1855188838))), var_6));
    var_21 &= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (arr_4 [i_0]);
                var_22 = (((arr_3 [i_1]) ? ((((var_10 ? var_8 : var_7)) - var_2)) : (((var_3 ? ((2147483647 ? 6005 : (arr_1 [i_1] [i_0]))) : (arr_1 [i_0] [i_0]))))));
                var_23 &= ((~((((var_4 << (((arr_0 [i_0]) - 2201304494695325441)))) << (((((arr_2 [i_0] [i_1]) ? (arr_3 [i_1]) : var_17)) + 78))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_2] [i_2] [i_1] [1] = (((var_10 ? (((max((arr_6 [i_0] [5] [i_2] [i_3 - 2]), (arr_9 [6] [i_4] [i_3] [i_2] [5] [i_0]))))) : var_14)));
                                arr_13 [i_4] [i_3 - 2] [3] [3] [i_1] [9] = var_11;
                                var_24 = ((var_18 / (arr_3 [7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
