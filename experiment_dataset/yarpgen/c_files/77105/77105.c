/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_7);
    var_19 = (max((~var_2), ((((max(var_12, var_4))) ? var_8 : var_16))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 += var_10;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (min(var_21, var_3));
                        var_22 -= var_11;
                        var_23 = (~var_1);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((1023 ? 1643688205 : 8830898208934746447)))));
                        var_25 = (min(var_25, var_3));
                        arr_12 [i_0] = (((~var_2) ? (((var_7 << (var_11 - 5387)))) : ((var_17 ? var_11 : var_2))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = ((((var_11 ? var_1 : var_14))) ? var_3 : var_11);
                            arr_19 [i_0] [i_5] [i_0] [10] [i_0 - 1] [i_0 - 1] [i_0] |= (var_10 ? var_2 : var_2);
                        }
                        var_27 = -var_15;

                        for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_28 *= (12 ? 470 : 14754208531027284134);
                            arr_23 [i_2] [i_2] [i_0] [i_2] = (((((var_16 ? var_12 : var_10))) ? ((var_10 ? var_4 : var_6)) : -var_0));
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_5] [i_7 - 1] = ((!(((var_6 ? var_13 : var_14)))));
                            var_29 |= ((var_1 ? var_8 : (((var_9 ? var_16 : var_0)))));
                        }
                        for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_30 = var_17;
                            var_31 |= ((((((var_12 + 2147483647) << (var_0 - 8548)))) ? var_10 : ((var_13 ? var_15 : var_16))));
                            arr_28 [i_0] = ((var_15 ? var_16 : var_15));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
