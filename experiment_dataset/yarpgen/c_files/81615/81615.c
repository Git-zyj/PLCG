/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (-(max(var_11, (32270 + 32270))));
                    arr_6 [i_1] [i_1] [i_1] [0] |= ((min((arr_3 [i_0] [i_0]), var_0)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_13 = var_7;
                                arr_20 [i_3] [i_4] = ((min((max((arr_9 [8] [i_5] [12]), 74)), ((var_6 ? var_10 : (arr_14 [i_5]))))) | (arr_11 [i_4] [i_4] [i_5 - 1] [3]));
                                var_14 = ((((30200 || (arr_15 [22] [4] [i_5] [i_5] [i_3] [i_3])))));
                            }
                        }
                    }
                }
                arr_21 [i_3] [i_4] = (arr_10 [i_4] [i_3] [i_3]);
                arr_22 [i_4] = (arr_17 [i_3] [i_3] [i_4] [i_3]);
            }
        }
    }
    #pragma endscop
}
