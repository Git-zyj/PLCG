/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 += (((!var_1) * 2146959360));
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_4] = (((((!(arr_0 [i_0])))) != (((var_12 || (arr_12 [i_4]))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = -1781531477;
            }
        }
    }
    var_15 |= (max(0, var_8));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] = (((~2494283506787975128) ? var_13 : ((1 - (((arr_0 [i_6]) ? (arr_9 [i_5]) : var_4))))));
                    arr_24 [i_5] [i_7] [1] [i_5] = var_4;
                    arr_25 [i_5] [i_5] [i_7] = -25468;
                }
            }
        }
    }
    #pragma endscop
}
