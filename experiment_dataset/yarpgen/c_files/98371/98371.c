/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-5367319805051270876, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_1 [i_0])));
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_4] = 197;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = arr_13 [i_0] [i_1] [i_1] [4] [i_1];
                arr_16 [i_0] [i_1] = ((5367319805051270895 && ((((((arr_7 [i_1]) << (((arr_8 [i_0] [i_0] [i_1] [i_1]) + 32118)))) | (max((arr_9 [i_1] [i_1] [i_1] [i_0] [i_0]), var_1)))))));
            }
        }
    }
    var_22 = var_17;
    #pragma endscop
}
