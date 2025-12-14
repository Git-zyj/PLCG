/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~8313507561770916091);
        var_10 = ((~(max(10133236511938635538, (min(8313507561770916087, 32764))))));
        arr_3 [i_0] [i_0] = (((((10133236511938635524 ? var_1 : 1))) ? ((var_7 ? ((47725 ? 8313507561770916077 : var_7)) : var_9)) : (((-((max(var_9, -46))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = ((-1 ? 10133236511938635538 : -28434));
                    var_11 *= ((!(((((min(10133236511938635521, var_9))) ? 12535 : var_6)))));
                    arr_11 [i_0] [i_1] [2] [i_2 - 1] = ((max((max(0, -1), (max(0, -2147483634))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 = (min(var_12, ((((((-1 ? 28437 : var_3))) ? var_8 : ((var_5 ? 1 : 127)))))));
                        arr_15 [i_1] [i_1] [i_1] = ((19 ? var_6 : var_8));
                        arr_16 [i_0] [i_0] [i_0] [1] [i_3] = ((var_2 ? var_2 : -5));
                        var_13 = (max(var_13, (((var_4 ? var_8 : ((var_4 ? -10208 : -24)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_23 [i_0] [i_5] [7] [i_4] [5] = ((-(min(-var_5, -25))));
                                var_14 += (((((31 ? 2147483642 : var_1))) ? (((((var_5 ? var_9 : var_0))) ? ((min(var_6, 195))) : var_4)) : (min(((min(32764, 20066))), var_4))));
                                var_15 = ((((min(-var_5, 31578))) ? (!var_4) : ((((min(0, var_6))) ? 16642 : var_6))));
                                var_16 = (max((((-127 - 1) ? var_8 : 32767)), 16));
                                var_17 ^= (min(((var_8 ? var_2 : var_6)), -1));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_18 -= (((min((min(var_0, var_1)), (((var_0 ? var_1 : var_3)))))) ? (((((5173 ? 24 : 14496466454008827179))) ? var_6 : ((0 ? var_0 : var_0)))) : (((var_5 ? ((max(-1, 30044))) : var_1))));
        var_19 ^= -48;
    }
    var_20 = var_4;
    #pragma endscop
}
