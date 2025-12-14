/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_1, (((!(!var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 *= ((~(arr_2 [i_0])));
        arr_3 [i_0] = (((arr_2 [i_0]) ? -9561 : var_7));
        arr_4 [i_0] = (arr_2 [i_0]);
        var_12 = (((arr_2 [i_0]) ? (-32767 - 1) : 267911168));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_13 = (((-3 ? -1486374272 : -3)));
                                var_14 &= ((var_6 ? (arr_14 [i_1] [i_2] [i_2 + 1] [i_4] [i_3]) : ((((arr_14 [16] [20] [i_2 + 1] [i_4] [i_3]) >= var_1)))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
