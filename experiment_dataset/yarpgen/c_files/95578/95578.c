/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((var_15 & (min(var_17, var_6))));
                                var_21 *= ((-var_7 % (((((var_0 ? var_17 : var_17)))))));
                                arr_15 [i_4] [2] [i_0] [i_0] [2] [i_0] |= var_7;
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = (var_9 ^ var_5);
                            }
                        }
                    }
                    var_22 *= (~var_7);
                }
            }
        }
    }
    var_23 *= var_9;
    #pragma endscop
}
