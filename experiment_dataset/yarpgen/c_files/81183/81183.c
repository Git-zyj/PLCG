/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = var_8;
                            var_17 = (((!13447191440852031517) ? (((arr_4 [i_1 + 1]) ? var_8 : (arr_13 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 + 2]))) : var_5));
                            arr_14 [i_0] [i_1 + 4] = (arr_5 [i_0]);
                            var_18 = (min(2090895348, (!127)));
                        }
                    }
                }
                var_19 = -123;
            }
        }
    }
    #pragma endscop
}
