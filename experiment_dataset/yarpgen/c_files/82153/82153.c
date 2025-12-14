/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (arr_1 [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [2] [i_1] [i_1 + 1] [i_0] = (arr_9 [i_1 + 1] [i_3] [i_1] [i_1 + 1] [4]);
                                var_14 -= (arr_4 [i_0]);
                                var_15 = (arr_10 [i_4] [4] [i_2] [4]);
                            }
                        }
                    }
                }
                arr_16 [i_1] = (((((((arr_6 [i_0] [i_0]) ? 32 : (arr_2 [i_0] [i_0]))) << (1 >> 0))) ^ ((~((~(arr_8 [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
