/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 4203197087330766895;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 ^= (min(-1869101634, 27926));
                                var_17 -= (max(32821, 1781459053));
                                var_18 = (max(var_5, var_10));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [14] [0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((-(min((arr_9 [11] [i_6 - 1] [2] [7]), (arr_9 [4] [i_6 - 1] [i_6] [4])))));
                                var_19 = ((-(~var_14)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = (min(var_21, var_13));
    #pragma endscop
}
