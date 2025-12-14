/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_9) != ((var_3 ? var_9 : var_3))));
    var_13 = (var_0 - var_4);
    var_14 = (min(((min((var_11 != 2381308278), ((var_6 ? 24346 : var_6))))), var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 + 1] [15]);
        var_16 += (arr_2 [1] [16]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_17 = 0;
                            arr_18 [i_3] [15] [19] [10] [17] [i_3] = (var_10 - -255);
                            var_18 = -25;
                            var_19 = (max(var_19, ((((arr_15 [i_3 - 1] [7] [i_3 + 1]) & ((((max(var_5, (arr_17 [i_4] [0] [1] [6] [i_4])))) ? (((arr_11 [22]) ? var_1 : var_7)) : (arr_3 [i_3 + 1]))))))));
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [4] [i_3] [1] [4] [14] = var_7;
                            var_20 = (max(var_20, (((((~(arr_10 [i_4] [0]))) <= (~7124293590668272889))))));
                            var_21 = (((-((var_4 ? 13 : var_7)))));
                            var_22 = (max(var_22, ((min((arr_4 [i_2 + 1]), ((((!-22314) && (arr_16 [i_2 - 1] [i_4] [i_3 + 1] [i_3 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 3])))))))));
                        }
                        var_23 = (max(var_23, ((((var_10 + (arr_17 [i_4] [0] [20] [2] [i_4]))) != ((((arr_17 [i_4] [10] [0] [0] [i_4]) ? var_6 : var_1)))))));
                        arr_22 [2] [4] [1] [16] [i_3] [3] = ((((((max((arr_7 [i_3 + 1]), (arr_7 [i_3 - 1])))) + 2147483647)) >> (var_6 + 2110258516)));
                    }
                }
            }
        }
        arr_23 [15] = 247;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_30 [1] [1] [22] = ((((1 <= (arr_12 [i_8] [1] [16])))));
                    var_24 = ((~(max((253 ^ var_3), (((arr_24 [14] [1] [5]) * var_11))))));
                    var_25 = (((arr_24 [15] [11] [0]) ? ((~(var_7 > var_8))) : ((min(((((arr_16 [14] [16] [12] [16] [0] [16] [22]) != var_3))), var_8)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_26 = ((-(min((var_7 * var_6), 1444))));
                                arr_37 [i_10] [i_10] = max((arr_5 [i_7 + 1]), ((min(((((arr_8 [22] [13]) && var_10))), 2))));
                                arr_38 [1] [3] [5] [i_10] [23] = (max(((245 * (arr_27 [4] [i_7 + 1]))), ((min(var_3, 253)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_42 [9] [17] = (var_0 != var_1);
        var_27 = var_10;
    }
    var_28 = ((var_8 ? var_9 : var_8));
    #pragma endscop
}
