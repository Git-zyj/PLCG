/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = -1864766314;
        var_13 *= 38;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_14 |= 60;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_12 [i_2] = 1;
                        arr_13 [i_2] = 0;
                        arr_14 [i_2] [i_2] = 43;
                        arr_15 [1] [i_4] [i_2] [i_2] [i_1] [i_1] = 32767;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] = -960247337;
                                var_15 = 1;
                                arr_23 [i_2] [i_1] [i_5] [i_5] [i_2] = 187;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_16 += 59;
                    var_17 = -1367362885577885455;
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
