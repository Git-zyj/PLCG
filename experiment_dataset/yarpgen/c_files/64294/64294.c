/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = 262016;
        var_18 = 0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((((var_14 ? (arr_2 [9] [i_0]) : var_14))) ? ((-262016 ? 992 : -262012)) : (((var_10 ? var_0 : (arr_6 [i_2] [i_1 - 1] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 &= 7;
                                arr_12 [7] [i_3] [8] [16] [i_1 - 1] [i_3] [i_0] = 15;
                                var_21 ^= (((((var_3 ? var_15 : var_4))) ? var_4 : ((var_12 ? var_3 : (arr_3 [i_4] [i_1 - 1] [i_0])))));
                                var_22 = (((arr_1 [i_4] [i_0]) ? var_4 : (((arr_3 [18] [2] [i_4]) - var_10))));
                            }
                        }
                    }
                    arr_13 [17] [i_1 + 1] = var_3;
                    arr_14 [i_0] [i_0] [i_1 - 1] [i_2 + 1] = (((((var_1 ? (arr_7 [7] [1] [i_1 - 1] [i_0]) : var_13))) % var_11));
                    arr_15 [i_0] = ((var_7 ? ((2 ? var_12 : (arr_1 [i_1] [i_2]))) : (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_2])));
                }
            }
        }
        arr_16 [15] = (((((36011204832919552 ? var_13 : (arr_2 [i_0] [i_0])))) ? ((790964264894083353 & (arr_6 [i_0] [3] [2] [i_0]))) : ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 2409510314 : (arr_11 [i_0] [i_0] [i_0] [i_0] [18] [14] [i_0]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    var_23 = ((((((arr_4 [i_0] [12]) ^ 13248))) & ((191 ? (arr_8 [i_6 - 2] [i_0]) : (arr_3 [3] [i_5] [i_0])))));
                    arr_25 [12] [16] [10] = (20 >= 0);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_30 [i_7] [11] [i_0] = (((var_2 ? var_10 : (arr_5 [i_0]))));
                                arr_31 [17] = ((20 ? (arr_29 [i_0] [i_5] [i_7]) : 48475));
                                var_24 = ((var_15 ? 4611686018427322368 : (((arr_21 [1] [9] [i_0] [i_7 + 2]) ? (arr_9 [i_6]) : var_3))));
                                var_25 -= (((0 ? (arr_2 [19] [10]) : 0)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((0 | ((17315588794025625570 % (var_14 - var_13)))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            {
                var_27 = 14072698933209055390;

                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_28 = (-32190 | 1);
                                var_29 |= (arr_40 [i_9] [15] [i_11] [15]);
                            }
                        }
                    }
                    arr_45 [i_11] = (((4 ? 2428 : 17611572796522521896)));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 22;i_14 += 1)
                {
                    var_30 = ((var_15 ? (((125 ? 1 : var_0))) : (((arr_37 [i_9] [i_10 + 1] [i_14]) & var_5))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_31 = (arr_47 [i_14] [15] [0]);
                                var_32 = ((((arr_40 [i_9] [i_10] [i_14] [18]) > var_3)) ? var_3 : 36);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
