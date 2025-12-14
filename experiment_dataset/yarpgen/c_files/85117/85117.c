/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(((max(var_2, var_9)), var_5))));
    var_11 |= ((var_7 ? var_6 : var_4));
    var_12 = (var_9 ? (min(((var_7 ? var_0 : var_3)), var_4)) : ((((2115008680965873630 && var_1) ? ((var_4 ? 124 : 3998)) : var_6))));
    var_13 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [19] [i_0] = ((~((var_6 ? (arr_2 [i_0] [14]) : var_5))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (arr_8 [i_0 + 1]);
                                var_15 = (arr_8 [0]);
                                var_16 = (arr_9 [23] [8] [i_0]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((var_9 & (arr_6 [23] [i_1] [6] [15])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 = (max(470679575, 470679577));
                                var_18 = (470679577 != 118);
                                arr_20 [13] [i_0] = (((min((arr_17 [3] [i_0 - 3] [18] [i_5 + 2]), (arr_1 [i_0 - 1]))) << ((((((var_0 && (arr_2 [10] [12]))) ? (max(var_9, var_5)) : var_0)) - 7214820593319142118))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
