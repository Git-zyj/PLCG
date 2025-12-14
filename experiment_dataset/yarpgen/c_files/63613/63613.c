/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((var_9 + 2147483647) << ((((min(var_5, 20549))) - 6021))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (((((max((arr_4 [i_0] [5]), 0)))) != 1140132481));
                var_16 = (max(var_16, (((82859358 ? var_11 : var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_2]);
                            var_17 -= (min((-108 / 10464), -var_11));
                            var_18 ^= ((59407 <= ((((((max(var_4, (arr_0 [6]))))) > (arr_4 [i_0] [i_0]))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [11] [i_3] = -10137;
                        }
                    }
                }
                var_19 = 1;
            }
        }
    }
    #pragma endscop
}
