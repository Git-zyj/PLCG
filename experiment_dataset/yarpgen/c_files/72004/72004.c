/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = 255;
                var_17 -= var_8;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3] [i_0] [i_0] [i_0] = (-61 ? 260046848 : 35);
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] [18] [i_4] = (max(1166168775, 260046848));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
