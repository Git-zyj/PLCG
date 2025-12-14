/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = (max(var_10, ((((arr_7 [i_1]) ? (((arr_1 [i_1] [i_1]) ? (((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_8 [2] [i_1]))))) : (((arr_7 [i_0]) ? (arr_6 [i_0] [8] [i_0] [i_1]) : var_8)))) : 2010349266)))));
                            arr_10 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = (arr_3 [i_1] [i_2] [i_1]);
                            arr_11 [i_1] [i_2] = (i_2 % 2 == 0) ? ((((var_1 + 9223372036854775807) >> ((((var_6 ^ (arr_8 [i_0] [i_2]))) - 16771))))) : ((((var_1 + 9223372036854775807) >> ((((((var_6 ^ (arr_8 [i_0] [i_2]))) - 16771)) + 7985)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_21 [4] [i_1] [i_4] = var_4;
                                var_11 = (var_9 - 3789753294);
                                var_12 = (((min(165, (arr_6 [i_1] [i_4] [2] [i_6])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_25 [i_0] [15] [i_4] [i_5] [i_7] = (arr_23 [i_0] [i_1] [i_4]);
                                var_13 = (((arr_24 [i_0] [i_1] [i_4] [i_5] [i_7] [i_1]) ? (arr_24 [i_0] [i_1] [i_1] [i_4] [i_5] [i_7]) : (arr_24 [i_0] [9] [i_4] [i_5] [i_7] [i_0])));
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                            {
                                arr_28 [i_0] [6] [7] [6] [4] = (-(arr_19 [i_0] [i_0] [i_4] [i_5] [i_8]));
                                var_14 = (min(var_14, 64));
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, (((((((((arr_12 [i_0]) << (var_4 - 499879187)))) ? (arr_3 [i_0] [i_1] [i_5]) : (arr_1 [14] [i_1]))) <= (arr_26 [i_9] [16] [i_1] [i_4] [i_4] [i_1] [i_0]))))));
                                var_16 = (arr_16 [i_0] [i_0] [i_0]);
                                arr_31 [i_9] [i_1] [i_4] [13] [i_9] [i_5] [0] = var_2;
                                arr_32 [i_0] [i_0] [i_9] [i_0] [i_5] [i_5] [i_9] = (((arr_0 [i_0] [i_5]) ? (arr_19 [i_0] [i_1] [i_4] [i_5] [i_9]) : ((-(arr_27 [i_0] [i_1] [i_4] [i_5] [i_5])))));
                            }
                            arr_33 [i_0] [i_0] [i_0] = (arr_20 [i_5] [i_4] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_17 ^= (((arr_29 [i_0] [i_0]) + ((0 / (arr_7 [i_1])))));
                var_18 = ((((min(-26662, (arr_15 [13] [13] [i_1])))) ? ((-(!var_9))) : ((((arr_16 [i_0] [i_1] [i_1]) || 47)))));
            }
        }
    }
    var_19 = 36;
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    var_20 ^= 96;

                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {

                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 15;i_14 += 1)
                        {
                            var_21 |= (var_0 + var_9);
                            arr_49 [i_10 + 2] [i_11] [i_12 + 1] [5] [i_14] [i_10 + 1] = ((!(((var_6 ? (arr_44 [i_10 + 1]) : (arr_17 [i_10 + 2] [i_11] [i_12] [i_13]))))));
                        }
                        arr_50 [i_10 + 2] [i_11] [10] [i_13] [6] [8] = var_4;
                        arr_51 [i_10 - 1] [i_11] [8] [i_13] &= ((var_4 && (((~(~var_8))))));
                        arr_52 [i_12 - 2] = (arr_19 [i_13 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_22 = (min(var_22, (arr_17 [6] [i_10 + 2] [i_12 + 1] [i_15 + 2])));
                        var_23 = ((80 ? (96 && 3839212864) : var_1));
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        arr_58 [i_10] [i_10] [i_12] [i_16] = var_2;
                        var_24 = -1;
                        var_25 ^= (((min(var_1, var_9))));
                        var_26 ^= (min((min((arr_56 [12] [i_12] [i_16]), (((arr_26 [7] [7] [i_11] [7] [i_12 + 1] [i_16] [i_16]) ? (arr_45 [i_10 + 1] [i_11] [i_12] [i_16] [i_12] [i_16] [i_11]) : (arr_12 [11]))))), ((((((arr_5 [i_10] [i_11] [i_12] [i_16]) <= var_9)) && (arr_13 [i_12 + 1] [i_12 - 1] [i_10 + 1]))))));
                    }
                    arr_59 [i_12] [i_10] [i_11] [i_10] = ((17414 ? 3247223253 : 2147483647));
                }
            }
        }
    }
    #pragma endscop
}
