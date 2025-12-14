/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((arr_1 [i_0]) ? (0 || 103) : (max((((65535 ? 0 : var_8))), -5247))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 -= (min((min(((min(var_2, (arr_10 [i_0] [i_0] [i_2 + 1] [i_3] [i_4])))), (arr_6 [i_2] [i_2]))), 1));
                                var_15 = (arr_0 [i_0] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                {
                    var_17 = var_4;
                    var_18 = (arr_14 [5] [i_6] [i_7 - 2]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_19 = (arr_14 [i_6] [i_6] [i_6]);
                                var_20 *= (((min(2405147588, (arr_21 [i_8] [i_6] [i_6] [8]))) % (arr_21 [1] [i_5] [6] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
