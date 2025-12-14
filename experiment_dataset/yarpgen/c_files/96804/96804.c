/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1063691197 + (min(1063691193, (min(-1063691194, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((max(((33801 ? 23973 : -23973)), ((var_6 ? -1063691178 : -629691351)))))));
                var_22 = (min(var_22, (((-((max((arr_3 [14]), (var_2 <= var_11)))))))));
                var_23 = ((((((max(var_4, (arr_0 [i_0])))) ? -1063691198 : (1063691202 || 1063691193))) > ((max((arr_1 [i_0 + 1]), -24004)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_24 = ((-23955 ? var_7 : ((var_18 ? (arr_0 [i_0 + 1]) : (max((arr_1 [i_0]), 1063691197))))));
                                var_25 = (min(var_25, -1063691198));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
