/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_18 *= ((((-(var_11 <= var_0))) % var_10));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_8;
            arr_6 [9] [i_0] [i_1] = (var_11 + var_8);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_19 = var_12;
                            var_20 = var_10;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5 + 3] |= ((-var_10 - (var_6 <= var_7)));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_31 [i_9] [i_9] &= var_1;
                            var_21 -= var_1;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_22 -= var_17;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_23 -= var_8;
                                arr_43 [5] [i_10] [i_12] [5] [i_5] = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_24 = (var_14 <= -var_6);
                                var_25 &= var_10;
                                var_26 *= (((var_2 - -var_14) | var_3));
                            }
                        }
                    }
                    var_27 = (103 == 1);
                }
            }
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_28 = var_9;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 10;i_18 += 1)
                {
                    {
                        var_29 = var_15;
                        var_30 = (min(var_30, var_12));
                    }
                }
            }
            arr_55 [i_5] [i_5] = (-(var_11 ^ var_5));
        }
        var_31 = (min(var_31, var_3));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 8;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    arr_64 [2] [i_19] [i_19] [i_20] &= -var_13;
                    var_32 = var_6;
                }
            }
        }
    }
    var_33 -= var_5;
    var_34 = var_14;
    #pragma endscop
}
