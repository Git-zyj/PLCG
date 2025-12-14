/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((1951 ? 1150669704793161728 : var_7)) % var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = 4127;
                                var_18 = (var_4 <= 4113);
                                var_19 = (((min(4131, var_13)) + var_9));
                                var_20 = (((var_9 + (var_0 < var_7))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((((6128504047499224665 ? var_5 : var_4))) ^ ((1536 ? 1538 : var_13)))))));
                                arr_20 [i_0 + 2] [8] [i_0] [i_0 - 1] [i_0] [i_0 + 2] = var_3;
                                var_22 = ((181 ? -7986024249996741449 : (var_10 - 61430)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = var_6;
                            var_24 = (((7986024249996741464 ? var_3 : var_11)));
                        }
                    }
                }
                var_25 *= 1;
            }
        }
    }
    #pragma endscop
}
