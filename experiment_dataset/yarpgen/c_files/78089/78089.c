/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(151543629, -32747));
    var_19 = var_17;
    var_20 = ((((-((var_1 ? var_3 : var_1)))) + var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [17] [i_1] [i_2] [17] [i_3] [15] = (~var_12);
                                var_21 = (((var_1 ? var_7 : var_16)));
                                var_22 = (var_7 - var_11);
                                arr_13 [i_0] [i_0] [i_0] [i_0] = var_16;
                            }
                        }
                    }
                    var_23 = var_4;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_22 [i_7] [i_6] = (max(((var_11 ? var_5 : var_15)), (max((max(var_2, var_5)), (min(var_2, var_3))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_24 = (((var_12 % var_0) < (((min(var_11, var_11))))));
                                var_25 = (min((((var_2 - var_14) - ((var_7 ? var_15 : var_2)))), -var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
