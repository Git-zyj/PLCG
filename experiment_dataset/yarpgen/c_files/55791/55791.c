/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(-2147483647 - 1)));
    var_12 &= (((~var_5) / var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((-((0 ? var_7 : (arr_1 [i_0])))));
        arr_4 [i_0] = ((-25261 ? 25260 : 5215527435164139650));
        var_14 -= -3454436976154132061;
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_21 [9] [i_3] = (((((255 || ((((arr_2 [i_5] [5]) ? 78 : (-32767 - 1))))))) / (((((arr_3 [i_1]) ? 248665385 : var_3)) % (~-79)))));
                                var_15 = (~0);
                                arr_22 [i_4] [i_4] [i_3] [i_3] [11] = ((var_10 ? 34 : (((max(-78, 10311952272231677552)) + (arr_5 [i_1 - 2])))));
                                arr_23 [i_1 + 4] [i_1 + 4] [i_1 - 1] [i_1] [i_3] [i_1] [i_1] = ((((!0) / (max(-392575587, 3585370930)))));
                                arr_24 [i_1 - 2] [14] [i_2 + 1] [i_3] [7] [i_5] = ((4601846303352589119 ? (arr_12 [i_5] [i_4] [i_1 - 2]) : (arr_12 [i_4] [i_3] [i_2])));
                            }
                        }
                    }
                    var_16 ^= ((((((min(2352030203, 2147483647))))) / 4081116375));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_17 = ((((((arr_16 [1] [i_6] [i_7 - 2] [11]) % var_7))) ? (!8134791801477874063) : 1653263224));
                    var_18 = (max(var_18, (((-((147 ? (arr_0 [i_6 - 1] [i_6 - 1]) : (arr_0 [i_6 - 1] [i_6 - 1]))))))));
                    arr_31 [i_1] [i_6] [i_6] = var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_42 [0] [0] [0] [i_10] [i_9] = (((466090252044067892 / (arr_26 [i_9 - 1]))) % 1536);
                                var_19 = ((~((var_6 ? ((min((arr_3 [i_1]), (arr_17 [i_9] [i_8] [i_8] [i_8])))) : (arr_0 [2] [i_1])))));
                                var_20 = (arr_11 [i_1 - 4] [i_1 - 1] [i_1 - 4] [i_1]);
                            }
                        }
                    }
                    var_21 = arr_28 [i_8] [i_9];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    arr_50 [i_13] [9] [4] [i_1 - 3] = 3454436976154132060;
                    var_22 = (max(var_22, var_10));
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 15;i_14 += 1)
    {
        var_23 = ((-9572 ? ((((min(var_1, (arr_2 [i_14] [11])))) ^ -6347)) : (~-35)));
        var_24 = var_1;
    }
    #pragma endscop
}
