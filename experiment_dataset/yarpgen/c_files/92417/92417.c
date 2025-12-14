/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((max(var_17, var_16)) - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (((((-(arr_3 [i_0] [i_1]))))) ? (((var_6 < ((min((arr_3 [i_1] [i_0]), 55439)))))) : (arr_0 [4]));
                arr_5 [i_0] [i_1] = var_17;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            {
                var_21 = ((((5318283291957066320 == (arr_2 [i_3 - 2]))) ? (arr_7 [i_3 - 1]) : ((min((arr_3 [i_2] [i_3]), 1)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_22 = var_4;
                            arr_18 [i_2] [i_3] [i_4] [5] = (max(((((15 > 60855) | var_9))), (min((((65512 >> (((arr_9 [1] [1] [1]) - 33488))))), (min(3957463279953370036, 289562128))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_23 = (arr_15 [i_3] [i_3] [i_3] [i_3 - 3]);
                            var_24 = (((max((((arr_7 [i_2]) * (arr_3 [i_7] [i_7]))), ((var_7 & (arr_20 [i_6]))))) >> (((max(4301474665437099078, (arr_2 [i_3 + 2]))) - 4301474665437099068))));
                            arr_25 [i_2] [0] [1] [i_2] = (((arr_17 [i_6] [i_3 - 1] [i_2]) % ((max((arr_10 [11] [11] [i_7]), var_11)))));
                            arr_26 [1] = ((max(var_17, ((((arr_1 [2]) || (arr_8 [13])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
