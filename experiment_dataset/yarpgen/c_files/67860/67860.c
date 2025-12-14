/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = 36028797014769664;
    var_20 = var_9;
    var_21 = (9029545700141720280 ? (var_11 / -7958550796535465629) : var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [3] [i_3] [i_1] [3] = (~8328042389810681910);
                                var_22 = ((arr_10 [i_0] [i_1]) ? (arr_5 [i_1 + 1] [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2]));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_0] [i_3] [i_1] [i_4] = (7958550796535465629 ? ((var_4 % (arr_5 [i_2 + 1] [i_1 - 1] [i_2 + 1]))) : ((((!(arr_5 [i_2 + 1] [i_1 - 1] [i_2]))))));
                                var_23 ^= ((~(arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4])));
                                var_24 = arr_11 [i_0] [i_1] [i_2];
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_25 = (((arr_9 [i_0] [i_5]) || (!14072621584181982666)));
                    var_26 = (~((~(~var_8))));
                }
                arr_21 [i_0] [i_1] = -1;
                arr_22 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
