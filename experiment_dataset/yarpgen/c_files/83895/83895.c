/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] = 239;
                                arr_14 [i_1] [18] [i_2 + 1] [i_1] [i_4 + 1] = ((((min(var_15, (max(1005792718101893502, var_19))))) != var_3));
                            }
                        }
                    }
                }
                var_20 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                var_21 = 563057224821051315;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = -32651;
                            arr_20 [i_0] [i_1] [i_0] [i_1] = -32650;
                        }
                    }
                }
                var_23 = (arr_4 [i_1] [1] [1]);
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
