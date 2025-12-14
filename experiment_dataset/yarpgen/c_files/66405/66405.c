/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 = (((((min(var_13, var_1)))) - (255 | 31)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = 127;
                    }
                    arr_13 [15] [i_2] [i_2] [15] = (min((var_10 / var_6), (15041654704088736141 % 18446744073709551615)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] [i_4] [i_2] [i_1] [i_0] = (min(-30, var_12));
                                var_21 = (min(var_21, (((-1 ? -6 : 1)))));
                                var_22 = (min(var_22, ((((438929178 ? var_4 : 3163997833))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_23 ^= (+-1909908898);
        arr_25 [i_6] = 3401081034;

        for (int i_7 = 4; i_7 < 24;i_7 += 1)
        {
            var_24 = (!-3039351134);
            arr_30 [i_7] [i_7] = var_17;

            /* vectorizable */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_34 [i_6] [i_8] [i_8] |= (var_9 & 65535);
                var_25 = (0 / 15062);
                arr_35 [i_7] [i_6] [i_7 - 1] [i_7] = ((46660 ? var_3 : 10971179617446617105));
                var_26 = ((4294967295 ? 12919901789237153312 : 1));
            }
        }
    }
    #pragma endscop
}
