/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (0 * -1);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [0] |= ((var_12 ? (max(var_12, (arr_0 [i_0 + 1]))) : -7));
        var_16 = (max(var_16, ((((min((arr_1 [i_0 + 2]), var_12)) + (((arr_1 [i_0 + 2]) - var_0)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 *= ((5252111331997545959 ? 268173312 : ((18126090446142724279 ? 65535 : -26))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_0] [10] [i_3] [i_0 + 1] |= var_3;
                                var_18 = (max(var_18, ((max((((~(arr_0 [i_0 - 1])))), (~var_13))))));
                                var_19 = var_14;
                                arr_14 [i_0] [20] [i_2] [i_3] [i_4] [i_0] = (max(var_3, var_14));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
