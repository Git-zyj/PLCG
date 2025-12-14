/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((3034124642 ? 288230376151711743 : 1));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_3] [i_3] [i_0] = (arr_1 [i_1]);
                                arr_14 [i_3] [i_3] [i_2 - 3] [i_1] [i_1] [i_3] [i_3] = (((((min(3034124632, 1426115938)) - ((((arr_9 [1] [2] [i_0]) ? var_4 : (arr_7 [i_4] [i_3] [i_1]))))))) ? (max((min((arr_8 [i_0]), (arr_11 [i_0] [i_0] [i_0] [9] [i_4] [i_2] [i_3]))), (((var_12 ? 28 : var_4))))) : (1950644731 > 3034124642));
                                var_20 = ((-((((arr_1 [i_2 + 1]) != var_14)))));
                            }
                        }
                    }
                }
                var_21 = var_13;
            }
        }
    }
    var_22 |= (((((var_3 ? var_8 : var_3)) ? (var_5 / var_10) : (((var_1 ? var_9 : var_0))))));
    var_23 = (min(var_23, var_9));
    #pragma endscop
}
