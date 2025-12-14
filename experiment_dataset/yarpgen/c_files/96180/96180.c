/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_4, (min((!23617), ((1 ? var_13 : -32))))));
    var_16 = var_11;
    var_17 = 112;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = var_4;
                                var_18 = (arr_0 [i_0 - 3]);
                                arr_14 [i_4] [i_4] &= (max((((((min(4035083755683952931, 9350169292351689252))) ? (((max((-127 - 1), 116)))) : (arr_1 [i_0])))), (((max(4035083755683952931, (arr_10 [0] [i_4] [i_4] [i_4]))) + (arr_12 [2] [i_0 - 1] [i_3] [i_2] [i_0 - 1] [i_0])))));
                            }
                        }
                    }
                    var_19 *= (((((-(arr_2 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
