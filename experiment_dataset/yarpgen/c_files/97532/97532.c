/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((((max(8567100977196005116, (arr_2 [i_0])))) ? ((((arr_2 [i_0]) > (arr_2 [i_0])))) : 160))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (((~(107 >= var_4))))));
                    var_11 *= (var_0 != var_2);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_12 = 96;
                                var_13 = ((~((var_0 ? 96 : var_1))));
                                var_14 = ((-((((arr_15 [i_3] [i_4]) > -88)))));
                            }
                        }
                    }
                    var_15 = arr_21 [i_3] [i_4] [i_5 + 1] [i_4] [i_5];
                }
            }
        }
        arr_22 [1] = (~var_0);
        var_16 = (((var_2 > var_4) / (1 * var_5)));

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_17 *= (((var_1 & var_7) ^ (((var_9 ? 2455303319 : var_4)))));
                        var_18 = var_3;
                    }
                }
            }
            arr_32 [i_3] = (((~(arr_11 [11]))));
            arr_33 [i_3] [i_8] = var_4;
            var_19 = ((2455303326 <= (!var_9)));
            var_20 = ((((46606 ? var_6 : var_4)) ^ ((((arr_15 [i_3] [i_3]) || 1839663977)))));
        }
    }
    for (int i_11 = 3; i_11 < 22;i_11 += 1) /* same iter space */
    {
        arr_36 [i_11] = ((((-(max(1, var_9)))) <= (((((((arr_13 [i_11 + 2]) / var_4)) >= 119))))));
        arr_37 [i_11] = (-(arr_14 [i_11] [i_11] [13]));
        arr_38 [i_11] = (((min(((481346743 + (arr_13 [i_11]))), (arr_19 [21] [1] [i_11] [2] [i_11 - 3]))) + var_2));
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_21 = (((2692305836 >= 124) % (10 - 2455303319)));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_49 [i_12 - 3] [i_15] [i_12 - 2] [2] = ((0 == ((((arr_43 [i_12] [i_13]) != (arr_45 [2] [i_15]))))));
                        arr_50 [i_12 - 2] [i_12 - 3] [i_15] [i_15] [i_14] = (arr_48 [i_12] [i_13] [i_14] [i_15]);
                    }
                }
            }
        }
        var_22 = (min(var_22, (((1602661460 ? 49152 : -18096)))));
        var_23 = var_8;
    }
    var_24 = var_9;
    var_25 = (1 < -115);
    #pragma endscop
}
