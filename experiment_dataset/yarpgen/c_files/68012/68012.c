/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((((var_11 ? ((2147483647 ? 1043078565 : 22370)) : 22370))) ? ((-98 ? ((var_6 ? -1197408772 : 153)) : 18)) : 246));
        var_17 = ((20987 ? -1197408775 : ((var_15 ? ((var_13 ? 1 : 13259015769774151419)) : 207))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, var_6));
                    arr_10 [3] [i_0] [i_0] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((-18547 ? 1 : 1))) ? ((var_4 ? 114 : -18548)) : -115)))));
                                var_20 = 14244;
                            }
                        }
                    }
                    var_21 = 68;
                }
            }
        }
        arr_16 [i_0] [i_0] = 0;
    }
    var_22 *= ((-1318140583 ? 22380 : var_14));
    #pragma endscop
}
