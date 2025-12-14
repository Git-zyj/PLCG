/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((-1120063198 ? (((0 / (arr_3 [i_1])))) : 90)))));
                            var_19 = (max((min(var_3, (((-2147483647 - 1) ? 0 : 636072787)))), ((((arr_6 [i_1 - 1]) ? 19 : (arr_6 [i_1 - 2]))))));
                            var_20 = (((((-9223372036854775807 - 1) ? 0 : var_14))));
                            var_21 ^= 9223372036854775807;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = -0;
                                var_23 = ((((arr_1 [i_5]) * ((min(var_5, var_16))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_24 = ((var_1 % (((arr_0 [11]) ? (arr_0 [i_0]) : var_3))));
                            var_25 -= var_16;
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 7;i_9 += 1)
    {
        var_26 = ((0 ? (arr_24 [i_9]) : 52036));
        var_27 = (((((-9223372036854775793 << (((min(var_1, 13503)) - 13477))))) ? 5146253961238298099 : 5146253961238298095));
        var_28 = (((max((5146253961238298095 | 56207), ((((-9223372036854775807 - 1) ? var_17 : 52036))))) ^ 9223372036854775807));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 6;i_12 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_34 [i_13] [i_13] [i_9 - 1] = (~2144);
                            var_29 = (((arr_12 [i_13] [i_13]) ? var_0 : -var_10));
                            var_30 = 10818;
                            var_31 = ((0 <= ((153 ? 2129515069522759362 : 2118504266))));
                        }
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            var_32 = ((31197 ? (((max(94, 16383)))) : (((var_1 ? 9223372036854775807 : (arr_13 [0] [i_10] [12] [i_10] [i_10] [i_10]))))));
                            var_33 = (min(var_33, ((((arr_9 [i_9] [i_9 - 1] [i_9]) ? (min((((var_9 ? 20796 : 3))), 7667466839292227414)) : -1)))));
                            var_34 *= var_8;
                            arr_39 [i_14] [i_14] [i_14] [i_10] [i_9 + 3] [i_14] [i_9] = arr_31 [i_14] [8] [8] [8] [i_9];
                        }
                        for (int i_15 = 2; i_15 < 6;i_15 += 1)
                        {
                            var_35 = -9223372036854775807;
                            var_36 = (max(((204 ? 19295 : (-9223372036854775807 - 1))), var_3));
                        }
                        arr_43 [7] [i_10] [i_11] = (min((max(((var_2 ? (arr_28 [i_9] [i_10] [i_12]) : var_2)), 3997)), 39012));
                    }
                }
            }
        }
    }
    var_37 += var_3;
    #pragma endscop
}
