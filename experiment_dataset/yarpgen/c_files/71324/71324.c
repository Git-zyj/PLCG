/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((~(19024 | var_1))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 *= ((max(3341874362, (arr_2 [i_0]))) > (((!var_7) | (((arr_2 [17]) + (arr_4 [i_1] [13]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_4] = (~var_6);
                                var_13 *= -2185788714328204855;
                                var_14 *= ((~((min((arr_10 [i_4] [i_4] [3] [i_4] [i_3 - 1]), var_8)))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = ((((min(((((arr_6 [i_1]) && 2075287835860402032))), (arr_0 [i_0])))) || 16302229361154609005));
                arr_13 [i_0] [i_1] [1] = ((min(2185788714328204854, (((88 | (arr_9 [i_0] [i_0] [7] [0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
