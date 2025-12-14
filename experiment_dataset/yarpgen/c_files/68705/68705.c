/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((((((arr_6 [i_1] [i_1] [i_3] [i_3]) ? 255 : (!var_12)))) ? (((!(!64)))) : var_11)))));
                            var_14 ^= (min((max((!var_4), (~6439657898823021587))), (arr_6 [i_0] [i_0] [i_2 - 1] [i_3])));
                            var_15 *= ((((min(-1767351048, var_4))) ? ((((((var_0 ? 139408162 : 13213813724138441890))) ? (!var_1) : (min(var_9, 151179882))))) : ((var_5 ? (min((arr_1 [i_0]), 622343577)) : (((min(24083, var_9))))))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_16 = max(((0 ? ((min(var_9, var_10))) : (~var_10))), (arr_11 [i_0] [i_0] [i_0] [i_0] [9]));
                                var_17 *= ((!(!622343577)));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_18 *= ((min((!6439657898823021587), (min(111, 14)))));
                                var_19 = var_11;
                                var_20 = var_0;
                                arr_14 [i_0] [i_1] [4] [i_3] [i_5] |= (min((((((var_3 ? var_6 : 622343577))) ? ((16639 ? var_11 : -83)) : 146)), (1104647878 && 11865)));
                            }
                            for (int i_6 = 4; i_6 < 14;i_6 += 1)
                            {
                                var_21 -= (!-2147483643);
                                arr_19 [i_0] = var_3;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                var_22 = var_7;
                                var_23 = (((~522240) ? ((var_5 ? 785344164 : -6230357)) : (!2369)));
                            }
                        }
                    }
                }
                arr_24 [i_0] = ((+(((arr_2 [i_1]) ? (var_5 || var_3) : ((90 ? (arr_0 [i_1]) : 522240))))));
            }
        }
    }
    var_24 |= var_9;
    var_25 = (~var_3);
    #pragma endscop
}
