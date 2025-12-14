/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] = ((-1309800498 && (2137927080 + 74)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (min(((54647475 ? 1428 : ((1 ? 461683834 : 56)))), ((min(1, (1 & var_13))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] = var_4;
                                arr_15 [i_0] [i_2] [i_4 - 2] = var_0;
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = var_9;
                            }
                        }
                    }
                }
                var_16 = ((((min(var_13, ((106 ? 143 : var_12))))) - var_8));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [1] = (min((max(var_7, (max(1, 2897504974)))), var_9));
                            arr_24 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] = (((1 - 1) - var_9));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
