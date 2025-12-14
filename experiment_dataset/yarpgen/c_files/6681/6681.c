/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 *= (((((var_11 ? var_1 : var_15))) ? var_5 : 36067));
                        var_18 = ((1 ? var_15 : var_9));
                    }
                }
            }
        }
        var_19 = (((arr_7 [i_0 + 1] [i_0]) ? var_14 : (arr_7 [i_0 - 1] [i_0 + 1])));
        var_20 = ((((var_1 ? var_6 : var_6)) * var_2));
        arr_11 [i_0] = (((~var_10) + ((var_8 ? var_14 : 7188898188843791911))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_21 = 15072;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_22 += var_7;
                            arr_21 [7] [i_0] [9] [i_4] [i_4] [i_7] [i_7] = var_11;
                        }
                    }
                }
            }
            var_23 *= (((((var_4 ? (arr_20 [i_0] [i_4] [0] [i_4] [i_4] [i_4]) : var_5))) && var_6));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_24 = (((var_11 / 29458) && (arr_3 [i_8] [i_9] [1])));
                                var_25 += var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_43 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] = (var_11 || 1);
                                var_26 = var_13;
                            }
                        }
                    }
                    arr_44 [i_8] = (((~var_14) ? var_4 : var_1));
                }
            }
        }
        var_27 = (arr_9 [i_8] [i_8] [2]);
    }
    var_28 = (~var_7);
    var_29 = (var_0 && var_3);
    #pragma endscop
}
