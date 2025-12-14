/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 *= var_17;
                    var_21 ^= -2670089925655771247;
                    var_22 = 18446744073709551615;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_23 = (((((483892377 ? 35155 : -1))) ? (((min(var_15, var_4)))) : (max((~252), var_15))));
                            arr_17 [i_6] = var_2;
                            arr_18 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((var_4 ? (arr_13 [i_3 - 1] [i_3] [i_3] [i_3]) : ((((var_13 ? (arr_15 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3]) : (arr_2 [i_5] [i_4 - 1]))) & var_10))));
                            var_24 = var_8;
                            var_25 -= (max(((max(var_0, (arr_1 [i_3 - 2])))), (((arr_3 [i_3 - 1]) ? var_6 : (arr_3 [i_3 + 1])))));
                        }
                    }
                }
                var_26 = (((!127) && ((min(var_1, (arr_5 [i_4 - 1] [i_4 - 2]))))));
            }
        }
    }
    #pragma endscop
}
