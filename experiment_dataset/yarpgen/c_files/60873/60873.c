/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_11 ? ((var_2 ? var_9 : var_8)) : 1565815542)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (((1 ? (((arr_4 [4] [8] [8]) / (arr_0 [i_1] [i_0]))) : var_17)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_22 ^= var_8;
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = (((((~var_12) ? ((var_13 / (arr_11 [i_0 - 1] [i_0] [i_0] [2] [i_0 - 1] [i_0]))) : var_7)) > ((((var_7 * var_10) != (arr_5 [i_4 + 2]))))));
                                var_23 = (((arr_5 [i_0]) ? 20525 : (min(-1377468987, 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            {
                var_24 = (!65535);
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_24 [i_5] [17] [i_5] [i_5] = var_13;
                            var_25 = (max(var_25, (arr_13 [i_5])));
                            var_26 = (((((((1 ? var_5 : var_5)) * (arr_20 [i_5] [i_8])))) ? (((arr_19 [i_6 - 1] [i_7] [i_7 - 2] [i_7 - 3]) & ((var_12 ? var_15 : var_10)))) : ((((arr_18 [i_7 - 3] [i_7 - 3] [i_7 + 2] [i_7 + 2]) ? (var_19 & var_1) : var_2)))));
                            var_27 = ((-((((arr_20 [i_6 - 2] [i_7 - 1]) > (((arr_16 [i_5] [i_6 - 1]) ? var_5 : var_19)))))));
                            var_28 = (((((var_3 ? var_5 : var_18))) ? ((var_10 ? 1 : var_16)) : var_17));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_30 [i_5] = ((((((max(var_13, var_9))) ? var_17 : var_10)) >> (min(-0, var_16))));
                            var_29 = (min(var_29, ((((~-278466931) ? ((((var_6 ? var_15 : var_3)) * (min((arr_29 [i_10] [i_10] [i_9] [i_6] [i_5]), var_3)))) : ((((~var_18) ? ((((arr_18 [i_10] [9] [i_6 + 1] [12]) || var_3))) : -243))))))));
                            var_30 += 1;
                        }
                    }
                }
                arr_31 [i_6] [i_5] = ((var_3 ? ((min((arr_26 [i_5] [i_5] [i_6 + 1]), var_4))) : (((((var_15 ? (arr_16 [i_6 + 2] [i_5]) : var_10))) ? var_7 : (var_11 && var_9)))));
            }
        }
    }
    var_31 += -var_6;
    #pragma endscop
}
