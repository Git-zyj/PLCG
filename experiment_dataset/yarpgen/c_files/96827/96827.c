/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-32744 ? ((-(max(var_0, var_3)))) : ((min(var_4, ((var_1 ? var_6 : -2147483624)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_11 *= (max(((max(-32758, 151))), ((max((arr_1 [i_0 + 2]), var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (arr_3 [i_0 + 4] [i_0 + 4]);

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_13 &= ((((((arr_3 [2] [i_1 + 1]) / 9253765308456964031))) ? (((arr_12 [9] [i_3] [9] [9] [i_0 - 1]) & (arr_0 [i_2] [i_0]))) : 65531));
                                var_14 = -var_5;
                                var_15 = ((var_7 ? (arr_3 [i_1 - 3] [i_0 + 2]) : -2147483642));
                                arr_13 [i_3] [11] [i_3] [9] [i_4] = ((-(-9223372036854775807 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
