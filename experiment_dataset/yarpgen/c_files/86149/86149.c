/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_19 = var_1;
                    arr_12 [i_0] = var_9;
                }
                arr_13 [i_0] [i_0] = (((1 ? var_4 : var_1)) / ((-(max(1, var_4)))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_20 = 20561;
        var_21 += 245;
        var_22 = 1;
        arr_16 [i_3] [i_3 + 2] = (~var_0);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_23 = (max((~-1), ((-((var_0 ? var_8 : var_11))))));
                                var_24 = (max(var_11, (max(var_1, (arr_17 [i_4] [i_6])))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = 1;
                            }
                        }
                    }
                }
                arr_30 [i_4] [i_5] [i_5] = (((((((max(var_3, -20562))) ? (~var_16) : var_17))) ? var_0 : (--1)));
                arr_31 [i_4] [i_5] = (var_16 - -1);
                var_25 = var_8;
                var_26 = var_10;
            }
        }
    }
    var_27 = 1;

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_35 [i_9] = (((-1957239816462642769 + 9223372036854775807) << (var_0 - 2088509795)));
        var_28 = ((~((~(max(-2380279112365086061, var_11))))));
        var_29 = 4076267183138760410;
    }
    #pragma endscop
}
