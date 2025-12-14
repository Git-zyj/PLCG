/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_1 [i_0]);
                arr_5 [i_0] = 70;
            }
        }
    }
    var_10 ^= 26474;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_2] [i_3] [i_3 - 1] [i_4] [i_5 - 4] = var_2;
                        arr_18 [i_3] [i_4] [i_5] &= (arr_15 [i_2] [11] [i_4] [6]);

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_2] = (arr_13 [i_2] [i_2]);
                            var_11 &= var_9;
                        }
                    }
                    var_12 = (arr_9 [i_2]);
                    arr_22 [i_2] [i_3 + 1] [i_4] = 0;
                }
            }
        }
    }
    #pragma endscop
}
