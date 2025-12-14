/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max((~var_6), (~var_14)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [14] [8] [i_1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] = -var_9;
                                arr_15 [i_1 + 1] [i_1] [i_3 + 2] [2] = (max(((max((-32767 - 1), -25930))), var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 &= 5;
    #pragma endscop
}
