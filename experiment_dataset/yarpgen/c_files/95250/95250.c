/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_6 - var_3);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = (var_1 > var_9);
        var_15 = var_11;
        var_16 = var_6;
        arr_2 [i_0 - 1] = ((var_8 / (var_2 | var_9)));
        arr_3 [i_0] [i_0] &= (var_12 | var_2);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (((1043413220 >> 8) * var_6));
        var_18 = (var_9 + var_10);
        arr_6 [i_1] = var_0;
        var_19 = var_8;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_14 [i_3] [i_4] = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] = var_7;
                                var_20 = var_6;
                                var_21 = var_2;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_25 [i_2] [i_3] [i_7] [i_8] = (var_2 - var_12);
                        arr_26 [i_2] [i_2] = var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_22 ^= (((((var_12 << (var_7 - 10929258335874588785)))) + (((var_8 - var_9) >> (var_1 - 2201259691286946927)))));
                                arr_34 [i_2] [i_10] [i_10] [i_10] = var_7;
                                var_23 = var_0;
                                var_24 = (var_4 | var_7);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_25 = ((5436 >> (18238 - 18211)));
                        arr_39 [i_2] [i_3] [i_7] [i_11] [i_11] = var_11;
                        var_26 = var_4;
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        var_27 &= (7159686744423843612 == 133693440);
                        var_28 = var_8;
                        var_29 -= var_4;
                        var_30 = (((var_9 + var_0) >> (var_9 - 17957101440748524329)));
                        arr_43 [i_12] [i_7] [i_2] [i_2] = var_2;
                    }
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_49 [i_2] [i_3] [i_13] = (1 + 1);
                        arr_50 [i_2] [i_3] [i_2] [i_14] = (var_4 >= var_8);
                    }
                    arr_51 [i_2] [i_13] = ((var_5 * (((22923 & 32512) * (var_0 * var_11)))));
                }
                var_31 = (45 * var_4);
            }
        }
    }
    #pragma endscop
}
