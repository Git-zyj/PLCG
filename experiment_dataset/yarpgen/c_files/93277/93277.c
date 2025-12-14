/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = max((arr_7 [i_4] [i_0] [i_0] [i_0]), (min((max(31408, 4573)), 32764)));
                                var_21 = 37253;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [8] |= arr_2 [i_0];
                }
            }
        }
    }
    var_22 = ((var_2 < ((12288 ? 65535 : 24307))));
    #pragma endscop
}
