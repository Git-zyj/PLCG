/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (((((405707362220434838 ? var_11 : var_5))) ? ((((min(var_9, -854396860))) ? var_7 : var_7)) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_4] = (max(var_9, var_6));
                                var_14 = (-56 && 20973);
                            }
                        }
                    }
                }
                var_15 = (max(((~(20973 * 0))), (((arr_6 [i_0] [i_0] [i_0] [i_1 - 2]) ? (arr_2 [i_0] [i_1 - 3] [i_1 - 3]) : ((max(var_2, (arr_8 [i_0] [7] [i_0] [5] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_16 -= (arr_1 [i_5]);
                                var_17 = (min(var_17, ((~(((var_0 ? 117 : (arr_13 [i_5] [i_7]))))))));
                                var_18 = (max(var_18, (((~(max(((var_11 ? 1850880293 : 1)), 1)))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_0] = -880499200;
                var_19 = (arr_16 [i_0]);
            }
        }
    }
    #pragma endscop
}
