/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!((1 || (-23675 || -8040))));
    var_17 = (var_14 ^ 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((~(arr_5 [i_2 + 1] [i_0] [i_2]))));
                    arr_9 [i_0] [i_0] [i_0] [10] = (arr_5 [i_0] [i_0] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [0] [i_4] = min((((!(!127)))), (min(-14420, (arr_14 [i_4] [i_2] [i_3 - 1] [i_2] [i_1] [i_0]))));
                                var_18 *= 896;
                                var_19 = (max((arr_13 [i_1] [i_2] [i_0] [i_4]), (max(var_6, 13833021212368287323))));
                                arr_16 [i_4] [i_0] [i_3] [4] [i_0] [i_0] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((12216591917771814650 != 18005) ? var_12 : 54756));
    #pragma endscop
}
