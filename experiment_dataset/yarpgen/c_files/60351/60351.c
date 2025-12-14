/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1615453626 - -var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = var_8;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 *= (~(~2041227670));
                                var_14 = var_0;
                            }
                        }
                    }
                }
                var_15 |= (((((!var_9) ^ (!2253739626))) >> (((((-2460051132211594532 > var_9) ? (var_2 / var_0) : (max(2474979439, (arr_14 [7] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) - 3055544891))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
