/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (-(~var_16));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [4] [i_0] [i_1] = (((((arr_2 [i_2] [i_2]) != ((var_18 ? var_8 : var_5)))) ? (((((var_12 ? (arr_3 [i_1] [i_1]) : 0))) ? (0 % var_13) : (!var_1))) : var_0));
                            var_21 ^= ((-(((77 > (((arr_9 [i_0] [i_2]) ? (arr_5 [i_2] [i_1] [i_1]) : var_2)))))));
                            arr_13 [i_3 + 2] [i_1] [11] [i_1] [i_0] = (~1243711083);
                            arr_14 [0] [i_2] [i_2] [i_1] [i_2] [i_0] &= (((-((1 ? var_6 : var_16)))) - var_15);
                            var_22 = var_10;
                        }
                    }
                }
                arr_15 [i_1] [1] [i_1] = ((1418958076157419217 * ((((1 < ((var_18 ? var_10 : var_10))))))));
            }
        }
    }
    var_23 *= (((((((576460752303423488 ? -96 : 5526))) ? var_16 : 90)) - ((((var_8 ? var_18 : var_13)) / var_6))));
    var_24 *= var_4;
    #pragma endscop
}
