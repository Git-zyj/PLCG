/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_6 ? 1 : var_2))) ? var_3 : var_8))) ? (min(1, (~var_4))) : var_7));
    var_12 = (((var_2 / -6855166226482781258) < var_3));
    var_13 = ((((min(var_5, 6855166226482781258))) ? (min(var_5, 42908)) : (var_6 && var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = (min((min(var_6, (arr_4 [i_0] [i_1] [i_2] [i_3])), (arr_5 [i_0] [i_2] [5]))));
                            var_15 |= ((~((((((1 ? (arr_7 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0]) : var_3))) <= (~6775960024028269129))))));
                            var_16 *= ((((min(786718357, 1))) ? (((arr_0 [i_0] [i_1]) ? (arr_0 [i_3] [i_1]) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]))) : ((53730 ? 1 : 32078))));
                            var_17 = (max(var_17, 2691240207));
                        }
                    }
                }
                var_18 = ((((((~(((arr_5 [i_0] [i_0] [i_0]) >> (149 - 149))))) + 2147483647)) << ((((var_5 ^ (min(2691240207, 1)))) - 1))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_4] = (arr_9 [i_0] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_16 [i_4] [7] = var_6;
                                var_19 *= 1782185313;
                                arr_17 [1] [i_1] [i_4] [i_0] [8] = ((1603727078 ? -2132283495 : 1782185335));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 += (((arr_14 [i_1] [i_9]) != ((var_9 ? 201 : var_4))));
                                arr_29 [i_8] = (((((var_8 << (((arr_1 [i_0]) - 3081935758246124037))))) ? (arr_1 [8]) : (arr_1 [i_0])));
                            }
                        }
                    }
                    arr_30 [i_1] [10] [i_7] = (((-3953 ? (arr_4 [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_7]))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_10] [i_11] [i_11] [i_0] = (((arr_13 [i_0] [i_1] [12] [i_1]) ? 1 : (((1696575596 & var_6) ? (~46) : ((var_10 ? -4515001585030638006 : 1))))));
                        arr_38 [1] [3] [1] [1] [i_0] [i_11] = ((-(arr_8 [i_0] [i_1] [i_10] [6])));
                    }
                    var_21 = (((var_10 || ((min((arr_24 [i_10]), var_7))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_22 = (arr_15 [i_0] [i_1] [1] [i_12] [i_13]);
                                arr_45 [0] [0] [0] [i_0] [i_0] = (arr_18 [4] [i_1] [i_10] [i_12]);
                                arr_46 [8] [i_1] [i_10] [i_10] [i_13] = (arr_26 [i_1]);
                                arr_47 [0] [i_13] [i_13] [i_13] = ((var_0 ? (((arr_8 [i_0] [10] [i_0] [i_0]) / var_8)) : ((1 ? 20341 : 1501635816))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((3942 - (min((~1), 1945504171)))))));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (((3074001849 ? (arr_27 [10] [i_14]) : -1)))));
                    var_25 *= ((-1 == (arr_27 [i_1] [i_14])));
                    var_26 = ((~(arr_9 [i_14] [i_14] [i_0])));
                    arr_51 [7] [7] = ((((min(var_10, ((-39 ? var_1 : (arr_34 [2] [12] [i_14] [i_1] [i_0])))))) ? 2713723057 : 579775560));
                }
            }
        }
    }
    var_27 = var_4;
    #pragma endscop
}
