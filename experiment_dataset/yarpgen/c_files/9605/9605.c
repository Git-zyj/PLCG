/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!(var_3 * 343678550));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 |= ((max(3506432952, var_7)));
                                var_20 -= (((-4896 - (min(-4890, var_5)))));
                                var_21 = (min(((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_17 : 2616534267))), (max(7434288240531415824, (arr_9 [i_1 + 2] [i_1] [i_2])))));
                                arr_12 [2] [9] [i_1] [4] = ((max((((arr_3 [i_1] [i_1]) ? 3904 : var_16)), (var_4 >= -4205411340815854156))));
                            }
                        }
                    }
                    var_22 -= (max(((max(var_2, 1678433032))), (max((arr_3 [12] [i_1]), (arr_10 [i_1 + 2] [i_1] [12] [i_1 - 1] [i_1 + 2] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
