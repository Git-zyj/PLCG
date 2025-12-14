/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = 127;
                arr_7 [i_0] = (-127 | var_6);
                var_21 |= var_16;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 ^= (((((((var_15 ? 127 : 87))) || ((98 || (arr_8 [i_2]))))) ? (arr_9 [i_2]) : ((((((var_0 ? (arr_11 [i_2] [i_2]) : var_10))) || (!245))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 |= ((48 && (((+(((arr_9 [i_6]) & var_10)))))));
                                arr_20 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] [i_6] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((((127 / 64) % 221))) ? 207 : ((var_10 << (7 && 64)))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                {
                    arr_28 [i_9] [i_8] [i_7] [i_7] = (((var_0 * ((223 ? 84 : (-127 - 1))))));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_25 = (((var_5 - 208) ? (-127 - 1) : 20));
                        var_26 = (var_2 | 127);
                        var_27 *= (((-45 & ((var_10 ? var_13 : var_3)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_28 -= (arr_26 [i_11] [i_7] [i_9]);

                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            var_29 |= (((((var_1 ? 95 : 188))) ? (67 | 0) : var_18));
                            arr_37 [i_7] |= ((63 <= (arr_24 [i_7])));
                            arr_38 [i_7] [i_8 + 1] [i_11] [i_11] [i_12 - 2] = (((arr_33 [i_12 - 2] [i_8 - 2] [i_11] [i_9 - 2] [i_12 - 2]) >= (arr_33 [i_12 - 1] [i_8 - 1] [i_11] [i_9 + 3] [i_12 - 2])));
                            var_30 |= 46;
                        }
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_31 |= ((30 ? var_8 : (38 | -122)));
                        var_32 = ((var_12 ? (-1 || 0) : var_7));
                        arr_41 [i_7] [i_7] = (arr_25 [i_8 + 2] [i_8 + 2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
