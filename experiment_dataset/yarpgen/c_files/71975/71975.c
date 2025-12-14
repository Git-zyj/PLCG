/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [6] [i_1 + 1] = (((-var_0 ? (arr_3 [i_1 + 1] [i_1 - 2]) : var_3)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 += (!(((-(arr_1 [0])))));
                                var_11 += ((!(arr_13 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 2] [i_3 + 3])));
                                arr_15 [i_4] [12] |= 63;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_4;
    #pragma endscop
}
