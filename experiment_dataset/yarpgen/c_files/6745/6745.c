/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((max((((arr_3 [1] [1]) ? 18 : (arr_6 [1] [1] [i_1]))), (((arr_7 [i_0] [i_0] [i_1]) ? var_5 : (arr_6 [i_0] [i_1] [6]))))) - ((max(16, 92)))));
                var_14 = (min(((-120 ? 1 : 399721851)), (((~((max(1, -1))))))));
                var_15 = -14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 -= ((((!(arr_5 [i_0] [i_2 + 1] [i_0]))) && var_2));
                            arr_14 [i_0] [i_1] [i_1] [i_2] = ((!884835176191031327) >= ((var_4 ? (var_12 - var_12) : ((((arr_5 [i_3] [i_1] [i_1]) >= (arr_9 [i_0])))))));
                            var_17 = (min(var_17, ((max(((-18 / (-19 || 0))), (max(17, -19)))))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_18 = 1;
                                var_19 = (arr_10 [i_1] [i_1]);
                                var_20 -= ((((min(((min(-762899993, 29))), (1 * 818486950200767585)))) ? (((arr_0 [14]) * (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_6 : -35)))) : var_9));
                                var_21 = (max((((((max(29, var_3))) >= var_3))), (1 * var_10)));
                                var_22 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
