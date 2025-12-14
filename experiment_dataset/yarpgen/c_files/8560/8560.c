/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min((max(var_7, var_1)), (min(var_7, var_0))))), (min(((var_0 ? var_7 : var_8)), ((var_3 ? var_4 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_0] [0] [i_0] [i_2] = (min((((((var_2 ? var_0 : var_10))) ? var_10 : (var_2 != var_7))), ((var_3 ? ((var_9 ? var_7 : var_1)) : var_3))));
                                var_12 &= ((var_5 ? ((var_4 ? var_10 : var_4)) : ((min(var_10, var_2)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [17] = ((((var_8 ? ((max(148, 215))) : ((var_2 ? var_9 : var_5)))) != (((var_5 - var_10) ? ((max(var_5, var_4))) : ((max(var_0, var_7)))))));
                    arr_15 [i_2] [i_1] [i_1] [1] = min((max(var_0, var_1)), (max(var_6, var_3)));
                }
            }
        }
    }
    var_13 += var_0;
    #pragma endscop
}
