/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [4] [i_1] = (min(((1 ? (arr_0 [i_0 + 3]) : 1)), (min((arr_2 [i_0 + 3]), var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = ((((min((arr_10 [i_3] [i_3 - 2] [i_2] [i_2]), var_4))) ? (((((-(arr_3 [i_2])))) ? 165 : 3008709258)) : (max((var_0 + 4032), 3008709258))));
                            arr_13 [i_1] [i_1] = (arr_10 [i_0] [i_3 - 1] [i_2] [i_0 - 1]);
                        }
                    }
                }
                var_19 = (((max(16383, 12351347908140181055)) + ((((arr_0 [i_0 + 1]) ? (arr_5 [i_0 + 3] [i_0]) : ((1286258038 ? 59 : -29983)))))));
                var_20 = 1286258022;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_21 = (((((arr_11 [i_4 - 3] [i_4 - 1] [i_4] [i_4 - 2] [2]) == 4194176469)) ? (arr_4 [i_4] [i_4] [13]) : ((~(arr_9 [i_5])))));
                var_22 = var_11;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_23 ^= (min((5044725787958826886 + var_15), (max(var_1, 6012))));
                                var_24 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((min(((min(1, 6012))), var_11)) == var_10))));
                            var_26 = 81;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
