/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 -= (min((((arr_11 [6] [i_2] [i_3] [i_4]) ? (arr_11 [6] [14] [i_2] [14]) : var_6)), ((min(var_5, var_12)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                            }
                        }
                    }
                    arr_15 [i_2] [i_0] [i_0] = (min(var_13, ((max((var_3 / var_3), (arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 = (arr_5 [i_0] [i_0]);
                                arr_22 [i_6] [i_0] [i_0] [i_1] = ((((arr_11 [i_0] [i_1] [i_0] [i_6]) ? (-32767 - 1) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_20 = (min(var_20, 127));
                            }
                        }
                    }
                    var_21 = ((((max(var_8, var_15))) ? (max(var_15, var_3)) : var_1));
                }
            }
        }
    }
    var_22 = ((-1046728520 < (min(((max(var_7, var_2))), 1492161117))));
    #pragma endscop
}
