/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = ((((var_9 ? ((130023424 ? 1423825169145628870 : 1)) : var_7)) <= ((min((var_17 | 1), var_3)))));
    var_20 = (((min(511, var_16)) << (var_6 <= 527)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 ^= ((var_17 < (((arr_0 [i_0]) ? var_16 : -492))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_2] [i_3] [i_3] = ((((-2014811230 ? (arr_3 [i_2]) : (arr_12 [0] [i_0] [i_4] [2] [i_0]))) <= 17));
                                var_22 = (((((511 ? -1 : 0))) - (arr_4 [i_2 + 2] [i_2 + 2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = (((arr_7 [i_2] [i_2 - 1]) << (((arr_7 [i_5] [i_2 + 2]) - 9992055374957145561))));
                                arr_23 [i_5] [i_5] [11] [i_5] [i_5] [i_5] [19] = var_10;
                            }
                        }
                    }
                }
            }
        }
        var_23 = -1;
    }
    var_24 = var_15;
    #pragma endscop
}
