/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 619761749));
                var_13 = var_4;
                var_14 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_15 = max(619761749, (~var_0));
                                var_16 = (max(var_16, (((((min(((max((arr_8 [i_0] [i_0] [9]), 619761749))), var_11))) ? var_4 : ((var_4 ? var_5 : -619761749)))))));
                                arr_15 [i_0] [8] [i_2] [i_3] [i_4] = var_8;
                                var_17 = -619761749;
                            }
                            var_18 -= ((((max(1481742907, -77089278))) ? (~var_8) : (max((arr_10 [i_1 - 2]), (arr_9 [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 1])))));
                        }
                    }
                }
                var_19 = (arr_9 [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        var_20 = -296227425;
                        var_21 = 1833462693;
                    }
                }
            }
        }
        var_22 = var_6;
        var_23 ^= (arr_7 [i_5] [i_5] [i_5]);
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_24 = (min(var_24, ((max(-296227425, ((var_7 ? 32708 : var_10)))))));
        var_25 = min(-619761749, ((((arr_19 [i_9 + 1] [i_9] [i_9 + 1]) || (arr_19 [i_9 + 1] [i_9] [i_9 - 1])))));
    }
    var_26 = ((619761758 ? ((var_9 ? var_5 : 619761749)) : ((((max(77089277, var_2))) ? var_3 : 296227443))));
    #pragma endscop
}
