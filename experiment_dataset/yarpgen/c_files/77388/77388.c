/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_6;
    var_13 = (((var_7 - var_7) ? ((var_8 ? 113 : ((var_9 ? var_8 : var_9)))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(((((min(159, 9913065685762855229)) > (arr_4 [i_0] [i_1] [i_1])))), ((min(12071, -7699319531007862765)))));
                var_15 |= ((((max(-4, -3153496591229702952))) ? (((min((arr_4 [i_1] [i_1] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))) : ((var_3 ? ((((!(arr_5 [i_1]))))) : (min(96, -3153496591229702952))))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_16 = var_6;
                    var_17 = (((!(((var_9 ? var_11 : (arr_2 [1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = 107;
                                var_19 *= (((((((arr_8 [0] [i_4 + 1] [i_1] [i_2] [i_1]) == (arr_10 [i_4 + 2] [i_4 + 1] [i_4 + 3] [i_4 - 2] [i_4 + 4]))))) / (min((var_2 % var_3), (((arr_7 [i_0] [7] [7]) ? var_5 : var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
