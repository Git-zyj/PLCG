/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (!var_1);
                    var_23 = 4079109195685981291;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = arr_3 [i_2] [i_4];
                                var_24 &= ((var_3 % (arr_10 [i_0] [i_4] [i_4] [i_3] [i_4] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
