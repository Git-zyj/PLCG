/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = 109;
                arr_5 [i_0] [i_1] = (max(64477, 1));
                arr_6 [3] &= var_3;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [7] [i_0 - 1] = ((-(((((1329331679 ? (-2147483647 - 1) : 3))) ? 127 : (2965635616 | var_9)))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [3] [i_4] &= (min(137434759168, 0));
                                var_11 = (!1217087938);
                                var_12 = -1365254658;
                                arr_16 [8] [i_1] [i_1] [i_2] [i_3] [1] [9] = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_13 = ((min((max(-1237821103, 3688162958492376048)), -72)) & (arr_13 [i_0] [i_0 - 1] [4] [12] [i_5] [1] [12]));
                            arr_21 [10] [i_1] [8] [i_6] &= var_4;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_14 *= (max((min((((var_0 ? var_4 : var_7))), 15626743279467110212)), (arr_25 [i_10] [i_9] [i_7])));
                                var_15 |= 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_16 = (((((((max(255, (arr_28 [i_7] [i_12] [i_13])))) ? var_5 : ((~(arr_35 [i_7] [i_13])))))) ? var_3 : (min(9559, 1329331679))));
                            arr_39 [5] = (((((arr_35 [22] [i_8]) ? 2965635616 : (arr_30 [i_8] [i_13])))) ? var_3 : (var_2 / var_3));
                        }
                    }
                }
                var_17 -= arr_31 [i_7] [i_7];
            }
        }
    }
    var_18 -= var_5;
    var_19 -= ((var_9 ? ((max(4300867653632170566, -1161259638167909631))) : ((((var_2 / var_7) % (min(var_8, var_1)))))));
    #pragma endscop
}
