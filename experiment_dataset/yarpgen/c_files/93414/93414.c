/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] [i_0] = var_15;
                                var_17 = ((((4294967295 < ((-(arr_2 [i_0]))))) ? (((min(var_8, var_15)) & (arr_12 [0] [i_1] [0] [0] [1] [i_4]))) : ((~(((arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]) ? (arr_7 [i_2] [i_4]) : (arr_9 [i_0] [i_1] [i_0] [i_4])))))));
                                var_18 = 57811;
                                arr_15 [i_3] [i_1 + 3] [i_2] [i_3] [i_4] [i_0] [i_4] = (((arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_4] [9]) ? var_9 : (arr_13 [i_0] [i_4] [i_4] [i_1 - 3] [i_4] [11] [i_1 - 3])));
                            }
                        }
                    }
                    var_19 |= var_4;
                    arr_16 [i_0] [11] [i_2] [i_2] = (((max((arr_4 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 + 1] [i_2]))) - (min((arr_4 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 - 3] [i_1 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
