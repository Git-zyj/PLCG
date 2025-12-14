/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [3] = ((var_5 ? ((min(var_9, (((arr_0 [i_0] [i_0]) ? 57534 : var_10))))) : (max(var_7, (arr_2 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = (min((arr_0 [15] [15]), (min((arr_0 [i_0] [i_0]), 8002))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                var_12 += (min(((min(-126, (max(32767, -459124621))))), 1222323277));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_22 [i_2 + 3] [i_1] [8] [i_4] [i_4] = (arr_9 [1]);
                                var_13 = 8001;
                                arr_23 [1] [i_4] = (max((((arr_13 [19]) << ((((-185743381 - (arr_20 [i_3] [i_2] [i_3] [i_2] [2] [i_4] [i_3]))) - 670791112)))), -2147483641));
                            }
                        }
                    }
                }
                arr_24 [i_1] [i_2 + 1] = 57344;
            }
        }
    }
    #pragma endscop
}
