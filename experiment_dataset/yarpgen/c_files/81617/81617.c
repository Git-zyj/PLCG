/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_11 ^= 88;
                            var_12 ^= -54;
                            var_13 += 35;
                        }
                    }
                }
                var_14 = (max(var_14, 88));
                arr_12 [i_0] [i_0] [i_0] = 161;
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_7] [i_8] [i_6] &= 0;
                                var_16 = (max(var_16, 142));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_32 [i_4] [i_9] [i_5] [i_9] [i_4] [i_9] = 35;
                                var_17 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                var_18 ^= 1;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_19 ^= 5845;
                            arr_43 [i_13] = 2003821181;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
