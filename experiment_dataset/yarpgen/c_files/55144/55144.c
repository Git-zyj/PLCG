/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = var_12;
                    var_20 = ((!(((var_16 ? 49 : var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (((((max(var_15, var_17)) << (((((arr_0 [i_1]) << (arr_13 [i_0] [i_0] [i_4] [i_3] [i_4]))) - 2)))) >> (9223372036854775807 - 9223372036854775749)));
                                var_22 = (arr_3 [i_4 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
