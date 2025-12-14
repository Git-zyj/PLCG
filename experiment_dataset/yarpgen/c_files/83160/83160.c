/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = (((~var_4) ? ((~((max(var_7, var_5))))) : var_11));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4 - 1] [5] [i_0] [i_1] [i_0] [i_0] = var_6;
                                arr_14 [i_0] [3] [i_2] [9] [9] [18] = (((2706811703 + 2147483647) << (((var_3 + 87) - 3))));
                                var_13 = -var_12;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_0] = ((((237 || ((min(46441, var_11))))) || (((35184372088831 ^ (max(var_10, 35184372088841)))))));
                arr_16 [15] = var_5;
            }
        }
    }
    var_14 = (max(((-((var_9 ? var_0 : var_8)))), var_12));
    #pragma endscop
}
