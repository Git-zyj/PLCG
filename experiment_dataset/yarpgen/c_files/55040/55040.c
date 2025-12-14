/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = 2040008400;
                                var_21 = (max(var_21, (((-(arr_8 [i_0] [i_0] [i_2] [i_0] [i_4]))))));
                                arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4] [i_0 - 1] |= (arr_10 [i_0 - 1] [i_2 + 3] [i_2 + 4] [i_4]);
                                var_22 = 103;
                                var_23 |= -1826050948;
                            }
                        }
                    }
                }
                var_24 = (max(var_24, var_19));
            }
        }
    }
    var_25 = var_3;
    #pragma endscop
}
