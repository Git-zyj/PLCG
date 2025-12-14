/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -9223372036854775806));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 += (((-2147483647 - 1) == 9219159988660129250));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 -= var_4;
                            var_19 += 24576;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, (17201 && -101)));
                                var_21 = (max(var_21, -2147483629));
                                var_22 = (max(var_22, (((17215 > (-2147483647 - 1))))));
                                var_23 -= -7145236201625856529;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
