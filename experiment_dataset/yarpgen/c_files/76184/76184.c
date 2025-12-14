/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 += (~60);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_11 [i_0 - 3] [i_3] [i_3 - 1] [15] [i_4 + 1]) ^ (((arr_10 [i_0 + 2] [i_1] [i_2] [i_3 + 1] [i_2] [i_0 + 2]) ? var_8 : 33371528777143297))));
                                var_17 = (max(var_17, (((!(arr_2 [i_2] [i_4 - 1]))))));
                                var_18 = (90 ? (201 % var_0) : (224 - 105));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_19 += (((--255) - (((32 < 524287) ^ (max((arr_18 [5] [i_1] [i_5] [i_6] [i_7]), 6637933978371947776))))));
                                arr_20 [i_0] [i_1] [0] [i_6] [i_6] [i_7] [i_0] = (min((arr_12 [i_0 - 2] [i_7] [15]), (((arr_0 [i_0 + 1]) ? 32767 : 109))));
                            }
                        }
                    }
                }
                var_20 += ((!(((~((652405369443779547 ? -24850 : 63)))))));
                var_21 = ((224 ? ((((!(arr_19 [i_1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) ? (((arr_9 [i_0] [i_0 - 3] [i_1] [i_1]) ^ var_4)) : var_4)) : var_11));
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
