/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = min(var_9, (((min(0, 4049976182)) - (~0))));
        arr_2 [i_0] = (((1 >= var_9) * (!var_1)));
        var_14 ^= -1;
        var_15 ^= ((-var_9 ? var_3 : var_3));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [11] [i_3 + 3] [i_4] [i_3] = (var_4 && 3150279411);
                                var_16 ^= var_8;
                            }
                        }
                    }
                    var_17 = (min(var_17, ((var_7 ? 244991110 : var_12))));
                }
            }
        }
        var_18 = 1;
        var_19 = (((1 ? (var_0 / var_6) : var_6)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_20 ^= min(var_4, var_9);

        /* vectorizable */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_21 = (min(var_21, (var_5 >= var_9)));

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_22 = -var_4;
                var_23 = (0 ? 0 : (var_11 * var_10));
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_24 = (~var_11);
                arr_30 [i_7 + 2] = (var_5 >> (var_7 - 3738415863));
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_35 [i_6] [i_6] = (~var_9);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_25 = var_2;
                            var_26 = ((!(var_9 || var_7)));
                            var_27 ^= var_5;
                        }
                    }
                }
                var_28 = (~1);
            }
        }
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        var_29 = (!var_3);
        var_30 ^= var_2;
        var_31 = (-((var_6 ? 1429007581 : var_5)));
        var_32 ^= 0;
    }
    var_33 = (250391471 * var_5);
    #pragma endscop
}
