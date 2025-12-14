/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = 28614;
                        arr_10 [i_0] [i_2 - 1] [i_0] = (max(128, ((-(arr_9 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_14 = (max(var_14, var_8));
            var_15 = 128;
            var_16 = (((arr_13 [i_0] [i_4]) - ((max(-98, 137)))));
            var_17 = (-26325 % 34);
        }
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_18 = (min(var_18, ((min(136, 103)))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_19 [i_5] [i_5 + 1] [i_5] = arr_11 [i_5 - 2];
            arr_20 [2] = ((((min(((14929 ? var_1 : (arr_3 [i_5] [i_5] [12]))), var_0))) ? (14904 || 29031) : var_10));
            arr_21 [i_6] = ((!(arr_11 [i_5 + 1])));
            var_19 ^= ((arr_1 [i_5 + 1] [i_5 - 2]) && (arr_1 [i_5 + 1] [i_5 - 3]));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_20 *= arr_13 [16] [i_9];
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                            var_21 = (max(var_21, var_11));
                            var_22 = ((((arr_28 [i_5 - 2] [i_9] [i_7] [i_5 - 2] [i_5 - 2]) != 4)));
                        }
                        var_23 = (((((max(249, 14927)))) & (max((arr_11 [i_5]), (((arr_16 [i_6]) - var_5))))));
                        arr_31 [i_5] [i_5] [i_5] [i_5] = (((-32763 | 50632) & ((6 ? (4024806811 | var_7) : 4137211167))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_24 |= ((-(-4 || 50600)));
                            arr_35 [i_10] [i_8] [i_7] [i_6] [i_5 - 1] = var_0;
                            arr_36 [i_5] [i_6] [2] [i_8] = arr_4 [i_10];
                            var_25 -= (arr_27 [i_6] [i_6]);
                            var_26 -= (~808310415465796531);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_27 = (-31 ^ 295611553040700688);
                            arr_40 [i_7] [i_6] [i_5] [i_8] [i_11] = (arr_3 [i_5] [i_6] [i_7]);
                            var_28 += (min((arr_0 [i_5] [i_5 - 2]), ((-(arr_0 [i_5 + 1] [i_5])))));
                            var_29 = (min(var_29, ((min((max(14963, (arr_3 [i_5] [i_7] [i_8]))), 9)))));
                            var_30 = (min((arr_2 [i_5]), (max((var_1 | var_10), (arr_12 [5] [i_6])))));
                        }
                        for (int i_12 = 4; i_12 < 15;i_12 += 1)
                        {
                            var_31 = (min(var_31, ((((arr_11 [i_12]) / (((((arr_11 [i_5 - 2]) && (arr_11 [i_5 - 1]))))))))));
                            arr_44 [i_5] [i_5] = ((808310415465796525 ? 12861 : 50));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_32 ^= ((((max(-40, -26996))) + (arr_49 [i_13] [i_5])));
                        var_33 = (arr_42 [8] [i_13] [i_14]);
                    }
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_34 = ((~(((!(arr_7 [16] [i_13] [i_14] [19]))))));
                        arr_54 [i_16] [i_13] [i_14] [i_16] [i_14] [i_13] = 17638433658243755095;
                        arr_55 [i_13] [i_13] [i_13] [i_13] |= (max(((max(5630085863118030235, var_10))), var_1));
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        arr_60 [i_14] [i_13] [i_13] [i_17] |= (!-260226649);
                        arr_61 [i_5] |= var_3;
                    }
                    var_35 ^= arr_9 [i_5] [i_5] [2] [i_5];
                    var_36 = (38 <= 1884219928);
                }
            }
        }
        arr_62 [i_5] = ((((max(var_6, (max((arr_49 [i_5] [i_5 - 2]), (arr_53 [i_5])))))) ? (((((arr_12 [i_5] [i_5]) ? (arr_17 [i_5 - 1]) : (arr_39 [i_5] [i_5] [i_5]))))) : (arr_3 [i_5] [i_5 + 1] [i_5 - 2])));
    }
    var_37 = var_7;
    var_38 = var_12;
    #pragma endscop
}
