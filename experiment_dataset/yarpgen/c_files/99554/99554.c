/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((~3884) != 61675));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 |= -3884;
                                arr_15 [i_0] [i_0] [i_0] [i_0] = var_0;
                                var_21 += var_2;
                                var_22 = (max(var_22, (arr_1 [i_4 + 1] [i_4 + 1])));
                            }
                        }
                    }
                    var_23 = (~240);
                }
            }
        }
        arr_16 [i_0] = 6654;
    }
    var_24 = -61651;
    #pragma endscop
}
