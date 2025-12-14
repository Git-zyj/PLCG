/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 *= (arr_0 [i_0]);
        var_16 = (max((min((arr_1 [i_0] [i_0]), var_13)), (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_2 [i_0] [i_1] [i_2]) ? (arr_6 [i_1] [i_1] [i_1] [i_2]) : ((-24025 ? var_6 : 170)))))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (min(var_18, -1));
                        var_19 = (i_2 % 2 == zero) ? (((((var_1 ? 1 : (arr_4 [i_3 + 1]))) >> ((((1 ? (arr_6 [i_2] [i_1] [i_2] [i_3 - 2]) : (max(var_6, var_9)))) - 18446744073709551476))))) : (((((var_1 ? 1 : (arr_4 [i_3 + 1]))) >> ((((((1 ? (arr_6 [i_2] [i_1] [i_2] [i_3 - 2]) : (max(var_6, var_9)))) - 18446744073709551476)) - 190)))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_20 = (min(var_20, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_21 = 59354;
                        var_22 = ((-3436483861001050786 ? ((255 ? (arr_12 [i_0] [i_0] [i_2] [i_0] [i_0]) : (arr_12 [11] [1] [i_2] [i_4] [1]))) : var_12));
                        arr_16 [1] [i_1] [1] [i_2] [i_2] [i_4] = var_13;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_23 = (max(var_23, (arr_15 [i_0] [i_0] [i_2] [i_2])));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_6] [i_1] &= (!32744);
                            var_24 = var_1;
                            arr_24 [i_2] = (arr_3 [11]);
                            arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] = (-(arr_6 [i_2] [i_1] [0] [i_5 + 2]));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_2] = (arr_19 [i_5 - 1] [i_5] [i_2] [i_5] [i_5 + 1]);
                            var_25 = (max(var_25, 2));
                            arr_30 [i_0] [i_0] [i_1] [i_2] [i_5] [i_7] [i_2] = ((((var_11 ? var_5 : (arr_11 [i_0] [i_0] [12] [i_0] [i_2]))) % var_5));
                        }
                        arr_31 [i_1] [i_1] [7] [i_2] = (((arr_18 [i_2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 2]) ? (arr_18 [i_5 + 1] [i_5 - 1] [15] [i_5 + 2] [5] [6]) : (arr_18 [i_0] [i_5] [1] [i_5 - 2] [i_5] [i_5 - 2])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_26 = 7;
                        var_27 ^= ((((((-(arr_0 [i_1]))) + 2147483647)) >> 3));
                        arr_35 [i_0] [i_2] [i_0] [i_0] = (max((min(var_3, ((var_6 ? var_13 : var_13)))), (max((~16055354679439946622), ((max(1, 255)))))));
                    }
                }
            }
        }
    }
    var_28 = var_2;
    #pragma endscop
}
