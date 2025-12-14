/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 *= var_11;
                var_13 = ((!((min(var_10, ((-24 ? 9146120402336337555 : -1843522017)))))));
                arr_5 [i_0] = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_14 |= ((83 ? 19491 : 46045));
                    arr_16 [i_2 - 2] [i_3] [i_4] [i_3] = (arr_10 [i_2 - 3] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((min(var_7, ((10669422131951373336 ? var_0 : 9146120402336337555))))))));
                                arr_21 [i_2] [i_3] [i_2] [i_2] [i_6 - 2] = (-566761520 == var_11);
                                var_16 = (((((3253072813 ? (arr_2 [i_2 - 1]) : var_10))) ? (arr_2 [i_2 - 2]) : ((~(arr_2 [i_2 - 3])))));
                            }
                        }
                    }
                    arr_22 [i_4] [i_3] [i_3 - 1] = (114 | var_10);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_25 [i_3 + 2] [i_3] = (((((13400180442310206266 ? var_8 : (arr_3 [i_7] [i_2])))) ? (arr_0 [i_3] [i_7]) : 23));
                        var_17 = (var_2 / 43);
                        arr_26 [i_2 - 2] [4] [4] [2] |= ((-(250 * var_11)));
                        var_18 = (((((2147483392 ? 6 : (arr_13 [8] [8])))) ? 187 : ((420760388 ? 32971 : var_0))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_19 = (((var_3 == var_0) ? ((-64 ? (arr_7 [9]) : var_0)) : ((var_9 ? var_4 : (arr_17 [i_4] [i_4] [i_2] [4])))));
                        var_20 = (((((var_0 ? (arr_13 [11] [i_3]) : (arr_1 [i_8])))) ? (((((arr_15 [4] [i_2 + 1] [i_2]) == (arr_12 [i_3] [11] [i_3]))))) : -1887780685));
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_21 = (((67108864 - (arr_14 [i_4] [i_9 - 3] [i_9 + 2] [i_9 + 2]))));
                        var_22 |= (var_7 | 163);
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [3] = ((var_11 >= (arr_34 [i_2 - 1])));
                        arr_36 [i_3] [10] [i_2 + 1] [i_3] = var_9;
                        var_23 = (max(var_23, ((((((-1516212561 ? 661774127 : var_6))) ? (arr_11 [i_4]) : var_7)))));
                    }
                }
            }
        }
    }
    var_24 *= (((!5974930435273118407) ^ ((939524096 ? 1 : var_7))));
    #pragma endscop
}
