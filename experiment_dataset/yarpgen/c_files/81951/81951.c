/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 &= (((arr_2 [i_0 - 1]) >= (arr_2 [i_0 + 1])));
        var_18 = var_7;
        var_19 &= (var_9 & var_6);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_5 + 2] &= (max((((((max((arr_4 [i_3]), var_7)))) * (arr_0 [i_5 + 1] [6]))), (max((arr_10 [i_5 + 2] [i_4 - 1]), ((max((arr_15 [i_1] [i_1] [i_1] [i_1]), (arr_16 [i_5 + 1] [6] [i_4] [i_2] [i_5]))))))));
                                arr_20 [8] [i_2] [5] [i_4] [i_3] [i_2] = var_6;
                                arr_21 [i_1] [2] [i_3] [2] [i_3] = (min((max((arr_10 [i_5 - 1] [i_5 - 1]), (arr_10 [i_5 + 1] [2]))), (min(var_8, (min((arr_10 [2] [i_4 - 1]), var_2))))));
                                arr_22 [1] [i_3] [i_3] [i_4 + 1] [i_5] [i_4 + 1] = ((((max((arr_5 [i_4 + 1]), (arr_5 [i_4 + 1])))) ? (arr_15 [i_4 + 1] [i_4] [i_4 - 1] [i_3]) : (arr_16 [i_5 - 1] [i_3] [i_3] [i_3] [i_1])));
                            }
                        }
                    }
                    arr_23 [i_3] [i_2] [i_3] = (max(-var_15, ((((((min((arr_15 [i_2] [i_2] [i_2] [i_3]), (arr_8 [i_1] [i_2]))))) <= (((arr_1 [i_3] [i_2]) ? var_4 : (arr_6 [i_3]))))))));
                }
            }
        }
    }
    var_20 = (var_8 ? var_13 : var_5);
    #pragma endscop
}
