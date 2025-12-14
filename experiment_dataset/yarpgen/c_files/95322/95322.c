/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_10 -= (((arr_4 [i_1 - 1]) <= ((0 ? 0 : 0))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 ^= (((-(arr_8 [i_1 - 1] [i_2 - 1] [i_2 - 1]))));
                            var_12 = (max((((var_8 / (arr_9 [i_0] [i_2] [i_2 - 1] [i_1 - 1])))), (((arr_7 [i_3] [i_3] [i_2 + 1]) ? 0 : 1804207839))));
                            var_13 = (((arr_1 [i_0]) >= (!var_2)));
                        }
                    }
                }
                var_14 = (min(var_14, var_8));
                var_15 = (min((arr_11 [i_1 - 2] [i_0] [i_1 + 1] [i_1] [i_0] [i_1 - 2]), (((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? var_4 : 0))));
                var_16 *= ((~(~var_7)));
            }
        }
    }
    var_17 = (max(var_17, (((((((var_5 ? 1 : 3570496040996090664)) < var_6)) ? ((var_2 ? var_0 : 0)) : var_8)))));
    var_18 = ((var_1 ? -var_8 : (var_9 == var_5)));
    #pragma endscop
}
