/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (arr_5 [6] [i_2] [8]);
                                var_12 = ((+(((max((arr_10 [i_2]), 5654125517533120704)) & (((min((arr_9 [i_2] [8] [11] [i_3] [i_4] [i_4]), (arr_11 [i_2] [i_4])))))))));
                            }
                        }
                    }
                    arr_12 [1] [12] |= 1;
                }
            }
        }
    }
    var_13 = 33;
    #pragma endscop
}
