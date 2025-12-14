/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = ((0 ? ((65514 % (max(-1844940593, 1743617366)))) : 1493865418));
                            var_14 = (min(var_14, var_1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 *= (arr_13 [i_0] [i_1] [i_4]);
                    arr_15 [16] [i_1] [i_1] [i_4] = ((1493865444 ? -23888 : 11432));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] [i_1] [4] = (((arr_8 [7] [i_1] [i_1] [i_1]) + 3006162984695610959));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_26 [11] [1] [i_5] [10] [i_6] [i_6] [1] = var_6;
                                var_16 -= 262080;
                                var_17 = var_2;
                                var_18 = (min(var_18, (((var_2 ? (arr_8 [i_1] [i_0] [i_0] [i_0 - 2]) : 2801101832)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
