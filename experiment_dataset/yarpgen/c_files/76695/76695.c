/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_12));
    var_16 = (var_13 - var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 |= ((var_7 ? ((min((arr_0 [i_0]), (arr_3 [5] [i_1] [i_1])))) : ((((max(4294967281, var_11))) ? ((53 ? 15038617648238104965 : 39600)) : var_13))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_2] |= ((-16 ? (arr_8 [i_1] [i_2] [6]) : ((14086368126756261181 ? (arr_6 [i_0] [i_1] [8] [8]) : var_6))));

                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                var_18 = 52;
                                arr_12 [i_1] = (((arr_2 [i_1]) < ((16 ? 40 : 125))));
                                var_19 ^= -21;
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_20 = 8128;
                                arr_17 [i_1] [i_2] [i_1] = var_9;
                                arr_18 [i_5] [i_1] [i_0] [i_1] [i_0] = (~-2080486124);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~((var_4 ? 2080486124 : ((var_9 ? -1672345569 : var_5))))));
    #pragma endscop
}
