/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] &= 15;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] = (!15);
                                var_14 = (min(var_14, var_1));
                                var_15 = var_0;
                                var_16 -= var_1;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_0] |= (((var_8 ? ((var_2 ? 1 : var_13) : ((var_5 ? var_5 : var_3))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (~var_11)));
    #pragma endscop
}
