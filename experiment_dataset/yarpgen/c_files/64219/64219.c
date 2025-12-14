/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = -2377210841036151805;
                arr_4 [i_0] [i_0] = var_6;
                arr_5 [i_1] [i_0] = (!-1224872826);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = arr_2 [i_1] [i_1] [5];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [21] [i_1] [i_1] [i_3] [i_4] = (((((arr_8 [i_2] [i_4 - 1]) + 9223372036854775807)) << ((((((-(min(103, 14)))) + 32)) - 18))));
                                var_15 = 14;
                                var_16 = ((-(((arr_14 [i_0] [14] [i_2] [i_3] [i_4 - 2] [i_4]) * (var_9 / 1224872825)))));
                                arr_18 [i_0] [i_1] [4] [i_4] [i_4 - 2] = (((((~((min(-3148, var_9)))))) ^ (5285 / var_12)));
                                var_17 -= ((-1103782478 % ((((arr_6 [11] [i_1] [i_2] [i_3]) || (arr_6 [i_0] [i_1] [i_1] [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [1] [i_0] [i_2] [i_0] [0] [i_6 - 2] = ((var_5 - (((-(~var_10))))));
                                arr_26 [i_6] [i_0] [i_2] [i_2] [i_6] [i_5] = ((((-2041506115504556067 || (1 ^ 60243)))) + var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, 2041506115504556066));
                                var_19 ^= (max((var_2 - var_12), (var_10 ^ var_7)));
                            }
                        }
                    }
                    var_20 = var_4;
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_41 [i_10] [i_1] [i_10] [i_0] = var_9;
                                var_21 = (min(var_21, ((((((-(arr_13 [i_11] [i_10] [i_9] [i_1] [i_0])))) + var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((1 * (((!((max(var_3, 1224872823))))))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_23 = (29758 * var_2);

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_24 ^= 1224872825;
                    arr_50 [i_12] [i_13] [i_14] = (min(((~(max(3682598198764316338, 1)))), 1068356267702283285));
                }
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                var_25 *= ((-(var_7 / var_12)));
                                arr_59 [i_17] [i_13] [i_15] [i_13] [i_12] = ((((~(1 & var_5))) >> (((max((var_8 <= 1224872825), (var_12 - var_5))) - 1158958694))));
                                var_26 -= 4671951032613982917;
                            }
                        }
                    }
                    arr_60 [i_13] = var_11;
                }
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 23;i_20 += 1)
                        {
                            {
                                var_27 = ((~(((var_1 | -1224872826) + 11383640323530627024))));
                                arr_69 [i_13] = (arr_53 [i_20 + 1] [i_12] [9] [i_13]);
                            }
                        }
                    }
                    var_28 = ((-(7063103750178924592 || 11383640323530627024)));
                }
            }
        }
    }
    #pragma endscop
}
