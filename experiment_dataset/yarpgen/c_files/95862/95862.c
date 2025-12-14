/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max(-var_12, (max(((933669537 ? var_11 : var_2)), ((var_9 ? var_6 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((var_12 ? ((933669516 ? var_1 : (arr_0 [i_0]))) : (((-933669560 ? var_0 : 933669536)))));
        var_14 = var_11;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (((arr_4 [i_0] [3] [i_1]) ? ((-933669538 ? var_7 : (arr_4 [i_1] [i_1] [i_1]))) : (((var_8 ? var_8 : var_0)))));
            var_16 = (((arr_4 [i_0] [21] [i_1]) ? ((32765 ? var_11 : var_5)) : (arr_4 [i_0] [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 &= ((var_5 ? 933669532 : var_0));
                        var_18 *= (((var_3 - 933669523) - (arr_5 [i_2 + 1])));
                        arr_12 [i_1] [i_1] = -32766;
                    }
                }
            }

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_19 = ((-(var_10 - var_11)));
                            var_20 *= (((arr_16 [i_6] [i_0] [i_0] [i_0] [i_0]) <= (arr_16 [i_0] [i_6] [i_4 + 2] [i_5] [i_6])));
                        }
                    }
                }
                var_21 = (max(var_21, var_4));
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_22 = ((var_4 ? var_2 : var_9));
            var_23 = (var_0 && var_7);
            var_24 += ((~(((arr_6 [i_7] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_7] [i_7]) : var_2))));

            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                arr_26 [i_0] [i_7] [i_7] [i_8 + 1] = ((~1904052980798982904) % -1);
                var_25 = ((((7 ? 933669553 : 933669537)) / 32765));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_29 [i_0] [i_0] [i_0] [i_7] = ((((var_8 ? var_5 : var_8))) && var_8);
                arr_30 [i_7] [i_7] [i_7] = var_5;
                var_26 = ((((var_3 ? 1032192 : -933669537)) << ((((var_10 ? -1295655769 : 108)) + 1295655783))));
            }
        }
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            arr_34 [i_0] [i_0] = (arr_9 [11] [i_10] [10] [i_0] [i_0]);
            var_27 = var_2;
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_28 = var_4;
        var_29 = (min(var_29, (((~((-((1 ? (arr_24 [10]) : var_3)))))))));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            var_30 = (+-0);
            arr_40 [6] &= (var_5 >= var_4);
            var_31 = arr_24 [i_11];
        }
    }
    #pragma endscop
}
