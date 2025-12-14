/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = -29834;
                                arr_15 [3] [i_1] = (min(var_0, (min(var_4, 4275669603))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_0] [i_1] = (19297693 ^ 4275669629);
                    var_20 ^= ((~((max(var_8, 26714)))));
                }
            }
        }
    }
    var_21 ^= var_7;
    var_22 = (max(var_5, ((~(var_10 ^ 9885)))));
    var_23 = (((var_0 * 0) * var_18));
    #pragma endscop
}
