/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -506815611;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= (((((arr_1 [i_1] [i_1]) + 2147483647)) >> ((((max(var_9, (arr_5 [i_0])))) - 2741947635))));
                arr_7 [9] [i_0] [14] = ((506815602 << (((~550421018) - 229))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((max((arr_12 [i_0] [i_1 - 1] [14] [i_3] [i_1 - 2]), -9520))) <= ((((arr_8 [i_1 - 1] [i_1 - 1] [4] [i_1 - 1]) > (9504 || 66)))))))));
                            arr_14 [i_2] [5] [i_2] [i_2] = 15262058289685445256;
                        }
                    }
                }
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
