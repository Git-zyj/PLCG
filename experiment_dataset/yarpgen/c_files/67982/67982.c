/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = var_16;
                arr_7 [i_1] [i_1] = ((max((arr_3 [i_0]), 33940)) & (max((arr_3 [i_0]), (arr_3 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 ^= ((max((arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3 + 2]), (219 + -11208))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [2] = ((((((var_5 - 54998) + var_2))) && 1));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, ((min((arr_8 [i_0] [16]), (min((arr_8 [i_0] [4]), 31379)))))));
            }
        }
    }
    var_22 = (!var_13);
    #pragma endscop
}
