/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((36028797018963967 ? (min(var_1, var_2)) : (min(-31173, var_8))))) && var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 |= (((arr_4 [i_1] [i_1]) ? -var_12 : (((-(((arr_5 [i_0] [i_0]) - -1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, -var_0));
                                arr_13 [i_2] [i_2] [i_2] [1] [i_2] [i_2] = ((var_10 ? -var_9 : (!77928183)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((min(-30659, 1209785392))) ? var_13 : ((var_4 ? (var_2 + 3) : ((var_3 ? var_5 : var_2))))));
    #pragma endscop
}
